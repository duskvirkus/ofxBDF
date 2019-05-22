#include "ofxBDFChar.h"

void ofxBDFChar::draw(int x, int y, int scale) {
	character.draw(x + (boundingBox.x * scale), y + (boundingBox.y * scale), character.getWidth() * scale, character.getHeight() * scale);
}

string ofxBDFChar::toString() const {
	return "ofxBDFChar - name: " + name +
		" code: " + to_string(code) +
		" bounding_box: " + boundingBox.toString();
}

ostream& operator<<(ostream& os, const ofxBDFChar& character) {
	os << character.toString();
	return os;
}
