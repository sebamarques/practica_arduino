int buzzer = 8;
int boton = 2;
int estado;
void setup(){
  Serial.begin(9600);
  pinMode(buzzer,OUTPUT);
  pinMode(boton,INPUT); 
  }

void loop(){
  estado = digitalRead(buzzer);
  if(estado == HIGH){
    digitalWrite(buzzer,HIGH);
    }
  else{
    digitalWrite(buzzer,LOW);
    }
  }
