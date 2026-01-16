// Author: Atul Singh
// Description: Temperature and Humidity measurement through dht11 sensor
// Board: Arduino UNO
#include "DHT.h"

#define DHTPIN 2       // Data pin connected to D2
#define DHTTYPE DHT11  // Type of sensor

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  float h = dht.readHumidity();
  float t = dht.readTemperature();

  Serial.print("Humidity: ");
  Serial.print(h);
  Serial.print(" %  ");
  Serial.print("Temperature: ");
  Serial.print(t);
  Serial.println(" °C");

  delay(2000);
}
