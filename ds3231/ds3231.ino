#include <Wire.h>
#include <RTClib.h>

RTC_DS3231 rtc;


void setup(){
  Serial.begin(9600);
  if(!rtc.begin()){
    Serial.print("No se encontro");
    while(1);
    }
   if(rtc.lostPower()){
    rtc.adjust(DateTime(__DATE__,__TIME__)); 
    }
    // usando date y time toma el valor que hay en la computadora
    //se lo puede poner manual, año,mes,dia,hora,minuto,segundo
    
    
   }

void loop(){
  DateTime fecha = rtc.now();
  Serial.println(" ");
  Serial.print(fecha.day());
  Serial.print("/");
  Serial.print(fecha.month());
  Serial.print("/");
  Serial.print(fecha.year());
  Serial.println(" ");
  Serial.print(fecha.hour());
  Serial.print(":");
  Serial.print(fecha.minute());
  Serial.print(":");
  Serial.print(fecha.second());
  delay(1000);
  }
