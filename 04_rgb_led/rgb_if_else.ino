// CONCEPT CODE: learning the use of if-else for specific color in the rgb led 
int redPin=9;
int greenPin=10;
int bluePin=11;
String setColor;

void setup() {
  // put your setup code here, to run once:
  pinMode(redPin,OUTPUT);
  pinMode(greenPin,OUTPUT);
  pinMode(bluePin,OUTPUT);

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  

  setColor=Serial.readString();// setColr="red"as an example that to be enterd on serial monitor
  
  if(setColor=="red"){
  analogWrite(redPin,255);
  analogWrite(greenPin,0);
  analogWrite(bluePin,0);

  }
  
}