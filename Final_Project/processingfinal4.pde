import processing.serial.*;  // import serial library

Serial myPort;  // Create object from Serial class
int val;        // Data received from the serial port
int posZ ;

void setup()
{
  size(500, 500);
  // remember to set your serial port...
  String portName = Serial.list()[0];
  myPort = new Serial(this, portName, 9600);

  // basic drawing properties
  fill(255);
  noStroke();
}

void draw() {
  background(255, 0, 0);
  ellipse(mouseX, mouseY, 40, 40);
  // map the mouse position from 0 -> window width to a range of degrees for the servo
  // the servo can handle 180 degrees, but I think the pointer is better with a limited range
  int posX = int(map(mouseX, 0, width, 0, 180));
  int posY = int(map(mouseY, 0, height, 0, 180));


  myPort.write(posX);  // write x and y vars to serial
  myPort.write(posY);  // for the arduino to read
  myPort.write(posZ);

//  println(posX);
 // println(posY);
  println(posZ);
}

void keyPressed() {
  if (key == 'o') {
    posZ = 0;
  }

  if ( key == 'd')
   posZ = 180;
}