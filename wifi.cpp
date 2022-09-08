#include <ESP8266WiFi.h>
#include <WiFiClient.h>

// WIFI //
const char* ssid = "SAULPC2";
const char* pass = "12071992";

// Condiciones //
byte cont = 0;
byte max_intentos = 50;

void setup() {

  Serial.begin(9600);
  Serial.println("\n");

  // Intentos de conexion //  
  WiFi.begin(ssid, pass);
  while (WiFi.status() != WL_CONNECTED and cont < max_intentos) {
    cont++;
    delay(500);
    Serial.print(".");
  }

  // Parametros de red recibidos //
  if (WiFi.status() == WL_CONNECTED) {
    Serial.println("WiFi conectado");
    Serial.println(WiFi.SSID());
    Serial.print("IP: ");
    Serial.println(WiFi.localIP());
    Serial.println("MacAddress: ");
    Serial.println(WiFi.macAddress());    
  }
  else {
    Serial.println("Error de Conexion");
  }

}

void loop() {

  if (WiFi.status() == WL_CONNECTED) {

    Serial.println("WIfi Conectado");
    delay(1000);
    
  }

}
