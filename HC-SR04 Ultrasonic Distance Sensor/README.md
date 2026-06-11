# 📡 Ultrasonic Distance Indicator with NeoPixel RGB LED

A simple **Arduino/ESP32-based distance measurement system** using an ultrasonic sensor and NeoPixel RGB LED. The system measures distance in real time and provides visual feedback using different LED colors.

---

## 📌 Project Overview

This project uses the **HC-SR04 Ultrasonic Distance Sensor** HC-SR04 Ultrasonic Distance Sensor to measure the distance of an object and displays the result using a single **NeoPixel RGB LED**.

The LED changes color based on how close an object is:

- 🔴 Red → Object is very close (≤ 10 cm)
- 🟡 Yellow → Medium distance (10–20 cm)
- 🟢 Green → Safe distance (> 20 cm)
- 🔵 Blue → No echo detected / out of range

---

## ⚙️ Features

- Real-time distance measurement  
- Accurate ultrasonic sensing  
- Instant visual feedback using RGB LED  
- Serial monitor output for debugging  
- Beginner-friendly IoT project  

---

## 🧰 Components Required

- ESP32 / Arduino Board  
- HC-SR04 Ultrasonic Sensor  
- WS2812 NeoPixel LED (1x RGB LED)  
- Jumper wires  
- Breadboard  

---

## 📦 Libraries Used

Install this library in Arduino IDE:

- **Adafruit NeoPixel Library**
  - Used to control WS2812 RGB LED

---

## 🔌 Circuit Diagram / Pin Connections

| Component | ESP32 Pin |
|------------|----------|
| HC-SR04 TRIG | GPIO 4 |
| HC-SR04 ECHO | GPIO 5 |
| NeoPixel DIN | GPIO 48 |

> ⚠️ If using ESP32, ensure proper voltage handling for ECHO pin (use voltage divider if needed).

---

## 🧠 Working Principle

1. Ultrasonic sensor sends a sound pulse using TRIG pin  
2. The pulse reflects back from an object  
3. Echo time is measured using ECHO pin  
4. Distance is calculated using sound speed in air  
5. NeoPixel LED changes color based on distance  

---

## 📐 Distance Formula


Distance (cm) = (Duration × 0.0343) / 2


Where:
- 0.0343 = speed of sound in cm/µs  
- Division by 2 accounts for round trip time  

---

## 💻 Code Explanation

- `getDistanceCM()` → Measures and returns distance  
- `loop()` → Continuously reads sensor data  
- LED color changes based on distance range  
- Serial Monitor prints real-time values  

---

## 🖥️ Serial Monitor Output Example


Distance: 5.2 cm
Distance: 15.8 cm
Distance: 34.1 cm
Distance: -1 cm (No echo detected)


---

## 🚀 Applications

- Obstacle detection systems  
- Smart parking sensors  
- Robotics navigation  
- Smart dustbins  
- Distance alert systems  

---
## ⚠️ Important Notes

- Do not power HC-SR04 ECHO directly into ESP32 without voltage protection  
- Keep sensor stable for accurate readings  
- Ensure correct board selection in Arduino IDE  

---

## 👨‍💻 Author<br>
Arjun Kumar Giri

Computer Engineering Student | Robotics & Embedded Systems Enthusiast

GitHub: https://github.com/arjunkumargiri07
