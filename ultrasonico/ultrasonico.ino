int trig = 7;
int echo =6;
int led = 5;
int distancia;
int tiempo;


void setup(){
  Serial.begin(9600);
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  pinMode(led,OUTPUT);
  digitalWrite(trig,LOW);
  }
void loop(){
  Serial.println(distancia);
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);
  
  tiempo = pulseIn(echo,HIGH);
  distancia=tiempo/59;
  if(distancia <20 && distancia >=0){
    digitalWrite(led,HIGH);
    }
    else{
      digitalWrite(led,LOW);
      }
      delay(1000);
      }
  
