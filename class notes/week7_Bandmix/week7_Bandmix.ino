int speakerPin = 4;

void setup() {
  pinMode(4, OUTPUT);
}

void loop() {
 

  // note one
  for (int i = 1; i < 100; i++) {
    digitalWrite(4, LOW);
    delayMicroseconds(50);

    digitalWrite(4, HIGH);
    delayMicroseconds(50);

  }



  for (int i = 30000; i > 500; i = i - 200) {
    digitalWrite(speakerPin, HIGH);
    delayMicroseconds(i);
    digitalWrite(speakerPin, LOW);
    delayMicroseconds(i);
  }

  for (int i = 0; i < 50; i++) {
    digitalWrite(4, LOW);
    delayMicroseconds(100);

    digitalWrite(4, HIGH);
    delayMicroseconds(100);

  }



}
