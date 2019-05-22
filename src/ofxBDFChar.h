#pragma once

#include "ofxBDFBoundingBox.h"
#include "ofMain.h"

class ofxBDFChar {
public:

	string name;
	int code;
	ofxBDFBoundingBox boundingBox;
	ofImage character;

	void draw(int x, int y, int scale);

	string toString() const;

};

ostream& operator<<(ostream& os, const ofxBDFChar& character);
