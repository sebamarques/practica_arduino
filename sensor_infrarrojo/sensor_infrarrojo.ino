int infrarrojo = 8;
int valor = 0;

void setup(){
  Serial.begin(9600);
  pinMode(infrarrojo,INPUT);
  }

void loop(){
  valor = digitalRead(infrarrojo);

  if (valor == LOW){
    Serial.println("Obstaculo encontrado");
    }
    delay(500);
  }
