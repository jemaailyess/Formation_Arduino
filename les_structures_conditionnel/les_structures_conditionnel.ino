int readPin = A2;
int ledPin = 3;
int valeur;
float voltage ; 
void setup() {
  // put your setup code here, to run once:
  pinMode(readPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  valeur = analogRead(readPin);
  voltage = valeur * 5./1023. ;
  Serial.println(voltage);
  if (voltage > 4) {
    digitalWrite(ledPin, HIGH);
  }else{
    digitalWrite(ledPin, LOW);
  }
}
