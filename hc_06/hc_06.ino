#include<SoftwareSerial.h>
SoftwareSerial BT(10,11);//tx 10 y rx 11, conectar invertido
char nombre[21] = "cerradura";
char bps = '4';
char pass[5] = "cerradura";

void setup(){
  Serial.begin(9600);
  BT.begin(9600);
  pinMode(13,OUTPUT);
  digitalWrite(13,HIGH);
  delay(4000);
  digitalWrite(13,LOW);

  BT.print("AT");
  delay(1000);
  BT.print("AT+NAME");
  BT.print(nombre);
  delay(1000);
  BT.print("AT+BAUD");
  BT.print(bps);
  delay(1000);

  BT.print("AT+PIN");
  BT.print(pass);
  delay(1000);
  }

void loop(){
  digitalWrite(13,!digitalRead(13));
  delay(300);
  }
