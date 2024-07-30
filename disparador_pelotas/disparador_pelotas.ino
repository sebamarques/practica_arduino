#include <Servo.h>
#include<IRremote.h>

int sensor =11;
Servo servo_horizontal;
Servo servo_vertical;

//La controladora de motores
int in1=6;
int in2=7;

const int Boton_arriba = 0xE718FF00;
const int Boton_abajo = 0xAD52FF00;
const int Boton_izquierda = 0xF708FF00;
const int Boton_derecha = 0xA55AFF00;
const int Boton_1 = 0xBA45FF00;
const int Boton_2 = 0xB946FF00;
const int Boton_3 = 0xB847FF00;
/*
const int Boton_4 = 0xBB44FF00;
const int Boton_5 = 0xBF40FF00;
const int Boton_6 = 0xBC43FF00;
const int Boton_7 = 0xF807FF00;
const int Boton_8 = 0xEA15FF00;
const int Boton_9 = 0xEA15FF00;
const int Boton_ok = 0xE31CFF00;
const int Boton_asterisco = 0xE916FF00;
const int Boton_hash = 0xF20DFF00;
*/
int horizontal = 90;
int vertical = 0;
void setup(){
  Serial.begin(9600);
  IrReceiver.begin(sensor,DISABLE_LED_FEEDBACK);
  servo_horizontal.attach(8);
  servo_vertical.attach(9);
  servo_horizontal.write(horizontal);
  servo_vertical.write(vertical);
  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);
  }
void loop(){
  if(IrReceiver.decode()){
    Serial.println(IrReceiver.decodedIRData.decodedRawData,HEX);
  
  if(IrReceiver.decodedIRData.decodedRawData ==Boton_arriba)
  { if(vertical < 80)
     { 
      vertical = vertical+20;
      servo_vertical.write(vertical);
          }
     else{
      vertical = 80;
      servo_vertical.write(vertical);
        }
     }
   if(IrReceiver.decodedIRData.decodedRawData ==Boton_abajo)
    {if(vertical > 0){
      vertical=vertical-20;
      servo_vertical.write(vertical);
      }
     else{
      vertical =0;
      servo_vertical.write(vertical);
      } 
    }
  if(IrReceiver.decodedIRData.decodedRawData ==Boton_izquierda)
    {if(horizontal >0){
      horizontal=horizontal-15;
      servo_horizontal.write(horizontal);
        }
     else{
      horizontal = 0;
      servo_horizontal.write(horizontal);}
     }
  if(IrReceiver.decodedIRData.decodedRawData ==Boton_derecha)
    {if(horizontal < 180){
      horizontal=horizontal+15;
      servo_horizontal.write(horizontal);
        }
      else{
        horizontal = 180;
        servo_horizontal.write(horizontal);}
     }
    if(IrReceiver.decodedIRData.decodedRawData ==Boton_1){ 
      digitalWrite(in1,255/3);
      digitalWrite(in2,255/3);
        }
    if(IrReceiver.decodedIRData.decodedRawData ==Boton_2){ 
      digitalWrite(in1,255/2);
      digitalWrite(in2,255/2);
        }
    if(IrReceiver.decodedIRData.decodedRawData ==Boton_3){ 
      digitalWrite(in1,255/1);
      digitalWrite(in2,255/1);
        }
    /*if(IrReceiver.decodedIRData.decodedRawData ==Boton_ok){
      digitalWrite(in1,LOW);
      digitalWrite(in2,LOW);
        }*/
    IrReceiver.resume();
 }
  delay(100);
  }
