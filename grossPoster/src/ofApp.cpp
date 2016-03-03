#include "ofApp.h"

using namespace ofxCv;

//--------------------------------------------------------------
void ofApp::setup(){
    
    shader.load("shaders/blend");
    testim.load("testPosterElement.png");
    testmask.load("testtex.jpg");
    
    matIm = toCv(testim);
    matMask = toCv(testmask);
    
    //Mat testresult;
    //bitwise_not(matIm, matIm);
    
    //bitwise_xor(matMask, matIm, testresult);
    //bitwise_
    
    
    
    
    
    //toOf(testresult,drawresult);
    
    //toOf(matMask,drawresult);
    
    //testim.se

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    shader.begin();
    shader.setUniformTexture("blob", testim, 1);
    shader.setUniformTexture("guts", testmask, 2);
    testim.draw(0,0);
    shader.end();
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
