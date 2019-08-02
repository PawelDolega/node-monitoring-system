#include "nodeMonitorArduino.h"

void setup() {
  Serial.begin(9600);
  initialization();
}

void loop() {
  voltageMesurments();
}
