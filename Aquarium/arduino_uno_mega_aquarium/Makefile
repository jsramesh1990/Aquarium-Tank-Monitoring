# Makefile for Arduino UNO / Mega via Arduino CLI

UNO_FQBN := arduino:avr:uno
MEGA_FQBN := arduino:avr:mega

arduino-build-uno:
	arduino-cli compile --fqbn $(UNO_FQBN) .

arduino-build-mega:
	arduino-cli compile --fqbn $(MEGA_FQBN) .

arduino-upload-uno:
	arduino-cli upload -p $(PORT) --fqbn $(UNO_FQBN) .

arduino-upload-mega:
	arduino-cli upload -p $(PORT) --fqbn $(MEGA_FQBN) .

monitor:
	arduino-cli monitor -p $(PORT) -c baudrate=9600
