#include <Servo.h>
Servo servo;

void setup(){
  Serial.begin(9600);
  servo.attach(8);
  servo.write(0);
  }



void loop(){
  servo.write(90);
  Serial.println("90");
  delay(1000);
  servo.write(0);
  Serial.println("0");
  delay(2000);
  
  }
