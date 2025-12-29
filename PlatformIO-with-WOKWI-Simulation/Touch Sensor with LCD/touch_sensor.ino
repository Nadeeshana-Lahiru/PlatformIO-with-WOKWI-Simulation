#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

int touchPin = 8;
int ledPin = 9;

void setup() {
  pinMode(touchPin, INPUT);
  pinMode(ledPin, OUTPUT);

  lcd.init();
  lcd.backlight();
  lcd.clear();
}

void loop() {
  lcd.clear(); 

  int touchState = digitalRead(touchPin);

  if(touchState == HIGH){
    digitalWrite(ledPin, HIGH);
    lcd.setCursor(0, 0);
    lcd.print("Touch Detected");
    lcd.setCursor(0, 1);
    lcd.print("Led ON");
  }
  else if (touchState==LOW) {
    digitalWrite(ledPin, LOW);
    lcd.setCursor(0, 0);
    lcd.print("No Touch");
    lcd.setCursor(0, 1);
    lcd.print("Led OFF");
  }

  delay(200);
}
