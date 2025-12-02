#include "sensors.h"
#include <OneWire.h>
#include <DallasTemperature.h>

OneWire oneWire(ONE_WIRE_BUS);
DallasTemperature sensors(&oneWire);

#if defined(ESP32)
const float VREF = 3.3;
const int ADC_RES = 4095;
#elif defined(ESP8266)
const float VREF = 3.3;
const int ADC_RES = 1023;
#else
const float VREF = 3.3;
const int ADC_RES = 4095;
#endif

void sensors_begin(){
  sensors.begin();
}

float readWaterLevel(){
  return (analogRead(WATER_LEVEL_PIN)/(float)ADC_RES)*100.0;
}

float readTemperature(){
  sensors.requestTemperatures();
  return sensors.getTempCByIndex(0);
}

float readTDS(){
  float voltage = analogRead(TDS_SENSOR_PIN)*(VREF/ADC_RES);
  return (133.42*voltage*voltage*voltage - 255.86*voltage*voltage + 857.39*voltage)*0.5;
}

float readPH(){
  float voltage = analogRead(PH_SENSOR_PIN)*(VREF/ADC_RES);
  return 7 + ((2.5 - voltage)/0.18);
}
