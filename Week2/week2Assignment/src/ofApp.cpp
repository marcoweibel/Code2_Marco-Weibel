#include "ofApp.h"

void ofApp::diamond(ofPoint center, float length, float width){
    // line 1 (x1, y1, x2, y2)
    ofSetColor(0, 200, 50, 200);
    
    ofDrawLine(center.x - width/2, center.y + length/2, center.x, center.y-length/2);
    ofDrawLine(center.x, center.y-length/2, center.x + width/2, center.y + length/2);
    ofDrawLine(center.x + width/2, center.y + length/2, center.x, center.y+length);
    ofDrawLine(center.x, center.y + length, center.x-width/2, center.y+length/2);
    
    ofSetColor(200, 0, 50, 200);
    ofDrawEllipse(mouseX,mouseY,length,width);
    
}

void ofApp::shapeChange() {
    
    
}



//--------------------------------------------------------------
void ofApp::setup(){
    //ofBackground(255);
}

//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofSetColor(100, 90, 50);
    ofFill();
    ofDrawEllipse(ofGetWidth()/2, ofGetHeight()/2, 100, 300);
    ofDrawLine(0, 0, ofGetWidth(), ofGetHeight());
    
    
    ofPoint bob;
    bob.x = ofGetWidth()/2;
    bob.y = ofGetHeight()/2;
    float length = ofGetHeight()/4;
    float width = ofGetHeight()/4;
    diamond(bob, mouseX, mouseY);
    
    shapeChange();
    
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
void ofApp::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){
    
}