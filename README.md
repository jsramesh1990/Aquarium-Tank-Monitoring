# 🐠 Aquarium Tank Monitoring System 🐠

![PlatformIO](https://img.shields.io/badge/PlatformIO-Compatible-orange)
![Arduino](https://img.shields.io/badge/Arduino-Supported-blue)
![ESP32](https://img.shields.io/badge/ESP32-Ready-green)
![ESP8266](https://img.shields.io/badge/ESP8266-Supported-green)
![STM32](https://img.shields.io/badge/STM32-BluePill-lightblue)
![License](https://img.shields.io/badge/License-MIT-lightgrey)

---

##  Project Overview

The **Aquarium Tank Monitoring System** is a multi-board embedded project designed to **monitor critical water parameters** in an aquarium such as **temperature, pH, and TDS (Total Dissolved Solids)**. The system is written in **C/C++** and supports **multiple microcontroller platforms** using **PlatformIO** and **Arduino CLI**.

This project focuses on **portability, scalability, and real-time monitoring**, making it suitable for **DIY aquariums, IoT experimentation, and embedded systems learning**.

---

##  Key Features

* Real-time water parameter monitoring
* Supports multiple MCU platforms
* PlatformIO + Arduino CLI build support
* Makefile-based unified build system
* Serial monitoring for live data
* Easily extendable for automation & IoT

---

##  Working Flow (System Operation)

### 1️ System Initialization

* MCU boots and initializes peripherals
* ADC channels are configured
* Sensors are powered and stabilized

### 2️ Sensor Data Acquisition

* Analog sensors read:

  * pH value
  * TDS value
  * Temperature
* Raw ADC values are captured

### 3️ Data Processing & Calibration

* ADC values converted to voltage
* Sensor-specific formulas applied
* Calibration offsets used (user adjustable)

### 4️ Data Output

* Processed values printed over **Serial Monitor**
* Output format is human-readable

### 5️ Monitoring & Decision Making (Future Scope)

* Values compared against safe thresholds
* Can trigger relays for heater/filter control
* Can transmit data via MQTT / JSON

---

##  Working Sequence (Step-by-Step)

```text
Power ON
   ↓
MCU Initialization
   ↓
Sensor Read (ADC)
   ↓
Voltage Conversion
   ↓
Calibration Formula
   ↓
Serial Output
   ↓
Repeat Loop
```

---

##  Supported Boards

This project supports the following platforms:

*  Arduino UNO
*  Arduino Mega
*  ESP32
*  ESP8266
*  STM32 Blue Pill
*  Raspberry Pi Pico (Arduino framework)

> Only pin mapping, ADC reference voltage, and libraries need adjustment per board.

---

##  Requirements

### Hardware

* Supported microcontroller board
* pH sensor module
* TDS sensor module
* Temperature sensor (DS18B20 / analog)
* Aquarium setup

### Software

#### Recommended (PlatformIO)

```bash
sudo apt update
sudo apt install -y platformio
```

#### Alternative (Arduino CLI)

```bash
arduino-cli core install arduino:avr
```

---

##  Build & Usage Instructions

### 1️ Clone the Repository

```bash
git clone https://github.com/jsramesh1990/Aquarium-Tank-Monitoring.git
cd Aquarium-Tank-Monitoring
```

---

### 2️ Build Using PlatformIO (Recommended)

```bash
make pio-build
```

### 3️⃣ Upload to Board

```bash
make pio-upload
```

### 4️ Monitor Serial Output

```bash
make pio-monitor
```

---

### Alternative: Arduino CLI

```bash
make arduino-build
make arduino-upload
make monitor
```

---

##  Wiring Summary

| Sensor      | MCU Pin     | Notes                  |
| ----------- | ----------- | ---------------------- |
| pH Sensor   | ADC Pin     | Requires calibration   |
| TDS Sensor  | ADC Pin     | Use stable reference   |
| Temp Sensor | Digital/ADC | Depends on sensor type |

> Refer to board-specific folders for exact pin mappings.

---

##  Repository Structure

```
Aquarium-Tank-Monitoring/
├── Aquarium/            # Board-specific code
├── README.md
├── Makefile
└── LICENSE
```

---

##  Calibration Notes

* pH and TDS sensors **must be calibrated** using reference solutions
* ADC reference voltage differs per board
* Avoid electrical noise near sensors

---

##  Future Enhancements

* Relay-based heater & filter automation
* MQTT / JSON output
* Web dashboard (ESP32)
* Data logging (SD / Cloud)
* Unit tests & CI using GitHub Actions

---

##  Learning Outcomes

* Embedded sensor interfacing
* Multi-platform firmware design
* PlatformIO & Makefile workflow
* ADC calibration techniques
* Real-time monitoring systems

---

##  License

This project is licensed under the **MIT License**.

---

## Ready Description

> Designed a multi-platform aquarium monitoring system using Arduino, ESP32, ESP8266, and STM32, featuring real-time sensor acquisition, ADC calibration, and PlatformIO-based build automation.

---

⭐ If you find this project useful, consider giving it a **star** on GitHub!
