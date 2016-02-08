int numFriends; // sets number of objects
People[] friends; //creates class people
void setup(){    // initial code
  size(1800,600); // sets size of screen 
  numFriends = 200; // sets number
  
  friends = new People[numFriends]; 
  
         //forloop to create all objects
        for ( int i=0; i<numFriends; i++){  
            friends[i] = new People();  // calls new object
        } 
        
    }   
    
void draw(){  // loop through
  //frameRate(random(10,45)); // better Framerate: changes every frame
  
  //forllop to call function click to update when mouse pressed
   for ( int i=0; i<numFriends; i++){
       if(mousePressed){
            friends[i].click(); //call function click
       }
          friends[i].update();
      }
        
    }