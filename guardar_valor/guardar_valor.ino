int led = 6;  
int entrada = 4;    
int vala = 0;      

void setup() {
  pinMode(led, OUTPUT);  
  pinMode(entrada, INPUT);    
}

void loop() {
  val = digitalRead(entrada);   
  digitalWrite(led, vala); 
  Serial.println(vala);
  }
