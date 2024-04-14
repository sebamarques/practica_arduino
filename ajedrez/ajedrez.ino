int jugador1 = 600;
int jugador2 = 600;
int boton1 = 4;
int boton2 = 5;
int valor1;
int valor2;
int led1=6;
int led2=7;
void setup(){
Serial.begin(9600);
  pinMode(boton1,INPUT);
  pinMode(boton2,INPUT);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
}


void loop(){
  valor1 = analogRead(boton1);
  valor2 = analogRead(boton2);
  while(jugador1 > 0|| jugador2 > 0){
  if (valor1 == LOW){
    jugador1-=1;
    valor2 = LOW;
    digitalWrite(led1,HIGH);
    digitalWrite(led2,LOW);
    }
   if (valor2 == LOW){
    jugador2-=1;
    digitalWrite(led1,LOW);
    digitalWrite(led2,HIGH);
    }
   if(jugador1 ==0){
    Serial.println("El jugador 1 perdio");
    break;}
   if(jugador2 ==0){
    Serial.println("El jugador 2 perdio");
    break;}
   }
  }
