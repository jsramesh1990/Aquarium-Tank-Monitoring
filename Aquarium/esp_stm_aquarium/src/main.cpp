#include "sensors.h"

void setup(){
  Serial.begin(115200);
  sensors_begin();
  Serial.println("Aquarium Monitoring System Started (ESP / STM32)");
}

void loop(){
  Serial.print("Water Level: "); Serial.println(readWaterLevel());
  Serial.print("Temp: "); Serial.println(readTemperature());
  Serial.print("TDS: "); Serial.println(readTDS());
  Serial.print("pH: "); Serial.println(readPH());
  delay(2000);
}
