// Description: Radar animation code completely made by chat gpt
import processing.serial.*;

Serial myPort;

int angle = 0;
int distance = 0;

void setup() {
  size(800, 600);
  smooth();
  background(0);

  // COM 3
  myPort = new Serial(this, "COM3", 9600);
  myPort.bufferUntil('\n');
}

void draw() {
  // Slow fading background (keeps detections visible)
  fill(0, 15);
  noStroke();
  rect(0, 0, width, height);

  translate(width/2, height);

  // Radar arcs
  stroke(0, 255, 0);
  noFill();
  for (int r = 100; r <= 400; r += 100) {
    arc(0, 0, r*2, r*2, PI, TWO_PI);
  }

  // Angle guide lines
  for (int a = 0; a <= 180; a += 30) {
    float rad = radians(a);
    line(0, 0, 400*cos(rad), -400*sin(rad));
  }

  // Radar sweep line
  float rad = radians(angle);
  stroke(0, 255, 0);
  strokeWeight(2);
  line(0, 0, 400*cos(rad), -400*sin(rad));

  // Object detection (highly visible)
  if (distance > 5 && distance < 120) {
    float d = map(distance, 0, 120, 0, 400);
    noStroke();
    fill(255, 0, 0, 200);     // bright red
    ellipse(d*cos(rad), -d*sin(rad), 18, 18);
  }
}

void serialEvent(Serial myPort) {
  String data = myPort.readStringUntil('\n');
  if (data != null) {
    data = trim(data);
    String[] values = split(data, ',');
    if (values.length == 2) {
      angle = int(values[0]);
      distance = int(values[1]);
    }
  }
}

