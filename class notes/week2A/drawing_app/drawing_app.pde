void setup () {
  size (500,500) ;
}
//draw function


void draw() {
  //ellipse(mouseX, mouseY, 10, 10);
//where is my mouse?
//println(mouseX, mouseY);

//circle drawing mode..
//ellipse (mouseX, mouseY, 30,30);

}

// if the mouse is only clicked and dragged then you get a drawing
void mouseDragged() {
  //line drawing modde...
  line(mouseX, mouseY, pmouseX, pmouseY);
}

//if a key is pressed
void keyPressed() {
  println(key);
  
  // if the key that is pressed is A then 
  if(key == 'a') {
    stroke(254);
    //.. set the stroke weight to 10
   strokeWeight(10);
  }
  
  // if the key that is pressed is S then..
  if(key == 's') {
    stroke(255,0,0);
    //set the stroke weight to 1
   strokeWeight(1);
  
  }
}