// Author: Atul Singh
// Description: Radar System using servo(sg90) and ultrasonic sensor(hc-sr04) 
// Board: Arduino UNO
#include <Servo.h>

Servo radarServo;// servo object

const int trigpin = 10;
const int echopin = 11;

long duration;
int distance;
int angle;

int calculateDistance() {// function for calculating the distance
  digitalWrite(trigpin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigpin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigpin, LOW);

  // timeout added (20 ms)
  duration = pulseIn(echopin, HIGH, 20000);

  if (duration == 0) {
    return -1;   // no object detected
  }

  distance = (duration * 0.034) / 2;
  return distance;
}

void setup() {
  radarServo.attach(9);

  pinMode(trigpin, OUTPUT);
  pinMode(echopin, INPUT);

  Serial.begin(9600);// serial monitor baud rate setting for having smooth data transfer between the system and the arduino
}

void loop() {// for moving the servo from 0 to 180 degrees
  for (angle = 0; angle <= 180; angle++) {
    radarServo.write(angle);
    delay(15);

    distance = calculateDistance();

    Serial.print(angle);
    Serial.print(",");
    Serial.println(distance);
  }

  for (angle = 180; angle >= 0; angle--) {// for moving the servo back from 180 to 0 degree
    radarServo.write(angle);
    delay(15);

    distance = calculateDistance();// function call

    Serial.print(angle);
    Serial.print(",");
    Serial.println(distance);
  }
}

 