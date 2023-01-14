#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

Adafruit_SSD1306 display = Adafruit_SSD1306(128, 64, &Wire);

void setup() {
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C); // Otra direccion es la 0x3D
  display.clearDisplay();
  display.setTextColor(SSD1306_WHITE);
}
void loop() {
  display.clearDisplay();         // Borra la pantalla
  display.setTextSize(1);         // Tamaño de la fuente del texto 1 - 2 - 3 - 4 - 5
  display.setCursor(20,15);       // (X,Y) . (Horizontal, Vertical)
  display.print("Hola Mundo 1");  // texto a mostrar / si es variable sin comillas
  display.display();              // Muestra el Texto en la pantalla
  delay(2000);

  display.clearDisplay();
  display.setTextSize(2);
  display.setCursor(0,15);
  display.print("Hola Mundo 2");
  display.display(); 
  delay(2000);
  
  display.clearDisplay();
  display.setTextSize(3);
  display.setCursor(0,0);
  display.print("Hola Mundo 3");
  display.display(); 
  delay(2000);

  display.clearDisplay();         // Borra la pantalla
  display.setTextSize(1);         // Tamaño de la fuente del texto 1 - 2 - 3 - 4 - 5
  display.setCursor(0,0);       // (X,Y) . (Horizontal, Vertical)
  display.print("Te quiero matematicamente,Con amor trigonometral,Porque fisica y quimicamente,Tu eres mi sistema decimal.");  
  display.display();              // Muestra el Texto en la pantalla
  delay(10000);

}
