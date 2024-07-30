int rele = 5;
int valor;
void setup(){
  Serial.begin(115200);
  pinMode(rele,OUTPUT);
  }
void loop(){
  if(valor == HIGH){
    digitalWrite(rele,LOW);
    }    
  else{
    digitalWrite(rele,HIGH);
    }
  }
