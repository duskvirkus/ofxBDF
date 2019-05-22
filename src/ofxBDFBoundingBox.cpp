#include "ofxBDFBoundingBox.h"

string ofxBDFBoundingBox::toString() const {
	return "BoudningBox - w: " + to_string(width) + " h: " + to_string(height) + " x: " + to_string(x) + " y: " + to_string(y);
}

bool ofxBDFBoundingBox::isEqual(const ofxBDFBoundingBox &other) const {
	return width == other.width &&
		height == other.height &&
		x == other.x &&
		y == other.y;
}

bool ofxBDFBoundingBox::operator==(const ofxBDFBoundingBox &other) const {
	return isEqual(other);
}

bool ofxBDFBoundingBox::operator!=(const ofxBDFBoundingBox &other) const {
	return !isEqual(other);
}

ostream& operator<<(ostream& os, const ofxBDFBoundingBox& boundingBox) {
	os << boundingBox.toString();
	return os;
}
