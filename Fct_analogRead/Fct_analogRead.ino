int readPin = A2;
int valeur;
float voltage;
void setup() {
  // put your setup code here, to run once:
  pinMode(readPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  valeur = analogRead(readPin);
  voltage = valeur * 5./1023. ;
  Serial.println(voltage);
}
