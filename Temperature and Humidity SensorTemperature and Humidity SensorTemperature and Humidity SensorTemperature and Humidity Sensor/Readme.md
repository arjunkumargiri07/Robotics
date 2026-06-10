# 🌡️ ESP32 DHT11 Temperature and Humidity Monitor

A simple ESP32-based project that reads temperature and humidity data from a DHT11 sensor and displays the values on the Serial Monitor. This project is ideal for beginners learning sensor interfacing, IoT fundamentals, and environmental monitoring.

## 📖 Overview

The DHT11 sensor measures ambient temperature and humidity and sends the data to the ESP32. The ESP32 processes the readings and displays them through the Serial Monitor every 2 seconds.

## ✨ Features

- Real-time temperature monitoring
- Real-time humidity monitoring
- Serial Monitor output
- Easy-to-understand code structure
- Beginner-friendly ESP32 project
- Error handling for failed sensor readings

## 🛠️ Hardware Requirements

| Component | Quantity |
|------------|------------|
| ESP32 Development Board | 1 |
| DHT11 Temperature & Humidity Sensor | 1 |
| Jumper Wires | As required |
| Breadboard (Optional) | 1 |

## 🔌 Circuit Connections

| DHT11 Pin | ESP32 Pin |
|-----------|-----------|
| VCC | 3.3V |
| GND | GND |
| DATA | GPIO 20 |

> **Note:** Ensure the DATA pin is connected to the GPIO pin defined in the code (`DHTPIN 20`).

## 📚 Required Libraries

Install the following libraries through the Arduino IDE Library Manager:

- DHT Sensor Library by Adafruit
- Adafruit Unified Sensor

### Installation Steps

1. Open Arduino IDE.
2. Go to **Sketch → Include Library → Manage Libraries**.
3. Search for **DHT Sensor Library**.
4. Install **DHT Sensor Library by Adafruit**.
5. Install **Adafruit Unified Sensor**.

## 📊 Sample Output

```text
DHT11 Test

Temperature: 27.00 °C    Humidity: 65.00 %
Temperature: 27.00 °C    Humidity: 64.00 %
Temperature: 28.00 °C    Humidity: 64.00 %
```

## ⚠️ Error Handling

If the sensor fails to provide valid data, the following message will appear:

```text
Failed to read from DHT11!
```

Possible causes:

- Loose wiring
- Incorrect GPIO pin configuration
- Faulty sensor
- Missing library installation

## 💡 Applications

- Weather Monitoring Systems
- Smart Home Automation
- Indoor Environment Monitoring
- IoT Sensor Networks
- Agricultural Monitoring
- Educational Projects

## 👨‍💻 Author

**Arjun Kumar Giri**

Computer Engineering Student | Embedded Systems & IoT Enthusiast

GitHub: https://github.com/arjunkumargiri07
