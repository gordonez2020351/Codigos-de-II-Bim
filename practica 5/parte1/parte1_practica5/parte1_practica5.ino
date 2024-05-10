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

//funciones de 1ra conversion.
float valor_peso = 0.0;
float kg = 21.5;
float kg_lb(float kg){
  float resultado;
  resultado = kg*2.20462;
  return resultado;
}

//funciones de 2da conversion.
float valor_corriente = 0.0;
float A = 33.7;
float A_mA (float A){
  float resultadomA;
  resultadomA = A*1000000;
  return resultadomA;
}


void setup ()
{
  //conversion kg a lb.
  Serial.begin(9600);
  Serial.println("Peso kg a lb.");
  valor_peso = kg_lb(kg);
  Serial.print("21.5kg es igual a: ");
  Serial.print(valor_peso);
  Serial.println(" libras.");
  Serial.println("");
  
  
  //conversion A a mA.
  Serial.begin(9600);
  Serial.println("corriente A a mA.");
  valor_corriente = A_mA(A);
  Serial.print("33.7A es igual a: ");
  Serial.print(valor_corriente);
  Serial.println(" mA.");
  
  //Declaración de pines
  pinMode(5, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);

}





void loop() { 
  
  //Numero uno.
  
      digitalWrite(12, HIGH);
      digitalWrite(11, HIGH);
      delay(1000);
  
      digitalWrite(12, LOW);
      digitalWrite(11, LOW);
  
  //Numero tres.
  
      digitalWrite(5, HIGH);
      digitalWrite(12, HIGH);
      digitalWrite(11, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(7, HIGH);
      delay(1000);
  
      digitalWrite(5, LOW); 
      digitalWrite(12, LOW);
      digitalWrite(11, LOW);
      digitalWrite(10, LOW);
      digitalWrite(7, LOW);
  
  //Numero cinco.
  
      digitalWrite(5, HIGH);
      digitalWrite(8, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(11, HIGH);
      digitalWrite(10, HIGH);
      delay(1000);
  
      digitalWrite(5, LOW);
      digitalWrite(8, LOW);
      digitalWrite(7, LOW);
      digitalWrite(11, LOW);
      digitalWrite(10, LOW);
  
  //Numero siete.
  
      digitalWrite(5, HIGH);
      digitalWrite(12, HIGH);
      digitalWrite(11, HIGH);
      delay(1000);
  
      digitalWrite(5, LOW);
      digitalWrite(12, LOW);
      digitalWrite(11, LOW);
  
//Numero nueve.
  
 	  digitalWrite(5, HIGH);
      digitalWrite(12, HIGH);
      digitalWrite(11, HIGH);
      digitalWrite(10, HIGH);
  	  digitalWrite(8, HIGH);
      digitalWrite(7, HIGH);
      delay(1000);
  
      digitalWrite(5, LOW); 
      digitalWrite(12, LOW);
      digitalWrite(11, LOW);
      digitalWrite(10, LOW);
  	  digitalWrite(8, LOW);
      digitalWrite(7, LOW);
}




