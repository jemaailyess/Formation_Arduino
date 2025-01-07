int ledPin = 2;
int readPin = A0;
int valeur;
float voltage;
void setup() {
  // put your setup code here, to run once:
  pinMode(readPin, INPUT);
  pinMode(ledPin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  voltage = getvoltage();
  if (voltage > 4){
    warnning();
  }else{
    digitalWrite(ledPin, LOW);
  }

}
void warnning(){
  digitalWrite(ledPin, HIGH);
  delay(500);
  digitalWrite(ledPin, LOW);
  delay(500);
}
float getvoltage(){
  valeur = analogRead(readPin);
  voltage = map (valeur, 0, 1023, 0, 5);
}