void setup() {
 size(600,600);
 
 noStroke();
 background(0);
 
}

void draw() {
  
  //to create a variable you have to give it a
  //TYPE, a NAME, and a VALUE
  float x = random(width);
  float y = random(height);
  
  //pritln(x);
  
  //we set values for each color so we dont have to type random 255 all the time
  float red = random(255);
  float green = random(255);
  float blue = random (255);
  //nested functions random values for each value
  fill(red, green, blue);
  
  //draw the ellipse using variables as its starting point
  
  ellipse(x, y,20, 20);
  
  //drew a square for our circle
  rect(x - 10, y + 10, 20, 20); 
}