#include <Adafruit_NeoPixel.h>

#define pin_neopixel 11 // Cambia el pin del NeoPixel a 11
#define num_neopixel 7
#define P_trig 2
#define P_echo 3

int displayPins[7] = {4, 5, 6, 7, 8, 9, 10}; // Pines del display de 7 segmentos
int aforo = 0;
float tiempo_de_espera;
float distancia;

// Constructor neopixel
Adafruit_NeoPixel pixel_indicator = Adafruit_NeoPixel(num_neopixel, pin_neopixel, NEO_GRB + NEO_KHZ800);

void setup() {
  Serial.begin(9600);
  Serial.println("Practica 1: Contador de aforo");
  pinMode(P_trig, OUTPUT);
  pinMode(P_echo, INPUT);
  for (int i = 0; i < 7; i++) {
    pinMode(displayPins[i], OUTPUT);
  }

  // Inicialización del NeoPixel
  pixel_indicator.begin();
  pixel_indicator.show(); // Inicializa el NeoPixel apagado

  // Inicializar el display y el NeoPixel
  showNumber(aforo);
  updateNeopixel(aforo); // Inicializa el color del NeoPixel
}

float readUltrasonicDistance() {
  // Envía un pulso de 10 microsegundos para iniciar la medición
  digitalWrite(P_trig, LOW);
  delayMicroseconds(2);
  digitalWrite(P_trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(P_trig, LOW);
  
  // Lee el tiempo que tarda en volver el pulso
  float duration = pulseIn(P_echo, HIGH);
  
  // Calcula la distancia en centímetros
  float distance = (duration / 2) / 29.15;
  
  return distance;
}

void showNumber(int num) {
  // Define los patrones para cada número (0-9)
  const byte numbers[10][7] = {
    {HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, LOW},  // 0
    {LOW, HIGH, HIGH, LOW, LOW, LOW, LOW},      // 1
    {HIGH, HIGH, LOW, HIGH, HIGH, LOW, HIGH},   // 2
    {HIGH, HIGH, HIGH, HIGH, LOW, LOW, HIGH},   // 3
    {LOW, HIGH, HIGH, LOW, LOW, HIGH, HIGH},    // 4
    {HIGH, LOW, HIGH, HIGH, LOW, HIGH, HIGH},   // 5
    {HIGH, LOW, HIGH, HIGH, HIGH, HIGH, HIGH},  // 6
    {HIGH, HIGH, HIGH, LOW, LOW, LOW, LOW},     // 7
    {HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, HIGH}, // 8
    {HIGH, HIGH, HIGH, HIGH, LOW, HIGH, HIGH}   // 9
  };

  // Apaga todos los segmentos
  for (int i = 0; i < 7; i++) {
    digitalWrite(displayPins[i], numbers[num][i]);
  }
}

void updateNeopixel(int num) {
  if (num == 9) {
    pixel_indicator.fill(pixel_indicator.Color(255, 0, 0)); // Rojo
  } else {
    pixel_indicator.fill(pixel_indicator.Color(0, 255, 0)); // Verde
  }
  pixel_indicator.show();
}

void loop() {
  distancia = readUltrasonicDistance(); // Llama a la función para leer la distancia
  Serial.print(distancia);
  Serial.println(" cm");

  if (distancia < 10) {
    aforo++;
    if (aforo > 9) aforo = 0; // Reinicia el aforo si pasa de 9
    showNumber(aforo); // Muestra el nuevo valor en el display
    updateNeopixel(aforo); // Actualiza el color del NeoPixel
  }
  
  delay(1000);
}
