#ifndef SENSORS_H
#define SENSORS_H

#include <Arduino.h>

#define ONE_WIRE_BUS 2
#define WATER_LEVEL_PIN A0
#define TDS_SENSOR_PIN A1
#define PH_SENSOR_PIN A2

void sensors_begin();
float readWaterLevel();
float readTemperature();
float readTDS();
float readPH();

#endif
