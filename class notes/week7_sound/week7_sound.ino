
// produce some sweet sounds

void setup() {
  pinMode(4, OUTPUT);
}

void loop() {
  // note one
  for (int i = 5000; i < 1000; i ++) {
    digitalWrite(4, HIGH);
    delayMicroseconds(100);

    digitalWrite(4, LOW);
    delayMicroseconds(100);
  }



  // note two
  for (int i = 5000; i < 1000; i ++) {
    digitalWrite(4, HIGH);
    delayMicroseconds(100);

    digitalWrite(4, LOW);
    delayMicroseconds(100);
  }

}



