#include "nodeMonitorArduino.h"

void setup() {
  Serial.begin(9600); //init serial monitor
  initialization();
}

void loop() {
  voltageMesurments();
}
