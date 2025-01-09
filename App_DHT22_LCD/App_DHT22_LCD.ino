#include "DHT.h"
#include "LiquidCrystal_I2C.h"
DHT dht(2, DHT22);
int temp;
int humd;
LiquidCrystal_I2C lcd(0x27, 16, 2);
void setup() {
  // put your setup code here, to run once:
dht.begin();
lcd.init();
lcd.backlight();
}

void loop() {
  // put your main code here, to run repeatedly:
delay(2000);
temp = dht.readTemperature();
humd = dht.readHumidity();
lcd.setCursor(0,0);
lcd.print("Temp: ");
lcd.print(temp);
lcd.print(" C");
lcd.setCursor(0,1);
lcd.print("Humidity: ");
lcd.print(humd);
lcd.print(" %");
}
