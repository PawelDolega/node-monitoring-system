#ifndef nodeMonitorArduino_h  //define sensors
#define CZ1a 2
#define CZ1b 3
#define CZ1c 4
#define CZ2 5
#define CZ7 6
#define CZ3 7
#define CZ5 8
#define CZ6 9
#define CZ3Amps A0
#define CZ4Amps A1
#define CZ5Amps A2
#define CZ6Amps A3
#define offset20Asensor 2500
#define mVperAmp20ASensor 125

void initialization();  //define initialization pins
void vlotageMesurments(); //voltage checking function
void ampsMesurments(); //amps checking function

#endif
