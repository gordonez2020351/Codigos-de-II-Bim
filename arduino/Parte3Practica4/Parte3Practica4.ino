/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AM 
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Parte 3- Práctica4
   Dev: Gabriel José María Ordoñez Rubí
   Fecha: 26 de abril 2024

*/


int pines[] = {2, 3, 4, 5, 6}; 
int time = 0;
void setup() {
  Serial.begin(9600);
  pinMode(2, INPUT);
  pinMode(3, INPUT); 
  for (int p = 0; p < 9; p++) 
  {
    pinMode(pines[p], OUTPUT);
  }
}

void loop() {
  
  //Impresión del mensaje.
  
  if(digitalRead(A0)==HIGH){
    Serial.println("Practica No. 4 - Gabriel Rubi");
    delay (1500);
  }
  
  //Secuencia auto fantastico.

  if(digitalRead(A1)==HIGH){
    time = 500;
    
    for (int p = 0; p<9 ; p++)
    {
    digitalWrite(pines[p], HIGH);
    delay(time);
    digitalWrite(pines[p], LOW);
    delay(time);
    }
    
    for (int p = 9; p>=0 ; p--)
    {
    digitalWrite(pines[p], HIGH);
    delay(time);
    digitalWrite(pines[p], LOW);
    delay(time);
    }
  }

  //Display
  
   if(digitalRead(A2)==HIGH){
     
     //C
 	  digitalWrite(7, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(11, HIGH);
  	  digitalWrite(12, HIGH);
      delay(2000);
  
      digitalWrite(7, LOW);
      digitalWrite(10, LOW);
      digitalWrite(11, LOW);
  	  digitalWrite(12, LOW);
     
     //U
      digitalWrite(9, HIGH);
      digitalWrite(8, HIGH);
      digitalWrite(12, HIGH);
      digitalWrite(11, HIGH);
      digitalWrite(10, HIGH);
      delay(2000);
  
      digitalWrite(9, LOW);
      digitalWrite(8, LOW);
      digitalWrite(12, LOW);
      digitalWrite(11, LOW);
      digitalWrite(10, LOW);
     
     //A
      digitalWrite(13, HIGH);
      digitalWrite(12, HIGH);
      digitalWrite(11, HIGH);
      digitalWrite(9, HIGH);
  	  digitalWrite(8, HIGH);
      digitalWrite(7, HIGH);
      delay(2000);
  
      digitalWrite(13, LOW); 
      digitalWrite(12, LOW);
      digitalWrite(11, LOW);
      digitalWrite(9, LOW);
  	  digitalWrite(8, LOW);
      digitalWrite(7, LOW);
     
     //T
      digitalWrite(9, HIGH);
      digitalWrite(8, HIGH);
      digitalWrite(7, HIGH);
      delay(2000);
  
      digitalWrite(9, LOW);
      digitalWrite(8, LOW);
      digitalWrite(7, LOW);
     
     //R
      digitalWrite(7, HIGH);
      digitalWrite(12, HIGH);
      digitalWrite(11, HIGH);
      delay(2000);
  
      digitalWrite(7, LOW);
      digitalWrite(12, LOW);
      digitalWrite(11, LOW);
     
     //O
      digitalWrite(10, HIGH);
      digitalWrite(12, HIGH);
      digitalWrite(11, HIGH);
      digitalWrite(9, HIGH);
  	  digitalWrite(8, HIGH);
      digitalWrite(7, HIGH);
      delay(2000);
  
      digitalWrite(10, LOW); 
      digitalWrite(12, LOW);
      digitalWrite(11, LOW);
      digitalWrite(9, LOW);
  	  digitalWrite(8, LOW);
      digitalWrite(7, LOW);
     
   } //if display
  
  //Gracías por su atención
  
  if (digitalRead(A0)== HIGH && digitalRead(A2)== HIGH){
  
    Serial.println("Gracias por su atencion.");
  }
  
  
  else  if(digitalRead(A1)== HIGH && digitalRead(A3)== HIGH){
  
    Serial.println("Gracias por su atencion.");
  } //if agradecimiento

}  