int rele = 4;

void setup(){
  Serial.begin(9600);
  pinMode(rele,OUTPUT);
  }

void loop(){
  digitalWrite(rele,HIGH);
  delay(3000);
  digitalWrite(rele,LOW):
  delay(3000);
  }
