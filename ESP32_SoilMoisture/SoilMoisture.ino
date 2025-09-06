#include <Arduino.h>

#define SOIL_SENSOR 34   // analog pin
#define RELAY_PIN 26     // GPIO for relay

int threshold = 2000;   // adjust for your soil sensor

void setup() {
  Serial.begin(115200);
  pinMode(RELAY_PIN, OUTPUT);
  digitalWrite(RELAY_PIN, LOW);
}

void loop() {
  int soilValue = analogRead(SOIL_SENSOR);
  Serial.print("Soil Moisture: ");
  Serial.println(soilValue);

  if (soilValue > threshold) {
    Serial.println("Soil is dry → Pump ON");
    digitalWrite(RELAY_PIN, HIGH);
  } else {
    Serial.println("Soil is wet → Pump OFF");
    digitalWrite(RELAY_PIN, LOW);
  }

  delay(2000);
}
