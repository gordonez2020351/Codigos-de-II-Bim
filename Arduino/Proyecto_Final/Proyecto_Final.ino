/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AM 
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto Final
   Dev: Gabriel José María Ordoñez Rubí
   Fecha: 28 de Mayo de 2024

*/

//Librerias
#include <Keypad.h>             
#include <Wire.h>    
#include <LiquidCrystal_I2C.h>  
#include <Servo.h> 

//Directivas de preprocesador Servo
#define pin_Servo 12

//Directivas de preprocesador LCD
#define direccion_lcd 0x20
#define filas 2
#define columnas 16

//Definicion de los Pines 
const int leds[] = {A0 , A1 , A2 , A3};

//Macros o directivas de preprocesador
#define filas_teclado 4   //cantidad de filas que posee el teclado matricial.
#define columnas_teclado 4 //cantidad de columnas que posee el teclado matricial.
#define f1_teclado 6  //pin6 conectado a la fila 1
#define f2_teclado 5  //pin5 conectado a la fila 2
#define f3_teclado 0  
#define f4_teclado 0  
#define c1_teclado 4  //pin4 conectado a la columna 1
#define c2_teclado 3  //pin3 conectado a la columna 2
#define c3_teclado 2  //pin2 conectado a la columna 3
#define c4_teclado 0  

//Declaracion pines Display
const int a = 0;
const int b = 8;
const int c = 9;
const int d = 0;
const int e = 7;
const int f = 10;
const int g = 11;

const int E = 7;
const int segmentos[E] = {a, b, c, d, e, f, g};

const int numeros[10][E] = {
  /*9*/ {0, 1, 0, 0, 0, 0, 0},
  /*9*/ {1, 0, 0, 0, 0, 0, 0},
  /*9*/ {0, 0, 0, 0, 0, 1, 0},
  /*9*/ {0, 0, 0, 0, 0, 0, 1},
  /*9*/ {0, 0, 1, 0, 0, 0, 0},
  /*9*/ {1, 1, 1, 0, 0, 1, 1},

};
const int APAGADO = LOW;


//Creo una matriz led con la disposicion fisica de las teclas
char keys[filas_teclado][columnas_teclado] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

byte pines_filas[filas_teclado] = {f1_teclado,f2_teclado,f3_teclado,f4_teclado};
byte pines_columnas[columnas_teclado] = {c1_teclado,c2_teclado,c3_teclado,c4_teclado};

Keypad teclado_Mache = Keypad( makeKeymap(keys), pines_filas, pines_columnas, filas_teclado,columnas_teclado);  

//Constructor
LiquidCrystal_I2C lcd_Mache(direccion_lcd, columnas, filas); //LCD con direccion 0x20 y tamanio 16x2

//Constructor
Servo Servo_Mache; 


void setup(){
Serial.begin(9600); 
//-----------------LCD------------------
//Configuraciones
  lcd_Mache.init(); //inicio la comunicacion serial con el modulo i2c
  lcd_Mache.backlight(); //Enciendo la luz de fondo para poder ver el texto
  lcd_Mache.print("     Gabriel     ");  //Muestro el texto en la LCD
  lcd_Mache.setCursor(0,1);
  lcd_Mache.print(" PROYECTO FINAL ");  
//-----------------servo------------------

    Servo_Mache.attach(pin_Servo);   // servo 
    //Especifico que en el pin12 voy a usar un servomotor.

//-----------------Autofantastico------------------
  for (int S=0; S<sizeof(leds); S++){
    pinMode(leds[S], OUTPUT);}
  
for (int q=0; q<E; q++){
    pinMode(segmentos[q], OUTPUT);
    digitalWrite(segmentos[q], APAGADO);
    }
}

void loop(){   
  char tecla = teclado_Mache.getKey();  //Obtengo la tecla que presione
  if(tecla){
    Serial.print("La tecla presionada es: ");   
    Serial.println(tecla);    
  }
  
  
//contador de 99 a 0 
  if(tecla == '1'){ // if de tecla 1
    Serial.println("conteo 99 a 0"); // inicia cotador de 0 a 99
    for(int i=0; i<100;i++){
    Serial.println(i);
    delay(200);}
   }    
  
  
//contador de 0 a 99
  if(tecla == '2'){ // if de tecla 2
    Serial.println("conteo 0 a 99"); // inicia cotador de 0 a 99
    for(int i=90; i>=0;i--){
    Serial.println(i);
    delay(200);}
   }    
  
  
  
// Autofantastico 
if(tecla == '3'){
   for (int S=0; S<sizeof(leds); S++){
    digitalWrite(leds[S], HIGH);
     delay(200);
    digitalWrite(leds[S], LOW); 
  }
    for (int S=sizeof(leds)-1; S>0; S--){
    digitalWrite(leds[S], HIGH);
     delay(200);
    digitalWrite(leds[S], LOW);} 
  }

  
  
// Animacion
  if(tecla == '4'){
Serial.println("Inicio de Simulacion"); 
    
    //H
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(e, HIGH);
      digitalWrite(f, HIGH);
      digitalWrite(g, HIGH);
      delay(2000);
  
    digitalWrite(b, LOW);
      digitalWrite(c, LOW);
      digitalWrite(e, LOW);
      digitalWrite(f, LOW);
      digitalWrite(g, LOW);
    
    //I
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      delay(2000);
    
      digitalWrite(b, LOW);
      digitalWrite(c, LOW);

}
 


// servomotor
  if(tecla == '5'){ 
    Serial.println("inicio del servo"); 
    Servo_Mache.write(0);
    delay(100);
    Servo_Mache.write(180); 
    delay(100);
     Servo_Mache.write(0);} 
  } 
