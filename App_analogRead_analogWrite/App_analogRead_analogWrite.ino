int readPin = A2;
int ledPin = 3;
int valeur;
void setup() {
  // put your setup code here, to run once:
  pinMode(readPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  valeur = analogRead(readPin);
  analogWrite(ledPin, valeur * 255. / 1023. );
}
