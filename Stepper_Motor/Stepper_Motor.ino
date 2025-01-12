#include <Stepper.h>
Stepper myStepper(2048,8,10,9,11); // (nbr de pas,IN1,IN3,IN2,IN4)
void setup() {
  // put your setup code here, to run once:
myStepper.setSpeed(5); // RPM
}

void loop() {
  // put your main code here, to run repeatedly:
myStepper.step(2048);
delay(1000);
myStepper.step(-2048);
delay(1000);
}
