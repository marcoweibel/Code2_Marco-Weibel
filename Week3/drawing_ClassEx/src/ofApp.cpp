#include "ofApp.h"


void ofApp::drawWord(string word) {
    ofDrawBitmapString(word, ofGetWidth()/2-20, ofGetHeight()/2);
}
//--------------------------------------------------------------
void ofApp::setup(){
//    phrase = "Hello World";
//    position.x = ofGetWidth()/2;
//    position.y = ofGetHeight()/2;
    
    Marco.smell = "good";
    Marco.height = 30;
    Marco.name = "misch";
    Joe.height = 50;
    
    Marco.r = 200;
    Marco.b = 0;
    Marco.g =0;
    
    Joe.r = 200;
    Joe.b = 0;
    Joe.g =200;

}

//--------------------------------------------------------------
void ofApp::update(){
    cout << "Marco's Smell: " << Marco.smell << endl;
    cout << "Marco's Height: " << Marco.height << endl;
    cout << "Marco's Nickname: " << Marco.name << endl;

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofBackground(0);
    ofSetColor(255,0,0);
    //ofDrawBitmapString("Hello World",ofGetWidth()/2,ofGetHeight()/2);
    //ofDrawBitmapString(phrase,position);
//    drawWord(phrase);
    
    Marco.draw(ofGetWidth()/2,ofGetHeight()/2);
    Joe.draw(ofGetWidth()/2 -2*Joe.height, ofGetHeight()/2);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
