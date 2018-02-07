void setup (){
  //set the size of the window
  size(649,360);
}

void draw() {
  background(50);
  fill(150);
  stroke(255);
  rectMode(CENTER);
  rect(mouseX,height-mouseY, 100, 50);
}
  