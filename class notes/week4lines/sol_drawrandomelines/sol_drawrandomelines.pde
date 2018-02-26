size(500,500);
//start i at 0 until its more than 10,000
//draw random line and increase by 1
for(int i =0; i < 100; i++){
  float x1 = random(width);
  float y1 = random(height);
  
  float x2 = x1 +10;
  float y2 = y1 + 10;
  
  //anytime you rotate use pushmatrix
  pushMatrix();
  //define a new origin point
  translate(x1,y1);
  rotate(random(TWO_PI));
  
  line(0,0,10,10);
  popMatrix();
}