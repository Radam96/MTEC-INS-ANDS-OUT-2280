//how to randomly put on LED lights
int [] ledPin = {3, 4, 5, 6, 7}

ledPin[0] = 3
ledPin[4] = 7

void setup() {

  randomSeed(analogRead(0));
}
  // set all for output
 for(int i = 0; i < 5; i++) {
  pinMode(ledPin[i], OUTPUT);
 }
}

void loop() {
  // loops through and turns LED off
for(int i = 0; i < 5; i++) {
  digitalWrite(ledPin[i], LOW);
}
