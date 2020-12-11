#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0,255,255);

   
    ofSetLogLevel("ofxCsv", OF_LOG_VERBOSE);
    
    
    if(csv.load("MasterlistCSV.csv")) {
       
        for(int i = 100;i <=140; i++) {
            for(int j = 0; j < csv.getNumCols(i); j++) {
            if(j == 5){
            
            resp[k] = ofLoadURL(csv[i][j]);
            cout<<csv[i][j]<<endl;
            	if(img[k].loadImage(resp[k].data))
            		k++;
            }
            cout << endl;
        }
    }
}}

//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::draw(){
int r = 0,c = 0;
for(int i = 0; i < 40; i++) {
img[i].draw(r, c, 160, 150);
r = r+163;
if(163*7 == r){
	r = 0;
	c = c+153;
	}


}
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
