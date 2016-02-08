class People{
  
 //variables
 float size;  // sets overall size
 float xPos, yPos;   //sets overall position
 float xSpeed, ySpeed;    // sets speed in x and y
 color c1; //  initulizes colors
 float r1,g1,b1,a1; //
 
 
 
 //constructor
 
 
 People(){
   c1 = color(r1,g1,b1,a1); // initial color of c1
   size = 200;         // sets initial overall size
   xPos = random(width);     // sets initial x position
   yPos = random(height);    // sets initial y position
   xSpeed= 3;     // initial speed
   ySpeed= 3;     // initial speed
 
 }
 
 
 
 
 
 void click(){
 //xPos = mouseX;
 //yPos = mouseY;
     xPos = random(width);
  //xPos = mouseX;
  yPos = random(height);
 
 r1 = random(255);
 g1 = 255;
 b1 = 255;
 a1 = 255;
 }
 
 
 
 void update(){
   
 r1 = 255;
 g1 = 255;
 b1 = 255;
 a1 = 255;
     
  size = 10;
  
   noStroke();
   
  xSpeed= 3;
  ySpeed= 3;
   
   
   fill(c1);
   
   strokeWeight(1);
   stroke(random(255),random(255),random(255));
   line(xPos, yPos, yPos, xPos);
   
  //noStroke();
  //fill(random(255),random(255),random (255),20);
  //rect(random(mouseX), random(mouseY),size*2,size*2);
  
  
  if(mousePressed){
   c1 = color(r1,g1,b1,a1);
   r1 = random(0,255);
   g1 = random(0,255);
   b1 = random(0,255);
   a1 = random(0,255);
}
  
  
  
  
  
   xPos += xSpeed;
   yPos += ySpeed;
   
   
   
   ////to mouse glide  equation
   //xPos = xPos *.95 + mouseX *(.05);
   //yPos = yPos *.95 + mouseY *(.05);
   
      //to mouse glide  equation
   xPos = mouseX ;
   yPos = mouseY ;
   
 }
}