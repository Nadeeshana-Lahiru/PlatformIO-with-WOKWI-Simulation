#include <Arduino.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);

int RED_LED_PIN = 13;
int BUZZER_PIN = 12;
int IR_PIN = 11;

void setup() {
  lcd.init();
  lcd.backlight();
  lcd.clear();

  pinMode(RED_LED_PIN,OUTPUT);
  pinMode(BUZZER_PIN,OUTPUT);
  pinMode(IR_PIN,INPUT);
}

void loop() {
  int ir_value = digitalRead(IR_PIN);

  if (ir_value==1){
    digitalWrite(RED_LED_PIN,LOW);
    noTone(BUZZER_PIN);
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Area Secure");
    delay(2000);
  }
  else {
    digitalWrite(RED_LED_PIN,HIGH);
    tone(BUZZER_PIN,1200);
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Motion Detected");
    delay(2000);
  }
}
