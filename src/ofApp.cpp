#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    cout << "listening for osc messages on port " << PORT << "\n";
	receiver.setup(PORT);
	ofSetVerticalSync(true);
	
	bSendSerialMessage = false;
	ofBackground(255);
	ofSetLogLevel(OF_LOG_VERBOSE);
		
	serial.listDevices();
	vector <ofSerialDeviceInfo> deviceList = serial.getDeviceList();
	
	int baud = 9600;
	serial.setup(0, baud); //open the first device

	
	nTimesRead = 0;
	nBytesRead = 0;
	readTime = 0;
	memset(bytesReadString, 0, 4);
}

//--------------------------------------------------------------
void ofApp::update(){
	
    // check for waiting messages
//    	while(receiver.hasWaitingMessages()){
//    //		// get the next message
//    		ofxOscMessage m;
//    		receiver.getNextMessage(&m);
//            mouse1X = m.getArgAsInt32(0);
//        }
   
    
    serial.writeByte(mouseX);
    DELAY(5);
    
}

//--------------------------------------------------------------
void ofApp::draw(){

}

//--------------------------------------------------------------
void ofApp::keyPressed  (int key){
	
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
	
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){
	
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
	
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
	bSendSerialMessage = true;
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

