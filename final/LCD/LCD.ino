/*
 * LCD 16x2
 */

// LIBRERIAS
#include <LiquidCrystal.h>

// VARIABLES
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

// SETUP
void setup() {
  lcd.begin(16, 2);   // establecemos el tamanno del LCD
  lcd.print("Robotics EUEM :)");
}

// LOOP
void loop() {
  lcd.setCursor(0, 1);          // establecemos que empiece en el 0, 1
  lcd.print(millis() / 1000);   // tiempo que queremos imprimir el mensaje
}
