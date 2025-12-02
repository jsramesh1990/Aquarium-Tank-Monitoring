#include "sensors.h"

void setup() {
  Serial.begin(115200);
  sensors_begin();
  Serial.println("Aquarium Monitoring System Started");
}

void loop() {
  float level = readWaterLevel();
  float tempC = readTemperature();
  float tds = readTDS();
  float ph = readPH();

  Serial.println("===== Aquarium Parameters =====");
  Serial.print("Water Level: "); Serial.print(level); Serial.println(" %");
  Serial.print("Temperature: "); Serial.print(tempC); Serial.println(" C");
  Serial.print("TDS (ppm): "); Serial.println(tds);
  Serial.print("pH: "); Serial.println(ph);
  Serial.println("===============================\n");

  delay(2000);
}
