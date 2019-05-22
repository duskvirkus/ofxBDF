#pragma once

#include "ofMain.h"

struct ofxBDFBoundingBox {
public:
	
	int width;
	int height;
	int x;
	int y;

	string toString() const;
	bool isEqual(const ofxBDFBoundingBox &other) const;

	bool operator==(const ofxBDFBoundingBox &other) const;
	bool operator!=(const ofxBDFBoundingBox &other) const;

};

ostream& operator<<(ostream& os, const ofxBDFBoundingBox& boundingBox);
