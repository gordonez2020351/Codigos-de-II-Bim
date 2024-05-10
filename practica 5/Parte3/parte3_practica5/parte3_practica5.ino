/*

   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AM 
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Parte 1 - Practica 5
   Gabriel Ordoñez 
   Fecha: 03 de Mayo de 2024
*/

const int pinBuzzer = 3;

void setup (){
Serial.begin(9600);
pinMode(4, OUTPUT); 
  
display ();
}
  
  
void loop() {  
}

  
int display ()
{
  
  //9
  	  digitalWrite(13, HIGH); 
      digitalWrite(12, HIGH);
      digitalWrite(11, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(8, HIGH);
      digitalWrite(7, HIGH);
      delay(1000);
  
      digitalWrite(13, LOW);
      digitalWrite(12, LOW);
      digitalWrite(11, LOW);
      digitalWrite(10, LOW);
      digitalWrite(8, LOW);
      digitalWrite(7, LOW);
  
  // 8
  
      digitalWrite(13, HIGH); 
      digitalWrite(12, HIGH);
      digitalWrite(11, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(8, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(9, HIGH);
      delay(1000);
  
      digitalWrite(13, LOW); 
      digitalWrite(12, LOW);
      digitalWrite(11, LOW);
      digitalWrite(10, LOW);
      digitalWrite(8, LOW);
      digitalWrite(7, LOW);
      digitalWrite(9, LOW);
  
  //7
  
      digitalWrite(13, HIGH); 
      digitalWrite(12, HIGH);
      digitalWrite(11, HIGH);
      delay(1000);
  
      digitalWrite(13, LOW); 
      digitalWrite(12, LOW);
      digitalWrite(11, LOW);
  
  // 6
  
      digitalWrite(13, HIGH); 
      digitalWrite(9, HIGH);
      digitalWrite(11, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(8, HIGH);
      digitalWrite(7, HIGH);
      delay(1000);
  
      digitalWrite(13, LOW); 
      digitalWrite(9, LOW);
      digitalWrite(11, LOW);
      digitalWrite(10, LOW);
      digitalWrite(8, LOW);
      digitalWrite(7, LOW);

  // 5
  
      digitalWrite(13, HIGH); 
      digitalWrite(11, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(8, HIGH);
      digitalWrite(7, HIGH);
      delay(1000);
  
      digitalWrite(13, LOW); 
      digitalWrite(11, LOW);
      digitalWrite(10, LOW);
      digitalWrite(8, LOW);
      digitalWrite(7, LOW);
  
  //4
  
      digitalWrite(12, HIGH);  
      digitalWrite(7, HIGH);
      digitalWrite(11, HIGH);
      digitalWrite(8, HIGH);
      delay(1000); 
  
      digitalWrite(12, LOW);  
      digitalWrite(7, LOW);
      digitalWrite(11, LOW);
      digitalWrite(8, LOW);
  
  //3
  
      digitalWrite(12, HIGH);  
      digitalWrite(10, HIGH);
      digitalWrite(11, HIGH);
      digitalWrite(13, HIGH);
      digitalWrite(7, HIGH);
      delay(1000); 
  
      digitalWrite(12, LOW);  
      digitalWrite(10, LOW);
      digitalWrite(11, LOW);
      digitalWrite(13, LOW);
      digitalWrite(7, LOW);
  
  // 2
  
      digitalWrite(13, HIGH); 
      digitalWrite(12, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(7, HIGH);
      delay(1000);
  
      digitalWrite(13, LOW); 
      digitalWrite(12, LOW);
      digitalWrite(10, LOW);
      digitalWrite(9, LOW);
      digitalWrite(7, LOW);
  
  // 1
  
      digitalWrite(12, HIGH);  
      digitalWrite(11, HIGH);
      delay(1000);
  
      digitalWrite(12, LOW);  
      digitalWrite(11, LOW);
  
  // 0
  
      digitalWrite(13, HIGH); 
      digitalWrite(12, HIGH);
      digitalWrite(11, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(8, HIGH);
      digitalWrite(9, HIGH);
      delay(1000);
  


 if (digitalRead(13)==HIGH && digitalRead(12)==HIGH && digitalRead(11)==HIGH) digitalRead(10)==HIGH && digitalRead(9)==HIGH && digitalRead(8)==HIGH;{
   delay(100);
   tone (pinBuzzer, 250, 500); // buzzer
   delay(530);
   digitalWrite(4, HIGH);
 }
}