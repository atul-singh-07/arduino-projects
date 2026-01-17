// Author: Atul Singh
// Description: servo motor rotation using external 5v 2A supply from 0 t0 90 to 180 degree in a loop
// Board: Arduino UNO
#include <Servo.h>

Servo myServo;   // servo object

void setup() {
  myServo.attach(9);   // signal pin connected to D9
}

void loop() {
  myServo.write(0);    // move to 0°
  delay(1000);

  myServo.write(90);   // move to 90°
  delay(1000);

  myServo.write(180);  // move to 180°
  delay(1000);
}

