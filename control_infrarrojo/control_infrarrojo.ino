#include <Servo.h>
#include<IRremote.h>
int sensor =11;

#define Boton_arriba 0xE718FF00
#define Boton_abajo 0xAD52FF00
#define Boton_izquierda 0xF708FF00
#define Boton_derecha 0xA55AFF00
#define Boton_1 0xBA45FF00
#define Boton_2 0xB946FF00
#define Boton_3 0xB847FF00
int led=  5;
// lo que pasa aca es que los botones del control remoto
// estan en hexadecimal, al apretarlo van a salir los 
// codigos que estan arriba
// esto es un ejemplo, son mas botones
void setup(){
  Serial.begin(9600);
  IrReceiver.begin(sensor,DISABLE_LED_FEEDBACK);
  pinMode(led,OUTPUT);
  }
void loop(){
  if(IrReceiver.decode()){
    Serial.println(IrReceiver.decodedIRData.decodedRawData,HEX);
  
  if(IrReceiver.decodedIRData.decodedRawData ==Boton_arriba)
  {  digitalWrite(led,HIGH);
     delay(1000);
     digitalWrite(led,LOW);
     }
     
    IrReceiver.resume();
 }
  delay(100);
  }
