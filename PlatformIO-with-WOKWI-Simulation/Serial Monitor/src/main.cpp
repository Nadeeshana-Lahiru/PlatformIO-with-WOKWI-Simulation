#include <Arduino.h>

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);   //boud rate  ,  define serial monitor with begin

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("This is serial monitor");  //print 
  delay(1000);
}
