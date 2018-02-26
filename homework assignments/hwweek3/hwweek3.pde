void setup() {
  size(500, 500);

  //now give them values after you create a window
 float x = width/2;
 float y = height/2;

 float xSpeed = random(2, 5);
 float ySpeed = random(2, 5);
}
void draw() {
  background(0);
  
  

//starts at original position then adds 1 everytime
  x = x + xSpeed;
  y = y + ySpeed;
  
   if (x >= width)
  {
    //collision right
    xSpeed = xSpeed * -1;
  }
  if (x <= 0) {
    //collision left
    xSpeed = xSpeed * -1;
  }
  if(x <= 0){
  background(0,255,0);
  }
  if (y >= height) 
  {
    //collision bottom
    ySpeed = ySpeed * -1;
  }
  if (y <= 0) {
    //collision top
    ySpeed = ySpeed * -1;
  }
    if(y <= 0) {
    background(0,0,255);
    }
    
  }



  ellipse(x, y, 20, 20);
}