/*
Name:
Date:
Description:
Sample i/p:
Sample o/p:
*/
// Define the LED pin and PWM parameters
const int ledPin = 5; // GPIO pin connected to the LED
const int freq = 5000; // PWM frequency
const int ledChannel = 0; // PWM channel
const int resolution = 8; // 8-bit resolution (0-255)

void setup() {
  // Configure PWM functionalitiy for the LED pin
  ledcSetup(ledChannel, freq, resolution);
  
  // Attach the LED pin to the PWM channel
  ledcAttachPin(ledPin, ledChannel);
}

void loop() {
  // Gradually increase brightness
  for (int dutyCycle = 0; dutyCycle <= 255; dutyCycle++) {
    ledcWrite(ledChannel, dutyCycle);
    delay(10);
  }

  // Gradually decrease brightness
  for (int dutyCycle = 255; dutyCycle >= 0; dutyCycle--) {
    ledcWrite(ledChannel, dutyCycle);
    delay(10);
  }
}

