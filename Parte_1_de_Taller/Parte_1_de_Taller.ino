/* 
  Fundación Kinal
    Centro Educativo Técnico Laboral KINAL
    QUinto Perito
    EB5AM
    Taller de elctronica Digital y Reparación de Computadoras I
    Proyecto: Como leer un pin digital
    Gabriel Ordoñez 2020351
    12 de Abril
*/
   
   //Directivas del preprocesador
   #define push_button 2 // push button conectado al pin2
   #define  led 3
   
   void setup() {
     pinMode(push_button, INPUT); //Pin2 como enrtrada
     pinMode(led, OUTPUT);
     Serial.begin(9600);            //Inicio de la comunicación serial
     Serial.println("Lectura de un pulsador");  //Envio el texto entre comillas al puerto serie
}

void loop() {
  //Variable local, que se encarga de almacenar el valor (abierto o cerrado)
    //del pulsador conectado al pin2
    bool estado_boton = digitalRead(push_button);
    if (estado_boton == HIGH) //¿He presionado el interruptor?
  {
      //Si lo he presionado
        digitalWrite(led, LOW); //apago el led
  } else {
      //si no lo he presionado
        digitalWrite(led, HIGH); //Mantengo encendido el led
    }

}
   
   
   
   
