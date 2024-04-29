int tiempo_jugador1 = 600;
int tiempo_jugador2 = 600;
int boton1 = 3;
int interruptor = 4;
int valor1;


void setup() {
  Serial.begin(9600);
  pinMode(boton1, INPUT);
  pinMode(interruptor, INPUT);
}

void loop() {
  valor1 = digitalRead(boton1);
  //boton para activar el reloj de ajedrez
  while(valor1 == LOW){
    int valor2 = digitalRead(interruptor);
    while(valor2==LOW){
      valor2 = digitalRead(interruptor);
      tiempo_jugador1--;
      Serial.println("Tiempo jugador1:");
      Serial.println(tiempo_jugador1);
      delay(1000);
      if(valor2 == HIGH){
        break;
        }
      }
      
  }  
}
