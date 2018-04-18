/* Sweep
  by BARRAGAN <http://barraganstudio.com>
  This example code is in the public domain.

  modified 8 Nov 2013
  by Scott Fitzgerald
  http://www.arduino.cc/en/Tutorial/Sweep
*/

#include <Servo.h>

Servo myservo;

Servo myservo2;

Servo myservo3;

int pos = 0;    // variable to store the servo position

void setup() {
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
  myservo2.attach(11);
  myservo3.attach(8);

  Serial.begin(9600);
}

void loop() {

  int val = analogRead(1);
  int mappedVal = map(val, 0, 1023, 0, 180);

  int val2 = analogRead(2);
  int mappedVal2 = map(val2, 0, 1023, 0, 180);

   int val3 = analogRead(0);
  int mappedVal3 = map(val3, 0, 1023, 0, 180);



  myservo.write(mappedVal);

  myservo2.write(mappedVal2);

  myservo3.write(mappedVal3);
}




