#include "nodeMonitorArduino.h"

void setup() {
  initialization();
}

void loop() {
  voltageMesurments();
  ampsMesurments();
  tempHumidity();
}
