void setup() 
//setup occurs once just to get you started

void draw() {
  //draw happens after set up forever it goes on
  println(abs(mouseX- width/2));
  
  
  background(0);
  ellipse(width/2, height/2, mouseX, mouseX);
}