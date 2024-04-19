/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AM / EB5AV 
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Tipos de datos - Structs
   Gabriel José María Ordoñez Rubí
   Fecha: 19 de abril

*/

//Variables
/*
Los Structs son un tipo de dato que puede contener dentro de ellos, diversos tipos de datos.
*/

//Definición de la estructura, con nombre y los tipos de datos que puede contener
struct dulce_1
{
  char nombre[50];    
  byte cantidad_1;  
};



struct dulce_2
{
  char nombre[50];    
  byte cantidad_2; 

};



struct dulce_3
{
  char nombre [50]; 
  byte cantidad_3;  

};


struct dulce_4
{
  char nombre [50];
  byte cantidad_4;   

};


dulce_1 chocolates = {"Hershey", 35};
dulce_2 golosinas = {"M&Ms´s", 55};
dulce_3 gomitas = {"Trolli", 30};
dulce_4 turron = {"Musketeers", 25};

byte contador = 0;


//Funcion donde realizo las configuraciones
void setup() {
  Serial.begin(9600);    
  Serial.println("Catalogo de productos - Structs"); 
  Serial.println("izquierda subir - derecha bajar");
  pinMode(2, INPUT);
  pinMode(3, INPUT);
}

void loop() {

  if(digitalRead(2)==HIGH)  //Leo el estado digital del pin 2 y si este es bajo.
  {
   delay(350);
   contador = contador+1;  
    
  if(contador == 1){
  Serial.print("El nombre del dulce 1 es: ");
  Serial.println(chocolates.nombre);
  Serial.print("La cantidad de dulce 1 es: ");
  Serial.println(chocolates.cantidad_1);
  }
    
     if(contador == 2){
  Serial.print("El nombre del dulce 2 es: ");
  Serial.println(golosinas.nombre);
  Serial.print("La cantidad de dulce 2 es: ");
  Serial.println(golosinas.cantidad_2);
  }

     if(contador == 3){
  Serial.print("El nombre del dulce 3 es: ");
  Serial.println(gomitas.nombre);
  Serial.print("La cantidad de dulce 3 es: ");
  Serial.println(gomitas.cantidad_3);
  }

     if(contador == 4){
  Serial.print("El nombre del dulce 4 es: ");
  Serial.println(turron.nombre);
  Serial.print("La cantidad de dulce 4 es: ");
  Serial.println(turron.cantidad_4);
  }
  }



  else if(digitalRead(3)==HIGH)
  {
   delay(350);
   contador = contador-1;   
    
  if(contador == 1){
  Serial.print("El nombre del dulce 1 es: ");
  Serial.println(chocolates.nombre);
  Serial.print("La cantidad de dulce 1 es: ");
  Serial.println(chocolates.cantidad_1);
  }
    
     if(contador == 2){
  Serial.print("El nombre del dulce 2 es: ");
  Serial.println(golosinas.nombre);
  Serial.print("La cantidad de dulce 2 es: ");
  Serial.println(golosinas.cantidad_2);
  }

     if(contador == 3){
  Serial.print("El nombre del dulce 3 es: ");
  Serial.println(gomitas.nombre);
  Serial.print("La cantidad de dulce 3 es: ");
  Serial.println(gomitas.cantidad_3);
  }

     if(contador == 4){
  Serial.print("El nombre del dulce 4 es: ");
  Serial.println(turron.nombre);
  Serial.print("La cantidad de dulce 4 es: ");
  Serial.println(turron.cantidad_4);
  }
  }
}
