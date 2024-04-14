#include <Servo.h>// asi se incluyen librerias en arduino

Servo servo; // asi se crea una variable servo
// Servo llama a la libreria y luego de eso pones
// el nombre del servo


void setup(){
  Serial.begin(9600);
  servo.attach(4); // es como el pinMode pero
  // solo funciona para los servomotores
  }

void loop(){
  servo.write(180);
   // los grados a los que se va a mover el servomotor
   delay(1000);
   // delay es una funcion que permite detener el codio
   // durante 1 segundo 
   servo.write(90);
   delay(1000);
   servo.write(0);
   delay(1000); 
    }
