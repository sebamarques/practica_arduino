int tiempo_jugador1 = 30;
int tiempo_jugador2 = 30;
int boton1 = 3;
int boton2 = 4;
int interruptor = 5;
int valor_boton1;
int valor_boton2;
int valor_interruptor;

void setup() {
  Serial.begin(9600);
  pinMode(boton1, INPUT);
  pinMode(boton2, INPUT);
  pinMode(interruptor, INPUT);
}

void loop() {
  valor_interruptor = digitalRead(interruptor);
  //boton para activar el reloj de ajedrez
  while(valor_interruptor== LOW){
    valor_boton1 = digitalRead(boton1);
    valor_boton2 = digitalRead(boton2);
    while(valor_boton1==LOW){
      
      valor_boton1 = digitalRead(boton1);
      tiempo_jugador1--;
      Serial.println("Tiempo jugador 1:");
      Serial.println(tiempo_jugador1);
      if(tiempo_jugador1 == 0){
        Serial.println("Perdio el jugador 1 por tiempo.");
        break;
        }
      if(valor_boton1 == HIGH){
        Serial.println("Entre para romper el break del jugador1");
        break;
        }  
       delay(1000);
      }
    while(valor_boton2 == LOW){
      valor_boton2 = digitalRead(boton2);
      tiempo_jugador2--;
      Serial.println("Tiempo del jugador 2:");
      Serial.println(tiempo_jugador2);
      if(tiempo_jugador2 == 0){
        Serial.println("Perdio el jugador 2 por tiempo");
        break;
        }
      if(valor_boton2 == HIGH){
        Serial.println("Entre para romper el break del jugador2");
        break;
        }
      delay(1000);
      }   
  break;
  }  
}
