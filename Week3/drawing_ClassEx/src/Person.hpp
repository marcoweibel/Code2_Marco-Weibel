//
//  Person.hpp
//  drawing_ClassEx
//
//  Created by Marco Weibel on 2/8/16.
//
//

#ifndef Person_hpp
#define Person_hpp

#include <stdio.h>

#endif /* Person_hpp */

#include "ofMain.h"

class Person {
public:
    //properties
    int height;
    ofColor eyeColor;
    string smell;
    string name;
    //ofColor fur;
    int r,g,b;
    
    //methods
    void walk();
    void sleep();
    void talk();
    void eat();
    void draw(float xPos, float yPos);
    
};
