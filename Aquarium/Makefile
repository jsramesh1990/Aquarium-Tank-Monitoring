# Makefile for Aquarium-Monitoring-Project
# Supports PlatformIO and Arduino CLI


PROJECT_NAME := Aquarium-Monitoring


# PlatformIO board (change as needed)
PIO_BOARD := esp32dev


# Arduino-cli board fqbn (if using Arduino CLI)
ARDUINO_FQBN := esp32:esp32:esp32


.PHONY: help pio-build pio-upload pio-monitor pio-clean arduino-build arduino-upload clean


help:
@echo "Usage: make <target>"
@echo "Targets:"
@echo " pio-build Build using PlatformIO"
@echo " pio-upload Upload using PlatformIO"
@echo " pio-monitor Open serial monitor (pio)"
@echo " pio-clean Clean build"
@echo " arduino-build Build using arduino-cli"
@echo " arduino-upload Upload using arduino-cli (set ARDUINO_PORT)"
@echo " clean Remove build artifacts"


# PlatformIO targets
pio-build:
platformio run


pio-upload:
platformio run -t upload


pio-monitor:
platformio device monitor


pio-clean:
platformio run -t clean


# Arduino CLI targets (must have arduino-cli installed and board core installed)
arduino-build:
arduino-cli compile --fqbn $(ARDUINO_FQBN) .


arduino-upload:
ifndef ARDUINO_PORT
$(error ARDUINO_PORT is not set. Example: make arduino-upload ARDUINO_PORT=/dev/ttyUSB0)
endif
arduino-cli upload -p $(ARDUINO_PORT) --fqbn $(ARDUINO_FQBN) .


clean:
rm -rf .pio .pioenvs build
