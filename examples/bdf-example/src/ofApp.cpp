#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	bdf.setup("../cherry/cherry-13-r.bdf");

	cout << bdf.getMetadata() << endl;
	for (int i = 0; i < bdf.chars.size(); i++) {
		cout << bdf.chars[i] << endl;
	}
}

//--------------------------------------------------------------
void ofApp::draw(){
	bdf.draw(1);
}
