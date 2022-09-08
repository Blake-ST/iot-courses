#include <DHT.h>

DHT dht(D1, DHT11);
float temperatura, humedad;

void setup() {
  
  // Inicia DHT //
  dht.begin();

  Serial.begin(9600);
  Serial.println("\n");

}

void loop() {

  humedad = dht.readHumidity();
  temperatura = dht.readTemperature();
  Serial.println("Temperatura: " + String(temperatura) + " C " + " Humedad: " + String(humedad) + " %");

  delay(3000);

}
