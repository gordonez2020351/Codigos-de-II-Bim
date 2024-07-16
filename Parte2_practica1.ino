#include <LiquidCrystal_I2C.h> //liberia para i2c
#include <Wire.h>

//Definicion de pines
const int Hall_sensor  = 3;
const int infra_sensor = 2;

#define IN1  5
#define IN2  6
#define IN3  7
#define IN4  8

const int pin_pot = A0;

#define direccion_lcd 0x27
#define filas 2
#define columnas 16

//Constructor
LiquidCrystal_I2C LCD_Mache(direccion_lcd, columnas, filas);

bool state_sensor;
volatile int  contador;
int pototo;



// Secuencia de pasos (par máximo)
int paso [8][4] =
{
  {1, 0, 0, 0},
  {1, 1, 0, 0},
  {0, 1, 0, 0},
  {0, 1, 1, 0},
  {0, 0, 1, 0},
  {0, 0, 1, 1},
  {0, 0, 0, 1},
  {1, 0, 0, 1}
};

int Interrupcion() {
  contador ++;
}

//variables
int valor = 0;

void setup() {
  Serial.begin(9600);
  Serial.println("Parte 2 de Practica 1: ");

  LCD_Mache.init();
  LCD_Mache.backlight();
  LCD_Mache.setCursor(0, 0);
  LCD_Mache.print("Conteo de Rev");
  LCD_Mache.setCursor(0, 1);
  LCD_Mache.print("No. de Rev: ");


  pinMode(infra_sensor, INPUT);
  //pines stepper
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(Hall_sensor, INPUT);



}

void loop() {
  attachInterrupt(digitalPinToInterrupt(Hall_sensor), Interrupcion, FALLING);
  LCD_Mache.setCursor(13, 1);
  LCD_Mache.print(contador);

  state_sensor = digitalRead(infra_sensor);


  if (state_sensor == LOW) {

    pototo = map(analogRead(A0), 0, 1023, 1, 3);


    for (int i = 0; i < 8; i++)
    {
      digitalWrite(IN1, paso[i][0]);
      digitalWrite(IN2, paso[i][1]);
      digitalWrite(IN3, paso[i][2]);
      digitalWrite(IN4, paso[i][3]);
      delay(pototo);
    }

  }//if
}
