int led1 = 1;
int echo = 8;
int trig = 7;
int duracion;
int distancia;

void setup(){
  pinMode(led1,OUTPUT);
  pinMode(echo,INPUT);
  pinMode(trig,OUTPUT);
  Serial.begin(9600);  
  }

  void loop(){
    digitalWrite(trig,HIGH);
    delay(1);
    digitalWrite(trig,LOW);
    duracion = pulseIn(echo,HIGH);
    distancia = duracion/58.2;
    Serial.println("AHHHHH");
    Serial.println(distancia + "cm");
    if (distancia > 0 and distancia <20){
      digitalWrite(led1,HIGH);}
      else{
        digitalWrite(led1,LOW);}
          
    }
