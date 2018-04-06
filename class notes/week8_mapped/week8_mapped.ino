void setup() {
 //dont need to establish pinMode
 //when using analog pins

 //console logging
 Serial.begin(9600);
 //put your setup code here
 pinMode(8, OUTPUT); // set up speaker pin
}

void loop() {
  //query the analog pin 0 for values
  //that runs from 0- 1-23 
  // or 0 to 5volts
  int val = analogRead(0);

  //the map function takes 5 values
  // the value you want to map
  //input min
  //input max
//output min
// output max
  int mappedVal = map(val, 0, 1023, 1, 10);

  mappedVal *= 1000;

// writing a pin high, low 
 // digitalWrite(8, HIGH);
//  delayMicroseconds(val + 1);
// digitalWrite(8,LOW);
// delayMicroseconds(val + 1);


// print out useful info 
//  Serial.print(mappedVal);
//  Serial.print(", ");
//  Serial.println(val);
  // + means putting two values next to each other
  //delay(20);
}
