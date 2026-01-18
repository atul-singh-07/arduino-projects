// Joystick Controlled LED Direction Indicator
// Author: Atul Singh
// Board: Arduino UNO

// STEP:1 set the reading pins for reading the values of vrx and vry by analog 1 and 0 pin

int vrx=A0;// the output pin vrx of joystick being readed with analog pin
int vry=A1;// the output pin vry of joystick being readed with analog pin

// setting up the digital pins of for led controls
int ledup=8;
int leddown=9;
int ledleft=10;
int ledright=11;

// now set the values of threshold

int lowlimit=400;
int highlimit=600;

// NOTE: all values between 400 and 600 are values considering joystick at rest
void setup() {
// set the digital pin for output to leds
  pinMode(ledup,OUTPUT);
  pinMode(leddown,OUTPUT);
  pinMode(ledleft,OUTPUT);
  pinMode(ledright,OUTPUT);

  Serial.begin(9600);// for seeing the analog values on serial monitor
}

void loop() {
  // reading the values of vrx and vry through analog read function
  int xvalues=analogRead(vrx);
  int yvalues=analogRead(vry);

  // FIRST TURN OFF ALL LEDS: as we are in loop when the loop start to iterate again make sure that all the led are off initiallly
  digitalWrite(ledup,LOW);
  digitalWrite(leddown,LOW);
  digitalWrite(ledleft,LOW);
  digitalWrite(ledright,LOW);

  if(xvalues<lowlimit){
    // joystick moved to left
    digitalWrite(ledleft,HIGH);
    Serial.println("LEFT");
  }
  else if(xvalues>highlimit){
    // joystick moved to right
    digitalWrite(ledright,HIGH);
    Serial.println("RIGHT");
  }
  else if(yvalues<lowlimit){
    // joystick moved down
    digitalWrite(leddown,HIGH);
    Serial.println("DOWN");
  }
  else if(yvalues>highlimit){
    // joystick moved up
    digitalWrite(ledup,HIGH);
    Serial.println("UP");
  }
  else{
    Serial.println("CENTER");// for the condition when the joystick is at rest 
  }
  
  delay(100);// small delay for the stability of interation between software and hardware
}
