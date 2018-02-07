//the size function creates a window
//that is width, height pixels big
size(500, 500);

//set the background color of the window
background(0,200,50);

//dont put an outline on the following shape/s
noStroke();


fill(255,0,0);

//the rect function creates a rectangle that is drawn
//from the upper left corner. The parameters are
//x, y, width, height
rect(40,40,60,60);

// the fill comand adds color to your object
fill(12,120,200);
stroke(255,255,255);

//the thickness of a stroke/outline
strokeWeight(5);
rect(70,70,60,60);


ellipse(222,222,100,100);

//draw the line from x1,y1,x2,y2
//width returns
//height is height of size
line(0, height, width,0);