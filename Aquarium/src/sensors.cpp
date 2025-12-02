#include "sensors.h"
#include <OneWire.h>
#include <DallasTemperature.h>


OneWire oneWire(ONE_WIRE_BUS);
DallasTemperature sensors(&oneWire);


const float VREF = 5.0;
const int ADC_RES = 1023; // change to 4095 for 12-bit ADC boards


void sensors_begin() {
sensors.begin();
}


float readWaterLevel() {
int raw = analogRead(WATER_LEVEL_PIN);
float pct = (raw / float(ADC_RES)) * 100.0;
return pct;
}


float readTemperature() {
sensors.requestTemperatures();
float t = sensors.getTempCByIndex(0);
return t;
}


float readTDS() {
int raw = analogRead(TDS_SENSOR_PIN);
float voltage = raw * (VREF / ADC_RES);
// Example conversion; calibrate for your sensor
float tds = (133.42 * voltage * voltage * voltage
- 255.86 * voltage * voltage
+ 857.39 * voltage) * 0.5;
return tds;
}


float readPH() {
int raw = analogRead(PH_SENSOR_PIN);
float voltage = raw * (VREF / ADC_RES);
float ph = 7.0 + ((2.5 - voltage) / 0.18);
return ph;
}
