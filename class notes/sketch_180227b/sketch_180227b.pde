
void setup() {
  size(500,500);
  background(255);
  strokeWeight(8);
  frameRate(1);
}
void draw() {



  for(int rectX = 0; rectX< width; rectX+= random(width/3, 2*(width/3))) {
    for(int rectY=0; rectY< height; rectY+=random(height/3, 2*(height/3))) {
      rect(rectX, rectY, random(width/3, 2*(width/3)), random(height/3, 2*(height/3)));
    }
  }
}  
void mousePressed() {
  background(255);
  if (mouseButton == RIGHT) {
    noLoop();
  }
}