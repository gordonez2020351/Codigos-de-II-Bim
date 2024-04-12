/*
  Fundaion Kinal
    Centro Educativo Técnico Laboral KINAL
    Quinto Perito
    Quinto Electrónica
    EB5AM
    Taller de Electrónica Digital y Reparación de Computadoras I
    Escritura en un pin digital (Encender o apagar un pin digital)
    Gabriel Ordoñez 2020251
    12 de Abril
*/

//Directivas de preprocesador
#define LedAzul 4     //pin4 conectado a un LED
#define tiempo_espera 500 //tiempo entre estados del LED

void setup()
{
  pinMode(LedAzul, OUTPUT); //Pin4 como salida.
  digitalWrite(LedAzul, LOW); //LED conectado al pin4 inicia apagado
}

void loop()
{
  digitalWrite(LedAzul, HIGH); //Enciendo el led conectado al pin4
  delay(500);
  digitalWrite(LedAzul, LOW); //Apago el led conectado al pin4
  delay(500);
}
