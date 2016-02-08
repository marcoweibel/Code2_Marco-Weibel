int numCircles;
//declare variable
 
Circle [] myCircle;

//instruction to create new circle

  void setup () {
    numCircles = 200;
    
    myCircle = new Circle[numCircles];
    
    for (int i=0; i<numCircles; i++) {
      myCircle[i] = new Circle(random(400),random(400),random(100));
    }
     
    size (displayWidth,displayHeight);
    smooth ();
     

}
 
 
  void draw () {
   
   
    background (0);
    
    for(int i=0; i<numCircles; i++) {
     
    myCircle[i].checkCollisions ();
     
    myCircle[i].update (); //call the update for the speed of the circle

     
    //call function that belongs to circle
    
    if (mousePressed) {
    myCircle[i].drawCircle();  //this draws up the functions of the circle
    
    }
    else {
     myCircle[i].drawCircle2(); 
    }
    }
     
}
//defining the circle - what its going to be like