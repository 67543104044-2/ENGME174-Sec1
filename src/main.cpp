#include <Arduino.h>

// กำหนดขา LED
const int ledPins[] = {23, 19, 18, 5, 17, 16, 4, 0};
const int numLEDs = sizeof(ledPins) / sizeof(ledPins[0]);

// กำหนดขา Potentialmeter
const int potPin = 36;

void setup() {
    // ตั้งค่าขา LED เป็น OUTPUT
    for (int i = 0; i < numLEDs; i++) {
        pinMode(ledPins[i], OUTPUT);
    }

    // ตั้งค่าขา Potentialmeter เป็น INPUT
    pinMode(potPin, INPUT);
}

void loop() {
    // อ่านค่าจาก Potentialmeter (แรงดันไฟฟ้า)
    int potValue = analogRead(potPin);
    float voltage = potValue * (3.3 / 4095.0); // แปลงค่า ADC เป็นแรงดันไฟฟ้า (0 - 3.3V)

    // ควบคุม LED ตามเงื่อนไข
    if (voltage >= 0 && voltage <= 0.9) {
        // แรงดัน 0-0.9V: LED ทุกดวงดับ
        for (int i = 0; i < numLEDs; i++) {
            digitalWrite(ledPins[i], LOW);
        }
    } else if (voltage > 0.9 && voltage <= 2.0) {
        // แรงดัน 1-2V: LED หลอดที่ 1-3 ติด
        for (int i = 0; i < numLEDs; i++) {
            digitalWrite(ledPins[i], i < 3 ? HIGH : LOW);
        }
    } else if (voltage > 2.0 && voltage <= 3.0) {
        // แรงดัน 2-3V: LED หลอดที่ 1-5 ติด
        for (int i = 0; i < numLEDs; i++) {
            digitalWrite(ledPins[i], i < 5 ? HIGH : LOW);
        }
    } else if (voltage > 3.0) {
        // แรงดันมากกว่า 3V: LED ทุกดวงติด
        for (int i = 0; i < numLEDs; i++) {
            digitalWrite(ledPins[i], HIGH);
        }
    }

    // หน่วงเวลาเล็กน้อยเพื่อป้องกันการอ่านค่าถี่เกินไป
    delay(100);
}