/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AM 
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Parte 4- Práctica4
   Dev: Gabriel José María Ordoñez Rubí
   Fecha: 26 de abril 2024

*/


  int contador = 0;


void setup() {
  Serial.begin(9600); 
  Serial.println("Contador del 0 al 99");
  pinMode(2, INPUT);    
  pinMode(3, INPUT);
 

}


void loop() {  //configuro mi cilo infinito
  
    
 if
    (digitalRead(2)==HIGH){ 
   delay(500);
   contador = contador+1; 
     if (contador == 100){
      contador = 0;}
    Serial.println(contador);}
    
    else if(digitalRead(3)==HIGH) 
  {
   delay(500);
      contador = contador-1;
      if (contador <0){
      contador = 99;}
     Serial.println(contador);}
    
     
    }
