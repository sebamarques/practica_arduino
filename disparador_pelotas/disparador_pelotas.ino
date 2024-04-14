#include <Servo.h>
#include<IRremote.h>
int sensor =11;
Servo servo_horizontal;
Servo servo_vertical;
int led_verde=3;
int led_azul=4;
int led_blanco=5;
int in1=6;
int in2=7;
#define Boton_arriba 0xE718FF00
#define Boton_abajo 0xAD52FF00
#define Boton_izquierda 0xF708FF00
#define Boton_derecha 0xA55AFF00
#define Boton_1 0xBA45FF00
#define Boton_2 0xB946FF00
#define Boton_3 0xB847FF00
int horizontal = 90;
int vertical = 0;
void setup(){
  Serial.begin(9600);
  IrReceiver.begin(sensor,DISABLE_LED_FEEDBACK);
  servo_horizontal.attach(8);
  servo_vertical.attach(9);
  servo_horizontal.write(90);
  servo_vertical.write(0);
  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);
  pinMode(led_azul,OUTPUT);
  pinMode(led_blanco,OUTPUT);
  pinMode(led_verde,OUTPUT);
  }
void loop(){
  if(IrReceiver.decode()){
    Serial.println(IrReceiver.decodedIRData.decodedRawData,HEX);
  
  if(IrReceiver.decodedIRData.decodedRawData ==Boton_arriba)
  { if(vertical < 80)
     { 
      vertical=vertical+20;
      servo_vertical.write(vertical);
      Serial.println(vertical);
          }
     else{
      vertical =80;
      servo_vertical.write(vertical);
        }
     }
   if(IrReceiver.decodedIRData.decodedRawData ==Boton_abajo)
    {if(vertical > 0){
      vertical=vertical-20;
      servo_vertical.write(vertical);
      Serial.println(vertical);
      }
     else{
      vertical =0;
      servo_vertical.write(vertical);} 
    }
  if(IrReceiver.decodedIRData.decodedRawData ==Boton_izquierda)
    {if(horizontal >0){
      
      horizontal=horizontal-15;
      servo_horizontal.write(horizontal);
      Serial.println(horizontal);
        }
     else{
      horizontal =0;
      servo_horizontal.write(horizontal);}
     }
  if(IrReceiver.decodedIRData.decodedRawData ==Boton_derecha)
    {if(horizontal < 180){
      horizontal=horizontal+15;
      servo_horizontal.write(horizontal);
      Serial.println(horizontal);
        }
      else{
        horizontal = 180;
        servo_horizontal.write(horizontal);}
     }
    if(IrReceiver.decodedIRData.decodedRawData ==Boton_1)
    { digitalWrite(led_azul,LOW);
      digitalWrite(led_verde,LOW);
      digitalWrite(led_blanco,HIGH);
      digitalWrite(in1,255/3);
      digitalWrite(in2,255/3);
        }
      if(IrReceiver.decodedIRData.decodedRawData ==Boton_2)
    { digitalWrite(led_azul,LOW);
      digitalWrite(led_verde,HIGH);
      digitalWrite(led_blanco,LOW);
      digitalWrite(in1,255/2);
      digitalWrite(in2,255/2);
        }
       if(IrReceiver.decodedIRData.decodedRawData ==Boton_3)
    { digitalWrite(led_azul,HIGH);
      digitalWrite(led_verde,LOW);
      digitalWrite(led_blanco,LOW);
      digitalWrite(in1,255/1);
      digitalWrite(in2,255/1);
        }
     if(IrReceiver.decodedIRData.decodedRawData ==Boton_ok)
    { digitalWrite(led_azul,LOW);
      digitalWrite(led_verde,LOW);
      digitalWrite(led_blanco,LOW);
      digitalWrite(in1,LOW);
      digitalWrite(in2,LOW);
        }
    IrReceiver.resume();
 }
  delay(100);
  }
