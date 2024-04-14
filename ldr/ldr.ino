int valor;
int ldr = A0;
int led = 5;


void setup(){
Serial.begin(9600);
pinMode(ldr,INPUT);
pinMode(led,OUTPUT);  
  }

void loop(){
  valor = analogRead(ldr);
  Serial.println(valor);
  if(valor >=0 && valor <=200){
    digitalWrite(led,HIGH);
    }
  else{
    digitalWrite(led,LOW);
    }  
    delay(1000);
    }
