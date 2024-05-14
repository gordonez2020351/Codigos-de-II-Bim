/*

   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AM 
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Relevadores y visualizadores
   Gabriel Ordoñez 2020351
   Fecha: 07 de mayo 2024
   
*/


const float pinBuzzer = 3; 

void setup() {
  Serial.begin(9600);     
  Serial.println("Inicio de Cancion");
  
  //sol
  
  tone (pinBuzzer, 391.995, 353);  
  delay(706);
  noTone(pinBuzzer);
  delay(100);
  
  tone (pinBuzzer, 391.995, 353);
  delay(706);
  noTone(pinBuzzer);
  delay(100);
  
  tone (pinBuzzer, 391.995, 353);
  delay(706);
  noTone(pinBuzzer);
  delay(85);

  
  //mib

  tone (pinBuzzer, 311.127, 118); 
  delay(235);
  noTone(pinBuzzer);
  delay(50);
  
  // sib
  
  tone (pinBuzzer, 466.164, 118); 
  delay(225); 
  noTone(pinBuzzer);
  delay(65);
  
  //sol
  
  tone (pinBuzzer, 391.995, 353);
  delay(706);
  noTone(pinBuzzer);
  delay(100);
  
  //mib

  tone (pinBuzzer, 311.127, 118); 
  delay(235);
  noTone(pinBuzzer);
  delay(50);
  
  // sib
  
  tone (pinBuzzer, 466.164, 118); 
  delay(225); 
  noTone(pinBuzzer);
  delay(65);
  
  //sol
  
  tone (pinBuzzer, 391.995, 706);
  delay(706);
  noTone(pinBuzzer);
  delay(100);
  
  //Re 5ta octava
  
  tone (pinBuzzer, 587.330, 353);
  delay(706);
  noTone(pinBuzzer);
  delay(100);
  
  tone (pinBuzzer, 587.330, 353);
  delay(706);
  noTone(pinBuzzer);
  delay(100);
  
  tone (pinBuzzer, 587.330, 353);
  delay(706);
  noTone(pinBuzzer);
  delay(100);
  
  //mib  5ta octava

  tone (pinBuzzer, 622.254, 118); 
  delay(235);
  noTone(pinBuzzer);
  delay(50);
  
  // sib
  
  tone (pinBuzzer, 466.164, 118); 
  delay(225); 
  noTone(pinBuzzer);
  delay(65);
  
  //solb
  
  tone (pinBuzzer, 369.994, 353); 
  delay(706); 
  noTone(pinBuzzer);
  delay(100);
  
  //mib  5ta octava

  tone (pinBuzzer, 622.254, 353); 
  delay(353);
  noTone(pinBuzzer);
  delay(50);
  
  // sib
  
  tone (pinBuzzer, 466.164, 353); 
  delay(225); 
  noTone(pinBuzzer);
  delay(65);
  
  //sol
  
  tone (pinBuzzer, 391.995, 706);
  delay(706);
  noTone(pinBuzzer);
  delay(100);
  
  //Sol 5ta octava
  
  tone (pinBuzzer, 783.991, 353);
  delay(706);
  noTone(pinBuzzer);
  delay(100);
  
  //Sol
  
  tone (pinBuzzer, 391.995, 190);
  delay(300);
  noTone(pinBuzzer);
  delay(85);
  
  tone (pinBuzzer, 391.995, 118);
  delay(235);
  noTone(pinBuzzer);
  delay(65);
  
  //Sol 5ta octava
  
  tone (pinBuzzer, 783.991, 353);
  delay(353);
  noTone(pinBuzzer);
  delay(100);
  
  //fa# 5ta octava
  
  tone (pinBuzzer, 739.989, 353);
  delay(400);
  noTone(pinBuzzer);
  delay(100);
  
  //fa 5ta octava
  
  tone (pinBuzzer, 608.456, 200);
  delay(300);
  noTone(pinBuzzer);
  delay(85);
  
  //Mi 5ta octava
  
  tone (pinBuzzer, 659.255, 118);
  delay(235);
  noTone(pinBuzzer);
  delay(65);
  
  //Re# 5ta octava
  
  tone (pinBuzzer, 622.254, 353);
  delay(400);
  noTone(pinBuzzer);
  delay(100);
  
  //Mi 5ta octava
  
  tone (pinBuzzer, 659.255, 450);
  delay(353);
  noTone(pinBuzzer);
  delay(353);
  
 //sol#
  
  tone (pinBuzzer, 415.305, 130);
  delay(235);
  noTone(pinBuzzer);
  delay(65);
  
  //Do# 5ta octava
  
  tone (pinBuzzer, 554.365, 130);
  delay(235);
  noTone(pinBuzzer);
  delay(65);
  
  //Do 5ta octava
  
  tone (pinBuzzer, 523.251, 180);
  delay(353);
  noTone(pinBuzzer);
  delay(85);
  
  //Si
  
  tone (pinBuzzer, 493.883, 177);
  delay(353);
  noTone(pinBuzzer);
  delay(85);
  
  //Sib
  
  tone (pinBuzzer, 466.164, 353);
  delay(353);
  noTone(pinBuzzer);
  delay(100);
  
  //La
  
  tone (pinBuzzer, 440.000, 200);
  delay(300);
  noTone(pinBuzzer);
  delay(65);
  
  //Sib
  
  tone (pinBuzzer, 466.164, 130);
  delay(235);
  noTone(pinBuzzer);
  delay(65);
  
  //Mib
  
  tone (pinBuzzer, 311.127, 353);
  delay(353);
  noTone(pinBuzzer);
  delay(100);
  
  //Solb
  
  tone (pinBuzzer, 369.994, 353);
  delay(706);
  noTone(pinBuzzer);
  delay(100);
  
  //Mib
  
  tone (pinBuzzer, 311.127, 130);
  delay(235);
  noTone(pinBuzzer);
  delay(65);
  
  //Solb
  
  tone (pinBuzzer, 369.994, 353);
  delay(353);
  noTone(pinBuzzer);
  delay(100);
  
  //Sib
  
  tone (pinBuzzer, 466.164, 200);
  delay(300);
  noTone(pinBuzzer);
  delay(85);
  
  //Sol
  
  tone (pinBuzzer, 391.995, 130);
  delay(235);
  noTone(pinBuzzer);
  delay(65);
  
  //Sib
  
  tone (pinBuzzer, 466.164, 353);
  delay(353);
  noTone(pinBuzzer);
  delay(100);
  
  //Re 5ta octava
  
  tone (pinBuzzer, 587.330, 353);
  delay(353);
  noTone(pinBuzzer);
  delay(100);
  
  //Sol 5ta octava
  
  tone (pinBuzzer, 783.991, 353);
  delay(353);
  noTone(pinBuzzer);
  delay(100);
  
  //sol
  
  tone (pinBuzzer, 391.995, 130);
  delay(300);
  noTone(pinBuzzer);
  delay(85);
  
  tone (pinBuzzer, 391.995, 130);
  delay(300);
  noTone(pinBuzzer);
  delay(85);
  
  //Sol 5ta octava
  
  tone (pinBuzzer, 783.991, 180);
  delay(353);
  noTone(pinBuzzer);
  delay(100);
  
  //fa# 5ta octava
  
  tone (pinBuzzer, 739.989, 353);
  delay(400);
  noTone(pinBuzzer);
  delay(100);
  
  //fa 5ta octava
  
  tone (pinBuzzer, 608.456, 200);
  delay(300);
  noTone(pinBuzzer);
  delay(85);
  
  //Mi 5ta octava
  
  tone (pinBuzzer, 659.255, 118);
  delay(235);
  noTone(pinBuzzer);
  delay(65);
  
  //Re# 5ta octava
  
  tone (pinBuzzer, 622.254, 353);
  delay(400);
  noTone(pinBuzzer);
  delay(100);
  
  //Mi 5ta octava
  
  tone (pinBuzzer, 659.255, 450);
  delay(353);
  noTone(pinBuzzer);
  delay(353);
  
 //sol#
  
  tone (pinBuzzer, 415.305, 130);
  delay(235);
  noTone(pinBuzzer);
  delay(65);
  
  //Do# 5ta octava
  
  tone (pinBuzzer, 554.365, 130);
  delay(235);
  noTone(pinBuzzer);
  delay(65);
  
  //Do 5ta octava
  
  tone (pinBuzzer, 523.251, 180);
  delay(353);
  noTone(pinBuzzer);
  delay(85);
  
  //Si
  
  tone (pinBuzzer, 493.883, 177);
  delay(353);
  noTone(pinBuzzer);
  delay(85);
  
  //Sib
  
  tone (pinBuzzer, 466.164, 353);
  delay(353);
  noTone(pinBuzzer);
  delay(100);
  
  //La
  
  tone (pinBuzzer, 440.000, 200);
  delay(300);
  noTone(pinBuzzer);
  delay(65);
  
  //Sib
  
  tone (pinBuzzer, 466.164, 130);
  delay(235);
  noTone(pinBuzzer);
  delay(65);
  
  //Mib
  
  tone (pinBuzzer, 311.127, 353);
  delay(353);
  noTone(pinBuzzer);
  delay(100);
  
  //Solb
  
  tone (pinBuzzer, 369.994, 353);
  delay(706);
  noTone(pinBuzzer);
  delay(100);
  
  //Mib
  
  tone (pinBuzzer, 311.127, 130);
  delay(235);
  noTone(pinBuzzer);
  delay(65);
  
  //Sib
  
  tone (pinBuzzer, 466.164, 180);
  delay(353);
  noTone(pinBuzzer);
  delay(85);
  
  //Sol
  
  tone (pinBuzzer, 391.995, 353);
  delay(353);
  noTone(pinBuzzer);
  delay(100);
  
  //Mib
  
  tone (pinBuzzer, 311.127, 200);
  delay(300);
  noTone(pinBuzzer);
  delay(85);
  
  //Sib
  
  tone (pinBuzzer, 466.164, 130);
  delay(235);
  noTone(pinBuzzer);
  delay(85);
  
  //Sol
  
  tone (pinBuzzer, 391.995, 353);
  delay(353);
  noTone(pinBuzzer);
  delay(100);
  }


void loop() {
 
  
  }