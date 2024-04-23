int boton = 2;
int valor;
void setup(){
  Serial.begin(9600);
  pinMode(boton,INPUT);
  }


void loop(){
  valor = digitalRead(boton);
  delay(200);
  Serial.write(valor);
  }
