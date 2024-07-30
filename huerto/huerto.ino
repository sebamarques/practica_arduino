#include <WiFi.h>
#include <HTTPClient.h>

// Configura tus credenciales Wi-Fi
const char* ssid = "tu_nombre_de_wifi";
const char* password = "tu_contraseña";

// Configura la URL de tu servidor
const char* serverName = "http://192.168.1.5:3000/data";
/*
  /int sensor_humedad = D1;
  int sensor_temperatura = D2;
*/
int sensor_luminosidad = 34;

// Variables para almacenar los datos de los sensores
/*int valor_humedad;
  int valor_temperatura;
*/
int valor_luminosidad;

void setup() {
  Serial.begin(115200);
  /*pinMode(sensor_humedad,INPUT);
    pinMode(sensor_temperatura,INPUT);
  */
  pinMode(sensor_luminosidad, INPUT);

  // Conexión a la red Wi-Fi
  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Conectando a WiFi...");
  }

  Serial.println("Conectado a la red WiFi");
}

void loop() {
  // Leer los datos de los sensores (esto es solo un ejemplo)
  /*valor_humedad = analogRead(sensor_humedad);
    valor_temperatura = analogRead(sensor_temperatura);
  */
  valor_luminosidad = analogRead(sensor_luminosidad);

  // Enviar datos al servidor
  if (WiFi.status() == WL_CONNECTED) {
    HTTPClient http;

    // Especificar la URL
    http.begin(serverName);

    // Especificar el tipo de contenido
    http.addHeader("Content-Type", "application/json");

    // Crear el JSON para enviar
    //String jsonData = "{\"humedad\":" + String(valor_humedad) + ",\"temperatura\":" + String(valor_temperatura) + ",\"luminosidad\":" + String(valor_luminosidad) + "}";
    String jsonData = "{\"luminosidad\":" + String(valor_luminosidad) + "}";
    // Enviar la solicitud POST
    int httpResponseCode = http.POST(jsonData);

    // Comprobar el código de respuesta
    if (httpResponseCode > 0) {
      String response = http.getString();
      Serial.println(httpResponseCode);
      Serial.println(response);
    } else {
      Serial.print("Error en la solicitud POST: ");
      Serial.println(httpResponseCode);
    }

    // Finalizar la conexión
    http.end();
  }

  // Esperar antes de enviar la siguiente lectura
  Serial.println(valor_luminosidad);
  delay(30000); // 30 segundos
}
