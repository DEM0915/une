#include "ofMain.h"
#include "ofApp.h"

void ofApp::draw(){
    
    ofClear(0);
    ofDrawBitmapString("In remembrance of the present and in hope of the future", 100, 200);

}

int main( ){
    ofSetupOpenGL(809,602,OF_WINDOW);
    ofRunApp(new ofApp());
    
}
