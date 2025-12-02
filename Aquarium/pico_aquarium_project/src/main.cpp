#include "sensors.h"

void setup() {
  Serial.begin(115200);
  sensors_begin();
  Serial.println("Aquarium Monitoring System Started");
}

void loop() {
  float level = readWaterLevel();
  float temp = readTemperature();
  float tds = readTDS();
  float ph = readPH();

  Serial.println("==== Aquarium Parameters ====");
  Serial.print("Water Level: "); Serial.println(level);
  Serial.print("Temperature: "); Serial.println(temp);
  Serial.print("TDS: "); Serial.println(tds);
  Serial.print("pH: "); Serial.println(ph);
  Serial.println("==============================");

  delay(2000);
}
