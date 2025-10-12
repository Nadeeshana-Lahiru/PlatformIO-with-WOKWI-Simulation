#include <Arduino.h>

int led_pin = 12;
int pinButton = 13;

void setup() {
  pinMode(pinButton, INPUT);
  pinMode(led_pin, OUTPUT);
}

void loop() {
  int buttonState = digitalRead(pinButton);

  if(buttonState == LOW){
    digitalWrite(led_pin, HIGH);
  }
  else{
    digitalWrite(led_pin, LOW);
  }
}