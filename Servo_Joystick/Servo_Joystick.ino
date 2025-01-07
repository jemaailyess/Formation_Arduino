#include "Servo.h"
Servo myServo;
int servopos;
int xPin = A0;
int x;
void setup() {
  // put your setup code here, to run once:
myServo.attach(3);
pinMode(xPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
x = analogRead(xPin);
servopos = map(x, 0, 1023, 0, 165);
myServo.write(servopos);
}
