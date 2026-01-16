// Description:  PWM PINS("PAUSE WITH MODULATION") OR SPECIAL DIGITAL PINS ARE BOTH DIGITAL AND ANALOG:

int redpin=9;

void setup() {
 
  pinMode(redpin,OUTPUT);

}

void loop() {
  
  analogWrite(redpin,255);// HERE WE USING THE SPECIAL PIN AS ANALOG PIN WHERE 255:WORKS AS HIGH(5V) AND 0 AS (0V);
  delay(1000);// 1 sec
  analogWrite(redpin,40);// here 40 determine low voltage supply to the LED
  delay(1000);

}
