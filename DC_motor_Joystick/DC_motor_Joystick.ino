int motorSpeed = 3;
int Left = 4;
int Right = 5;
int readPin = A0;
int valeur;
void setup() {
  // put your setup code here, to run once:
pinMode(motorSpeed, OUTPUT);
pinMode(Left, OUTPUT);
pinMode(Right, OUTPUT);
pinMode(readPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
valeur = analogRead(readPin);
analogWrite(motorSpeed, 60);
// joystick => 0-1023
if (valeur < 400){
  digitalWrite(Left, HIGH);
digitalWrite(Right, LOW);
}else if (valeur < 600){
digitalWrite(Left, LOW);
digitalWrite(Right, LOW);
}else {
  digitalWrite(Left, LOW);
digitalWrite(Right, HIGH);
}
}
