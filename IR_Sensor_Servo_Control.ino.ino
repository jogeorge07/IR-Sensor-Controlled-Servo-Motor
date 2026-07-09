#include <Servo.h>

Servo myServo;

const int irPin = 2;
int lastState = HIGH;

void setup() {
  pinMode(irPin, INPUT);
  myServo.attach(9);
  myServo.write(0);   // initial position
}

void loop() {
  int irState = digitalRead(irPin);

  if (irState == LOW && lastState == HIGH) {
    myServo.write(180);   // hand detected
  }

  if (irState == HIGH && lastState == LOW) {
    myServo.write(0);     // hand removed
  }

  lastState = irState;
  delay(50);
}
