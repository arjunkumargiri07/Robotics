📡 Ultrasonic Distance Indicator with RGB LED

This project uses an ultrasonic sensor to measure distance and displays the result using a NeoPixel RGB LED. The LED changes color based on how close an object is to the sensor.

🚀 Project Overview

The system measures distance using the HC-SR04 Ultrasonic Distance Sensor HC-SR04 Ultrasonic Distance Sensor and provides real-time visual feedback:

🔴 Red → Object is very close (≤ 10 cm)<br>
🟡 Yellow → Medium distance (10–20 cm)
🟢 Green → Far (> 20 cm)
🔵 Blue → No echo detected / out of range
🧰 Components Required
ESP32 / Arduino Board
HC-SR04 Ultrasonic Sensor
NeoPixel RGB LED (WS2812)
Jumper wires
Breadboard
📦 Libraries Used
Adafruit NeoPixel Library
Used to control the RGB LED strip or single NeoPixel.
🔌 Pin Configuration
Component	Pin
TRIG (HC-SR04)	GPIO 4
ECHO (HC-SR04)	GPIO 5
NeoPixel DIN	GPIO 48
⚙️ How It Works
The ultrasonic sensor sends a sound pulse.
The pulse reflects from an object and returns to the sensor.
The microcontroller measures the time taken for the echo.
Distance is calculated using sound speed in air.
Based on the distance, the RGB LED changes color.
📐 Distance Formula
Distance (cm)=
2
Duration×0.0343
	​

💡 Features
Real-time distance measurement
Visual color-based feedback system
Simple and lightweight IoT-style project
Useful for beginners in Arduino/ESP32
🧪 Applications
Obstacle detection robots
Smart parking systems
Distance monitoring tools
Smart bins and automation systems
🖥️ Serial Monitor Output Example
Distance: 5.2 cm
Distance: 18.6 cm
Distance: 42.3 cm
Distance: -1 cm (No echo detected)
📌 Notes
If using ESP32, ensure correct voltage levels for the HC-SR04 Echo pin (use voltage divider if needed).
Change RGB_PIN if your board does not support GPIO 48.
👨‍💻 Author
