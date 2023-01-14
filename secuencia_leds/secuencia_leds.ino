int led = 2;
int led1 = 3;
int led2 = 4;
int led3 = 5;
int led4 = 6;
void setup(){
  pinMode(led,OUTPUT);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  }
  void loop(){
    digitalWrite(led,HIGH);
    delay(1000);
    digitalWrite(led1,HIGH);
    delay(1000);
    digitalWrite(led2,HIGH);
    delay(1000);
    digitalWrite(led3,HIGH);
    delay(1000);
    digitalWrite(led4,HIGH);
    delay(1000);
    digitalWrite(led,LOW);
    delay(1000);
    digitalWrite(led1,LOW);
    delay(1000);
    digitalWrite(led2,LOW);
    delay(1000);
    digitalWrite(led3,LOW);
    delay(1000);
    digitalWrite(led4,LOW);
    delay(1000);
    digitalWrite(led,HIGH);
    digitalWrite(led4,HIGH);
    delay(1000);
    digitalWrite(led1,HIGH);
    digitalWrite(led3,HIGH);
    delay(1000);
    digitalWrite(led2,HIGH);
    delay(1000);
    digitalWrite(led2,LOW);
    delay(1000);
    digitalWrite(led3,LOW);
    digitalWrite(led1,LOW);
    delay(1000);
    digitalWrite(led4,LOW);
    digitalWrite(led,LOW);
    delay(1000);
    
  }
