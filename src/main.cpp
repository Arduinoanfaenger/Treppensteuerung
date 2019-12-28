#include <Arduino.h>

#define UP D5
#define DOWN D6

void goUp();
void goDown();

void setup() {
  pinMode(UP, INPUT);
  pinMode(DOWN, INPUT);
  attachInterrupt(digitalPinToInterrupt(UP), goUp, RISING);
  attachInterrupt(digitalPinToInterrupt(DOWN), goDown, RISING);

  // TODO: Setup Wifi
  // TODO: Setup Captive Portal & wifi config if wifi not configured
  // TODO: Setup Websait
}

void loop() {
  // put your main code here, to run repeatedly:
}