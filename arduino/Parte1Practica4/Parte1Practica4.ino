/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AM 
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Parte 1- Práctica4
   Dev: Gabriel José María Ordoñez Rubí
   Fecha: 26 de abril 2024

*/


  int conta dor = 0;


void setup() {
  Serial.begin(9600); 
  Serial.println("Contador del 0 al 9");
  pinMode(2, INPUT);    
  pinMode(3, INPUT);
  pinMode(4, INPUT); 

}


void loop() {  //configuro mi cilo infinito
  
  for(int num = 0; num<=9; num++){
    
    
  if(digitalRead(2)==HIGH)  //Leo el estado digital del pin 2 y si este es bajo.
  {
   delay(1000);
   contador = contador;   
  }

  else if(digitalRead(3)==HIGH)
  {
    delay(2000);
      contador = contador;
  }
  
  else if(digitalRead(4)==HIGH)
  {
    delay(3000);
      contador = contador;
  }
  
    if(digitalRead(2)== HIGH && digitalRead(3)== HIGH && digitalRead(4)==HIGH) //determino que pasará al no presionar ninguno
    {
      delay(500);
    } //if
  
    Serial.println(num);
    
    
  } //for
} //loop
    
