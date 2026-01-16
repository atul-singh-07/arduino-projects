// Author: Atul Singh
// Description: for printing the potential(voltage) output through potentiometer
// Board: Arduino UNO

int readpin=A5;

void setup() {
 
  Serial.begin(9600); // for maintaining the same speed of data transfer between computer and arduino

}

void loop() {
  
  Serial.println(analogRead(readpin));// printing the values input T0 A5 pin through potentiometer output

}// so here for this code we have connected 5v to the right leg of potentiometer and the very left leg to gnd and the middle leg give the output
// voltage which is being readed through A5 analog pin.