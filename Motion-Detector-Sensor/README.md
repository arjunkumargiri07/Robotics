# 🚨 ESP32 Motion Detector Sensor

A motion detection system built using an ESP32 and a PIR (Passive Infrared) sensor. The project detects movement in its surroundings and can trigger actions such as turning on LEDs, activating alarms, or integrating with IoT platforms for remote monitoring.

## 📖 Overview

This project demonstrates how to interface a PIR Motion Sensor with an ESP32 microcontroller. When motion is detected, the ESP32 processes the sensor signal and performs a predefined action. Due to the ESP32's built-in Wi-Fi and Bluetooth capabilities, the project can be easily extended into a smart home or IoT security solution.

## ✨ Features

- Real-time motion detection
- Low power consumption
- ESP32 Wi-Fi and Bluetooth support
- Beginner-friendly implementation
- Suitable for smart home and security applications
- Easily expandable for IoT integration

## 🛠️ Hardware Requirements

| Component | Quantity |
|------------|------------|
| ESP32 Development Board | 1 |
| PIR Motion Sensor (HC-SR501) | 1 |
| LED (Optional) | 1 |
| 220Ω Resistor (Optional) | 1 |
| Breadboard | 1 |
| Jumper Wires | As required |

## 🔌 Circuit Connections

| PIR Sensor | ESP32 |
|------------|--------|
| VCC | 3.3V |
| GND | GND |
| OUT | GPIO 2 |

| LED (Optional) | ESP32 |
|----------------|--------|
| Positive (+) | GPIO 4 |
| Negative (-) | GND (via 220Ω resistor) |

> **Note:** Some PIR sensors can operate with 5V input while providing a 3.3V output signal compatible with ESP32 GPIO pins.

## 💡 Applications

- Smart Home Automation
- Security and Surveillance Systems
- Occupancy Detection
- Automatic Lighting Systems
- Energy Management Solutions
- IoT-Based Monitoring Systems

## 👨‍💻 Author

**Arjun Kumar Giri**

Computer Engineering Student | Robotics & Embedded Systems Enthusiast

GitHub: https://github.com/arjunkumargiri07
