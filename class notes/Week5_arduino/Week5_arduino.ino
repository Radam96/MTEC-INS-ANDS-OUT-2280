//variable to make athe blinking slow
int blinkDelay = 0;

void setup() {
  //sets a digital pin 
  //blinking LED
pinMode(8, OUTPUT);
}

void loop() {

 blinkDelay +=10;
//turns the LED on
digitalWrite(8,HIGH);

delay(blinkDelay); // waits 1 second

//turns LED off
digitalWrite(8, LOW);

delay(blinkDelay); // wait one second

}
