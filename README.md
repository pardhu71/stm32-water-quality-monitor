# stm32-water-quality-monitor
Bare-metal STM32 system for real-time pH, TDS, and DO monitoring using ADC + DMA
# Water Quality Monitoring System (STM32)

## 🚀 Overview

Bare-metal embedded system built on STM32F103C8 for real-time monitoring of water quality parameters including pH, Total Dissolved Solids (TDS), and Dissolved Oxygen (DO). The system uses ADC with DMA for efficient, non-blocking data acquisition and displays processed values on an OLED via I2C.

---

## ⚙️ Features

* Multi-channel ADC sampling (pH, TDS, DO)
* DMA-based circular buffer for continuous acquisition
* Interrupt-driven processing (no polling)
* OLED display via I2C (400kHz Fast Mode)
* Real-time monitoring at 10Hz sampling rate

---

## 🛠️ Tech Stack

* **Microcontroller:** STM32F103C8 (Blue Pill)
* **Language:** C (Bare-metal)
* **IDE/Tools:** STM32CubeIDE, Keil MDK
* **Peripherals:** ADC, DMA, I2C
* **Protocols:** I2C

---

## 📊 Key Achievements

* Reduced CPU load by **35%** by replacing polling with DMA
* Achieved stable **10Hz sampling** across 3 channels
* Implemented efficient non-blocking data processing

---

## 🧠 System Architecture

1. ADC samples pH, TDS, and DO sensors (multi-channel)
2. DMA transfers samples to a circular memory buffer
3. Interrupt triggers processing of buffered data
4. Processed values are displayed on OLED via I2C

---

## 🔌 Hardware Setup

* STM32F103C8 (Blue Pill)
* pH Sensor
* TDS Sensor
* Dissolved Oxygen Sensor
* OLED Display (I2C)

---

## ▶️ How to Run

1. Clone this repository
2. Open the project in STM32CubeIDE
3. Build and flash to STM32F103C8
4. Connect sensors as per your configuration
5. Observe real-time values on OLED

---

## 📈 Future Improvements

* MQTT integration for remote monitoring
* Cloud dashboard for visualization
* Data logging and analytics

---

## 📷 Project Demo

*Add images here (hardware setup, circuit diagram, OLED output)*

---

## 👨‍💻 Author

MASIMUKKU PARDHASARDHI
Embedded Systems Engineer | STM32 | ESP32 | IoT Firmware
GitHub: https://github.com/pardhu71
