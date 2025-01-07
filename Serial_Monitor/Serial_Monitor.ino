int ledPin = 3;
String msg;
void setup() {
  // put your setup code here, to run once:
pinMode(ledPin, OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println("Enter ON or OFF");
while(Serial.available() == 0){

}
msg = Serial.readString();
if(msg == "ON"){
  digitalWrite(ledPin, HIGH);
}
if(msg == "OFF"){
  digitalWrite(ledPin, LOW);
}
}
