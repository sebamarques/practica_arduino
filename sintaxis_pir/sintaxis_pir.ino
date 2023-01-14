const int pir = 2;
const int led = 3;

void setup(){
  Serial.begin(9600);
  pinMode(pir,INPUT);
  pinMode(led,OUTPUT);
}
void loop(){
int valor = digitalRead(pir);
  Serial.println(valor);
  if(valor == HIGH){
  digitalWrite(led,HIGH);
  }
  else{
  digitalWrite(led,LOW);}
}
