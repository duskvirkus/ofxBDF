#include "ofxBDFMetadata.h"

string ofxBDFMetadata::toString() const {
	return "Metadata - version: " + versionNumber +
		" name: " + name +
		" size: " + to_string(size) +
		" xDPI: " + to_string(xDPI) +
		" yDPI: " + to_string(yDPI) +
		" font_descent: " + to_string(fontDescent) + 
		" font_assent: " + to_string(fontAssent) +
		" default_char: " + to_string(defaultChar) +
		" number_of_characters: " + to_string(numberOfChars) +
		" main_bounding_box: " + mainBoundingBox.toString();
}

ostream& operator<<(ostream& os, const ofxBDFMetadata& metadata) {
	os << metadata.toString();
	return os;
}
