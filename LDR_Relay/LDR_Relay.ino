int readPin = A0;
int valeur;
int ledPin = 3;
void setup() {
  // put your setup code here, to run once:
pinMode(readPin, INPUT);
pinMode(ledPin, OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
valeur = analogRead(readPin);
if (valeur < 400){
  digitalWrite(ledPin, HIGH);
}else{
  digitalWrite(ledPin, LOW);
}
Serial.println(valeur);
}
