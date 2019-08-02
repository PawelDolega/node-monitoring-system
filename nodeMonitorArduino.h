#ifndef nodeMonitorArduino_h  //define sensors
#include <Adafruit_HTU21DF.h>
#include <Wire.h>
#include "Adafruit_HTU21DF.h"

#define CZ1a 4
#define CZ1b 5
#define CZ1c 6
#define CZ2 7
#define CZ7 8
#define CZ3 9
#define CZ5 10
#define CZ6 11
#define CZ3Amps A0
#define CZ4Amps A1
#define CZ5Amps A2
#define CZ6Amps A3
#define offset20Asensor 2500
#define mVperAmp20ASensor 125

void initialization();  //define initialization pins
void vlotageMesurments(); //voltage checking function
void ampsMesurments(); //amps checking function ACS712-20
void tempHumidity(); // Temperature and humidity checking function HTU21D
Adafruit_HTU21DF htu = Adafruit_HTU21DF();

#endif
