// store pong ball coordinates
// everything made before setup are GLOBAL VARIABLES!!

//different shapes
//random fill for ball every collision
//random size for ball every collision
//make the ball bounce from its size
//add a second ball

float x;
float y;
float xSpeed;
float ySpeed;

void setup() {
  size(500, 500);

  //now give them values after you create a window
  x = width/2;
  y = height/2;

  xSpeed = random(2, 5);
  ySpeed = random(2, 5);
}


void draw() {
  background(0);

  //starts at original position then adds 1 everytime
  x = x + xSpeed;
  y = y + ySpeed;
  float red = random(255);
  float green = random(255);
  float blue = random (255);
  //nested functions random values for each value
  fill(red, green, blue);

  //did we hit the right side?
  if (x >= width)
  {
    //collision right
    xSpeed = xSpeed * -1;
  }
  if (x <= 0) {
    //collision left
    xSpeed = xSpeed * -1;
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



  ellipse(x, y, 20, 20);
}