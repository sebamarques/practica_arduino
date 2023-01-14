#include <SoftwareSerial.h>
//nombre Tacho contraseña tacho
SoftwareSerial miBT(10, 11); // rx 11 , tx 10
void setup(){
  Serial.begin(9600);
  Serial.println("Listo");
  miBT.begin(38400);}
void loop(){
  if(miBT.available()) // lee BT y envia a Arduino
  Serial.write(miBT.read());

  if(Serial.available())
  miBT.write(Serial.read()); // lee arduino y envia a BT
  }
