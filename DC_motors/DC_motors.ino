int motorA1 = 2;
int motorA2 = 3;
int motorB1 = 4;
int motorB2 = 5;
void setup() {
  // put your setup code here, to run once:
pinMode(motorA1, OUTPUT);
pinMode(motorA2, OUTPUT);
pinMode(motorB1, OUTPUT);
pinMode(motorB2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(motorA1, HIGH);
digitalWrite(motorA2, LOW);
digitalWrite(motorB1, HIGH);
digitalWrite(motorB2, LOW);
delay(2000);
digitalWrite(motorA1, LOW);
digitalWrite(motorA2, HIGH);
digitalWrite(motorB1, LOW);
digitalWrite(motorB2, HIGH);
delay(2000);
}
