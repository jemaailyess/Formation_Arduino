#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x3F, 16,2); // 0x27 or 0x3F
void setup() {
  // put your setup code here, to run once:
lcd.init();
lcd.backlight();
lcd.setCursor(0,0); // (colonne,ligne)
lcd.print("Jemaa Ilyess");
//lcd.cursor(); // afficher le curseur
//lcd.blink(); curseur yit7arek
}

void loop() {
  // put your main code here, to run repeatedly:
lcd.scrollDisplayLeft(); // ktiba tit7arek
delay(1000);
}
