#pragma once

#include <sstream>
#include <bitset>
#include "ofxBDFBoundingBox.h"
#include "ofxBDFChar.h"
#include "ofxBDFMetadata.h"
#include "ofMain.h"

class ofxBDF {
protected:

	ofxBDFMetadata metadata;

public:

	vector<ofxBDFChar> chars;

	void setup(string path);
	void draw(int scale);

	ofxBDFMetadata getMetadata() const;

protected:

	enum Declaration {
		STARTFONT,
		FONT,
		SIZE,
		FONTBOUNDINGBOX,
		STARTPROPERTIES,
		FONT_DESCENT,
		FONT_ASCENT,
		DEFAULT_CHAR,
		ENDPROPERTIES,
		CHARS,
		STARTCHAR,
		ENCODING,
		SWIDTH,
		DWIDTH,
		BBX,
		BITMAP,
		ENDCHAR,
		ENDFONT,
		UNKNOWN
	};

	void parseInputFile(ifstream &file);
	vector<string> getTokens(string s);
	unsigned char fromHex(char hex);
	void error(int code, string description);

	Declaration toDeclaration(string const &s);

};

