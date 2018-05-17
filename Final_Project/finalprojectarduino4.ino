#include <Servo.h>

Servo servoX;  // create servo object to control an X axis servo
Servo servoY;// and for Y
Servo servoZ;


// (a maximum of eight servo objects can be created!)

int servoXPin = 10;  // what pins are our servos connected to?
int servoYPin = 11;
int servoZPin = 9;

int posX = 180;    // variable to store the servo position
int posY = 90;// variable to store the other servo position
int posZ = 180;
const int analogInPin = A0;
int sensorValue = 0;

void setup() {
  Serial.begin(9600);  // we're gonna use serial comm.

  // "attach" servos
  servoY.attach(servoYPin);  // attaches the servo on pin 10 to the servo object
  servoX.attach(servoXPin);// attaches the servo on pin 11 to the servo object
  servoZ.attach(servoZPin);

  pinMode(8, OUTPUT);
}

void loop() {

  sensorValue = analogRead(analogInPin);
  sensorValue = map(sensorValue, 0, 1023, 180, 0);
  //   see if there is available serial data
  if (Serial.available() > 2) {

    // read the incoming bytes
    posX = Serial.read();
    posY = Serial.read();
    posZ = Serial.read();
  }


  servoX.write(posX);
  servoY.write(posY);
  //servoZ.write(posZ);

  //if (sensorValue <= 20) {
    servoZ.write(sensorValue);
 

  Serial.println(sensorValue);
  if (posZ == 0)
    digitalWrite(8, HIGH);
  //delay(1000);
  if (posZ == 180)
    digitalWrite(8, LOW);
  //delay(1000);
}
