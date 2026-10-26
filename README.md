# ESP32-S3 Temperature & Humidity Monitor

A beginner-friendly IoT project that uses an ESP32-S3 development board and a DHT11 sensor to measure temperature and relative humidity, displaying live readings through the Arduino IDE Serial Monitor.

## 🎥 Project Demo

Watch the complete demonstration on YouTube:

[**Live Temperature & Humidity Monitoring with ESP32-S3 | IoT Project**](https://youtu.be/KXiHorLPs70)

## ✨ Features

- Real-time temperature readings in Celsius.
- Relative humidity monitoring.
- Serial output at 115200 baud.
- Sensor read-error handling.
- Automatic readings every 2 seconds.

## 🛠️ Hardware Requirements

- ESP32-S3 Development Board
- DHT11 Temperature & Humidity Sensor
- Breadboard and jumper wires
- USB-C cable

💻 Software & Libraries

Arduino IDE – For writing and uploading the code.
ESP32 Board Support Package by Espressif Systems.
Adafruit DHT Sensor Library – For reading temperature and humidity.
Adafruit Unified Sensor Library – Dependency required by the DHT sensor library

## 🔌 Wiring

| DHT11 Sensor | ESP32-S3 |
|---|---|
| VCC | 3.3V |
| GND | GND |
| DATA | GPIO 4 |

**Note:** These connections apply to the sensor setup used in this project.

## 🚀 Getting Started

1. Install Arduino IDE.
2. Install ESP32 board support through Boards Manager.
3. Install the Adafruit DHT Sensor Library and Adafruit Unified Sensor Library through Library Manager.
4. Connect the DHT11 sensor to the ESP32-S3 using the wiring table above.
5. Open `ESP32S3_DHT11_Monitor.ino` in Arduino IDE.
6. Select the appropriate ESP32-S3 board and connected port.
7. Upload the sketch.
8. Open Serial Monitor and set the baud rate to **115200**.

## 📊 Sample Output

```text
ESP32-S3 | Environment Monitor
Sensor: DHT11
================================
[LIVE] Temperature: 26.4 °C  |  Humidity: 50 %
[LIVE] Temperature: 26.5 °C  |  Humidity: 52.4 %
```

*Sample values shown for illustration; actual readings depend on the environment.*

## 📚 What I Learned

- Interfacing a digital sensor with a microcontroller.
- GPIO configuration and hardware wiring.
- Configuring ESP32-S3 in Arduino IDE.
- Installing libraries and managing dependencies.
- Uploading C++ code and monitoring serial output.

## 🔮 Future Improvements

Integrate sensor readings with a Flutter mobile application to create an interactive IoT monitoring system.

## 🧰 Technologies

`ESP32-S3` · `DHT11` · `Arduino IDE` · `C++` · `IoT`

---

Built as a hands-on learning project exploring embedded systems and the Internet of Things.
