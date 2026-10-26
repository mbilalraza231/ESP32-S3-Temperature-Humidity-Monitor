#include "DHT.h"

#define DHTPIN 4
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(115200);
  delay(1500);
  dht.begin();

  Serial.println();
  Serial.println("ESP32-S3 | Environment Monitor");
  Serial.println("Sensor: DHT11");
  Serial.println("================================");
}

void loop() {
  float humidity = dht.readHumidity();
  float tempC = dht.readTemperature();

  if (isnan(humidity) || isnan(tempC)) {
    Serial.println("[ERROR] Unable to read DHT11 sensor.");
  } else {
    Serial.print("[LIVE] Temperature: ");
    Serial.print(tempC, 1);
    Serial.print(" °C  |  Humidity: ");
    Serial.print(humidity, 1);
    Serial.println(" %");
  }

  delay(2000);
}