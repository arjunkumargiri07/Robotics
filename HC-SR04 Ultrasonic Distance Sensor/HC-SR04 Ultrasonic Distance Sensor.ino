#include <Adafruit_NeoPixel.h>
#define TRIG_PIN 4
#define ECHO_PIN 5
#define RGB_PIN 48 // Change to 38 if needed
Adafruit_NeoPixel pixel(1, RGB_PIN, NEO_GRB + NEO_KHZ800);

void setup() {
Serial.begin(115200);

pinMode(TRIG_PIN, OUTPUT);
pinMode(ECHO_PIN, INPUT);

pixel.begin();
pixel.setBrightness(50);
pixel.clear();
pixel.show();
}

float getDistanceCM() {
digitalWrite(TRIG_PIN, LOW);
delayMicroseconds(2);

digitalWrite(TRIG_PIN, HIGH);
delayMicroseconds(10);
digitalWrite(TRIG_PIN, LOW);

long duration = pulseIn(ECHO_PIN, HIGH, 30000); // 30 ms timeout

if (duration == 0) {
return -1; // No echo received
}
// Speed of sound in air ≈ 343 m/s at 20°C
// = 0.0343 cm/µs
// The pulse travels to the object and back,
// so divide by 2 to get the one-way distance.
return duration * 0.0343 / 2.0;
}

void loop() {
float distance = getDistanceCM();

Serial.print("Distance: ");
Serial.print(distance);
Serial.println(" cm");

if (distance > 0) {
if (distance <= 10) {
pixel.setPixelColor(0, pixel.Color(255, 0, 0)); // Red
}
else if (distance <= 20) {
pixel.setPixelColor(0, pixel.Color(255, 255, 0)); // Yellow
}
else {
pixel.setPixelColor(0, pixel.Color(0, 255, 0)); // Green
}
} else {
pixel.setPixelColor(0, pixel.Color(0, 0, 255)); // Blue = no echo
}

pixel.show();
delay(100);
}