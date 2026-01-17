// Author: Chat-Gpt
// Description: printing count from 9 to 0 in a seven segment display with a problem of no detail of the manufacture sheet
// Board: Arduino UNO
// Pins for 7-segment (Common Anode)
int segA = 2;
int segB = 3;
int segC = 4;
int segD = 5;
int segE = 6;
int segF = 7;
int segG = 8;
int segDP = 9;

// Segment patterns for numbers 0–9
// LOW = ON, HIGH = OFF (because common anode)
byte numbers[10][8] = {
  // a, b, c, d, e, f, g, dp
  {LOW, LOW, LOW, LOW, LOW, LOW, HIGH, HIGH},  // 0
  {HIGH, LOW, LOW, HIGH, HIGH, HIGH, HIGH, HIGH},  // 1
  {LOW, LOW, HIGH, LOW, LOW, HIGH, LOW, HIGH},   // 2
  {LOW, LOW, LOW, LOW, HIGH, HIGH, LOW, HIGH},   // 3
  {HIGH, LOW, LOW, HIGH, HIGH, LOW, LOW, HIGH},  // 4
  {LOW, HIGH, LOW, LOW, HIGH, LOW, LOW, HIGH},   // 5
  {LOW, HIGH, LOW, LOW, LOW, LOW, LOW, HIGH},    // 6
  {LOW, LOW, LOW, HIGH, HIGH, HIGH, HIGH, HIGH}, // 7
  {LOW, LOW, LOW, LOW, LOW, LOW, LOW, HIGH},     // 8
  {LOW, LOW, LOW, LOW, HIGH, LOW, LOW, HIGH}     // 9
};

void setup() {
  pinMode(segA, OUTPUT);
  pinMode(segB, OUTPUT);
  pinMode(segC, OUTPUT);
  pinMode(segD, OUTPUT);
  pinMode(segE, OUTPUT);
  pinMode(segF, OUTPUT);
  pinMode(segG, OUTPUT);
  pinMode(segDP, OUTPUT);
}

void loop() {
  // Count from 9 to 0
  for (int i = 9; i >= 0; i--) {
    displayNumber(i);
    delay(1000); // 1 second delay
  }
}

// Function to display a number
void displayNumber(int num) {
  digitalWrite(segA, numbers[num][0]);
  digitalWrite(segB, numbers[num][1]);
  digitalWrite(segC, numbers[num][2]);
  digitalWrite(segD, numbers[num][3]);
  digitalWrite(segE, numbers[num][4]);
  digitalWrite(segF, numbers[num][5]);
  digitalWrite(segG, numbers[num][6]);
  digitalWrite(segDP, numbers[num][7]);
}
