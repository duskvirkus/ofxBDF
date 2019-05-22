#pragma once

#include "ofxBDFBoundingBox.h"
#include "ofMain.h"

struct ofxBDFMetadata {
public:

	string versionNumber;
	string name;
	int size;
	int xDPI;
	int yDPI;
	int numberOfChars;
	ofxBDFBoundingBox mainBoundingBox;

	string toString() const;

};

ostream& operator<<(ostream& os, const ofxBDFMetadata& metadata);
