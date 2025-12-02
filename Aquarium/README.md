a complete C++ example for an Aquarium Monitoring System that runs on typical embedded boards (Arduino, ESP32, STM32, etc.).
This system measures:

✔ Water level
✔ Water temperature
✔ Water purity (TDS sensor)
✔ Other amenities (pH sensor, oxygen level placeholder)

You can adapt this to any board by replacing the sensor libraries.

Boards Supported

This code can run on:

✔ Arduino UNO
✔ Arduino Mega
✔ ESP32 / ESP8266
✔ STM32 boards
✔ Raspberry Pi Pico (with Arduino framework)

You only change:

ADC reference voltage

Pin numbers

Library includes

Sensors You Can Use
Parameter	Recommended Sensor
Temperature	DS18B20 (waterproof)
Water Level	Float switch / Ultrasonic HC-SR04 / Capacitive Level Sensor
Water Purity	TDS Meter (Gravity TDS)
pH Level	Analog pH Sensor Kit
Oxygen	Dissolved Oxygen Probe


How to use

Install PlatformIO (recommended) or Arduino CLI.

Clone the repo, open terminal and run make pio-build.

Connect your board and make pio-upload.

make pio-monitor to view serial data.

Notes & Next steps

Calibrate the TDS and pH conversion formulas with your sensors.

Add relay control (filter/heater) based on readings.

Add JSON over serial or MQTT support for remote monitoring.

Add unit tests and CI (GitHub Actions) to build for multiple boards.
