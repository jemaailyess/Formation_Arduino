int xPin = A0;
int yPin = A1;
int x;
int y;
void setup() {
  // put your setup code here, to run once:
pinMode(xPin, INPUT);
pinMode(yPin, INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
x = analogRead(xPin);
y = analogRead(yPin);
Serial.print("X value : ");
Serial.println(x);
Serial.print("Y value : ");
Serial.println(y);
delay(2000);
}
