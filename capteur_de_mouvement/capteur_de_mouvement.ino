int mvtPin = 2;
int valeur;
int led = 3;
void setup() {
  // put your setup code here, to run once:
pinMode(mvtPin, INPUT);
pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  valeur = digitalRead(mvtPin);
  if(valeur == 1){
    digitalWrite(led, HIGH);
  }else{
    digitalWrite(led, LOW);
  }

}
