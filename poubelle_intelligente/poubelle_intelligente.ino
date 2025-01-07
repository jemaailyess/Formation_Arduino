#include <Servo.h>
Servo myServo;
int servoPin = 9;
int servoPos;
int openPos = 90;
int closedPos = 0;
int trig = 10;
int echo = 11;
int time;
int distance;
void setup() {
  // put your setup code here, to run once:
  myServo.attach(servoPin);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(trig, LOW);
delayMicroseconds(2);
digitalWrite(trig, HIGH);
delayMicroseconds(10);
digitalWrite(trig, LOW);
time = pulseIn(echo, HIGH);
distance = 0.034 * time/2;
if(distance < 20){
  openTrash();
  delay(5000);
}else{
  closeTrash();
}
}
void openTrash(){
  servoPos = openPos;
  myServo.write(servoPos);
}
void closeTrash(){
  servoPos = closedPos;
  myServo.write(servoPos);
}