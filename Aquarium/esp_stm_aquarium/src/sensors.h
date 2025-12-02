#ifndef SENSORS_H
#define SENSORS_H
#include <Arduino.h>

#define ONE_WIRE_BUS 4
#define WATER_LEVEL_PIN A0
#define TDS_SENSOR_PIN A0
#define PH_SENSOR_PIN A0

void sensors_begin();
float readWaterLevel();
float readTemperature();
float readTDS();
float readPH();
#endif
