// Author: Atul Singh
// Description: Controlling the RGB led from the serial monitor input 
// Board: Arduino UNO
int redPin=9;
int greenPin=10;
int bluePin=11;
String setColor;// "HELLO WORLD": simple text here in this code for rgb
void setup() {
 
  pinMode(redPin,OUTPUT);
  pinMode(greenPin,OUTPUT);
  pinMode(bluePin,OUTPUT);
  
  Serial.begin(9600);
}

void loop() {
  
  
  setColor=Serial.readString();// IF WE ENTER RED FROM THE SERIAL MONITOR THEN THE READSTRING WILL READ THE GIVEN TEXT CAN STORE IT INTO setColor
  Serial.println(setColor);
  if(setColor == "red\n"){// on serial monitor if we are entering red it is printing red with a newline causing the problem which is debudded 
  analogWrite(redPin,255);// by printing two print statement one after the another
  analogWrite(greenPin,0);
  analogWrite(bluePin,0);
  }
  else if(setColor=="green\n"){
  analogWrite(redPin,0);
  analogWrite(greenPin,255);
  analogWrite(bluePin,0);
  }
  else if(setColor=="blue\n"){
  analogWrite(redPin,0);
  analogWrite(greenPin,0);
  analogWrite(bluePin,255);
  }
  else if(setColor=="orange\n"){
  analogWrite(redPin,255);
  analogWrite(greenPin,165);
  analogWrite(bluePin,0);
  }
  else if(setColor=="magenta\n"){
  analogWrite(redPin,255);
  analogWrite(greenPin,0);
  analogWrite(bluePin,255);
  }
  else if(setColor=="yellow\n"){
  analogWrite(redPin,255);
  analogWrite(greenPin,255);
  analogWrite(bluePin,0);
  }
  else if(setColor=="white\n"){
  analogWrite(redPin,255);
  analogWrite(greenPin,255);
  analogWrite(bluePin,255);
  }
  else if(setColor=="off\n"){
  analogWrite(redPin,0);
  analogWrite(greenPin,0);
  analogWrite(bluePin,0);
  }
  else{
    Serial.println("THE ENTERED COLOUR IS NOT YET ADDED TO THE CODE:");
  }
}
