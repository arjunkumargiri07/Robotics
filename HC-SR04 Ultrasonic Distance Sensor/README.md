# HC-SR04 Ultrasonic Distance Sensor

## Overview
This project demonstrates how to use the HC-SR04 ultrasonic sensor with Arduino to measure distance using sound waves.

## Features
- Distance measurement (2cm – 400cm)
- Real-time Serial Monitor output
- Easy Arduino integration

## Hardware Required
- Arduino UNO / Nano / Mega
- HC-SR04 Ultrasonic Sensor
- Jumper wires
- Breadboard

## Pin Connections
| HC-SR04 | Arduino |
|----------|---------|
| VCC      | 5V      |
| GND      | GND     |
| TRIG     | D9      |
| ECHO     | D10     |

## Working Principle
The sensor sends ultrasonic waves via TRIG pin and measures the reflected wave using the ECHO pin. Distance is calculated using sound speed formula.

## Formula
Distance = (Time × 0.034) / 2

## Code
See `/src/hc-sr04.ino`

## Author
Arjun Kumar Giri

