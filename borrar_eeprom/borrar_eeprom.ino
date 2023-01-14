/*
 * Borrado de EEPROM 
 *
 * Pone todos los bytes de la EEPROM a 0.
 * Por favor, vea la iteración EEPROM para una más informacion
* Vistazo a la forma de recorrer la EEPROM
.** Este código de ejemplo es de dominio público.
 */
#include <EEPROM.h>
void setup() {
  // initializa el pin del LED como una salida.
  pinMode(13, OUTPUT);
  
  /***
    Itera a través de cada byte de la EEPROM .

   Los procesadores AVR más grandes tienen tamaños más grandes de EEPROM, por ejemplo:
   - Arduno Duemilanove: EEPROM 512 bytes.
   - Arduino Uno: EEPROM 1 KB.
   - Arduino Mega: 4 KB EEPROM.

En lugar de la codificación dura de la longitud, se debe utilizar la función de longitud pre-proporcionada.
Esto hará que su código sea portable para todos los procesadores AVR.
  ***/
  for (int i = 0 ; i < EEPROM.length() ; i++) {
    EEPROM.write(i, 0);
  }
  // enciende el LED cuando haya terminado
  digitalWrite(13, HIGH);
}
void loop() {
  /** Bucle vacio. **/
}
