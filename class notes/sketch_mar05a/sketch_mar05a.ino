int led1Pin = 5;
int led2Pin = 6;
int led3Pin = 7;
int led4Pin = 8;
int led5Pin = 9;

int ledPin[] = {5, 6, 7, 8, 9};

void setup() {
 //set all LEDpins to output mode
 for(int i = 0; i < 5; i++){
 }
}

void loop() {
  
  digitalWrite(led1Pin, HIGH);
  digitalWrite(led2Pin, LOW);
  digitalWrite(led3Pin, LOW);
  digitalWrite(led4Pin, LOW);
  digitalWrite(led5Pin, LOW);

  delay(150);  
  digitalWrite(led1Pin, LOW);
  digitalWrite(led2Pin, HIGH);
  digitalWrite(led3Pin, LOW);
  digitalWrite(led4Pin, LOW);
  digitalWrite(led5Pin, LOW);

 delay(150);
 digitalWrite(led1Pin, LOW);
  digitalWrite(led2Pin, LOW);
  digitalWrite(led3Pin, HIGH);
  digitalWrite(led4Pin, LOW);
  digitalWrite(led5Pin, LOW);


  delay(150);  
  digitalWrite(led1Pin, LOW);
  digitalWrite(led2Pin, LOW);
  digitalWrite(led3Pin, LOW);
  digitalWrite(led4Pin, HIGH);
  digitalWrite(led5Pin, LOW);

 delay(150);
digitalWrite(led1Pin, LOW);
  digitalWrite(led2Pin, LOW);
  digitalWrite(led3Pin, LOW);
  digitalWrite(led4Pin, LOW);
  digitalWrite(led5Pin, HIGH);


  

  delay(150);  
}


