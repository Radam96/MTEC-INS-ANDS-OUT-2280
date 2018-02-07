void setup() {
  size(600, 600);
  
  // makes your text center of the screen
  textAlign(CENTER, CENTER);
  textSize(100);
}


void keyPressed() {
  
  background(0);
  //creates a variable of type integer (int)
  //named it coin, and gave it a random value
  //it will be eiter heads or tails 0 or 1
  // because random returns a FLOAT we have to change it to integer
  int coin = int(random(2)); 

  if (coin == 0) {
    
    text("tails", width/2, height/2);
    
  }


    if (coin == 1) {
      text("heads", width/2, height/2);
      
    }
  }
  void draw() {
  }