#include <Arduino.h>
// For Octopus Pro V1.0 (STM32F446ZET6): "LED" on external connector: PB0. 
// In Octopus Pro V1.1: would be PB10
#define LED PB0

void setup() {
    Serial.begin(9600); // goes to SerialUSB
    pinMode(LED, OUTPUT);
}

void loop() {
    Serial.println("Hello, world!");
    digitalWrite(LED, LOW);
    delay(1000);
    digitalWrite(LED, HIGH);
    delay(1000);
}