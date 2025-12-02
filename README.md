explains the project, how to build, wiring summary and notes.

Makefile

The Makefile supports both PlatformIO and Arduino CLI (if installed). Use make pio-build, make pio-upload, make arduino-build, or make monitor.

LICENSE

Default to MIT. (Short MIT license text included in LICENSE file.)

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
