int sensor_agua=A0;
int agua;
int led =4
void setup(){
 Serial.begin(9600);
 pinMode(led,OUTPUT); 
 pinMode(sensor_agua,INPUT); 
  }
void loop(){
  agua=analogRead(sensor_agua)
  Serial.println(agua);  
    if(agua <=100 && agua>=0){
      digitalWrite(led,HIGH);
      }
    else{
      digitalWrite(led,LOW);}
  delay(1000);
  }
