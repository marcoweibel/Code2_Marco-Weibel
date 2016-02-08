 class Circle {
     
     float x;
     float y;
      
     float xSpeed;
     float ySpeed;
 
     float circleSize;
      
     //properties of the circle class
      
     //methods of this circle class
     Circle (float  xpos, float ypos, float cSize) {
        
       x = xpos;
       y = ypos;
       circleSize = cSize;
        
       xSpeed = random (-10,10); //create a speed for the circles
       ySpeed = random (-10,10); //adding random changes speed from -10 backwards speed to +10 forwards speed
        
     }
      
     void update () { //update function as another class to the circle
       x += xSpeed;
       y += ySpeed;
        
     }
      
     void checkCollisions () { //check the collisions of the balls with wall
                                 //stops it goin outside box
       if ( (x<0) || (x>width)) {
         xSpeed = -xSpeed;    //if x is less than or bigger than box minus the speed.
       }
     
      if ( (y<0)  || (y>height)) {
         ySpeed = -ySpeed;
      }
     }
   
  void drawCircle () {
    //fill (150, random (255), random (255),random(100,255));
    //ellipse (x,y,circleSize,circleSize);
    
    noFill ();
    stroke(0, random(255), random(255),random(100,200));
    strokeWeight(1);
    rect (x,y,mouseX/10,mouseY/10);

  }
  
    void drawCircle2 () {
    noStroke();
    fill (100, random(255), 100,random(100,255));
    ellipse (x,y,mouseX/10,mouseX/10);
  }
   
}