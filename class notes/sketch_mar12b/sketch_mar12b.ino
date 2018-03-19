
// produce some sweet sounds
 
void setup() {
  pinMode(4, OUTPUT);
}
 
void loop() {
  // note one
  for (int i = 0; i < 200; i ++) {
    digitalWrite(4, HIGH);
    delayMicroseconds(4000);
 
    digitalWrite(4, LOW);
    delayMicroseconds(10);
  }
 
 
 
  // note two
  for (int i = 0; i < 200; i ++) {
    digitalWrite(4, HIGH);
    delayMicroseconds(5000);
 
    digitalWrite(4, LOW);
    delayMicroseconds(10);
  }
 
}
 


