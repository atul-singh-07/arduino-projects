// Author: Atul Singh
// Description: 4-LED blinking with alternating pattern
// Board: Arduino UNO
void setup() {
  // Set pins as OUTPUT
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop() {
  // Turn all LEDs ON and OFF
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);
  delay(200); // wait 0.2 second

  // Turn all LEDs ON and OFF
  digitalWrite(7, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(4, LOW);
  delay(200); // wait 0.2 second

  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);
  delay(100); // wait 0.1 second

  // Turn all LEDs OFF
  digitalWrite(7, LOW);
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
  digitalWrite(4, LOW);
  delay(100); // wait for 0.1 second
}