// Author: Atul Singh
// Description: Traffic light simulation
// Board: Arduino UNO
void setup() {
  // set pins for output
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);


}

void loop() {
  // setting the loop for the led to blink on every iteration
  digitalWrite(4,HIGH);// for red led to stop
  delay(5000); // 5 sec of delay
  digitalWrite(4,LOW);
  
  digitalWrite(5,HIGH);// for yellow light to wait
  delay(2500);// 2.5 sec of delay
  digitalWrite(5,LOW); 

  digitalWrite(6,HIGH);// for green light to go
  delay(5000);// 5 sec of delay
  digitalWrite(6,LOW);

}
