#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

int flamePin = 7;
int ledPin = 13;
int buzzerPin = 12;

void setup() {
  pinMode(flamePin, INPUT);
  pinMode(ledPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  Serial.begin(9600);

  lcd.init();          
  lcd.backlight();    
  lcd.clear();

  lcd.setCursor(0, 0);
  lcd.print("Flame Sensor ON"); 
}

void loop() {
  int flameValue = digitalRead(flamePin);

  if (flameValue == HIGH) {  
    digitalWrite(ledPin, HIGH);
    Serial.println("Fire");
    tone(buzzerPin, 1200);

    lcd.setCursor(0, 1);
    lcd.print("Fire     "); 
  } 
  else {                   
    digitalWrite(ledPin, LOW);
    Serial.println("No Fire");
    noTone(buzzerPin);

    lcd.setCursor(0, 1);
    lcd.print("No Fire  ");  
  }

  delay(500);
}
