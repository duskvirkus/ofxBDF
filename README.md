# ofxBDF

Glyph Bitmap Distribution Format (or BDF) parser for [openFrameworks](https://openframeworks.cc/).

Intended to parse BDF files and create bitmap fonts that can then be manipulated further if desired. As `ofDrawBitmapString()` exists this is mainly for using BDF data in alternative ways.

### ⚠️ Warnings

- Has not been fully tested and minimal error checking.
- No initalization for many variables. For example if using a variable in ofxBDFMetadata then if not set by importing bdf file then memeber variables maybe in an unexpected state.
- Doesn't cover all declaration properties in BDF. You should get warnings in the console if lines are not parsed.

## Installing

```bash
cd (into openframeworks/addons)
git clone --recurse-submodules https://github.com/figraham/ofxBDF.git
```

Should now be listed in your addons in project generator. Don't forget to `#include "ofxBDF"` in ofApp.h.

## Usage

```cpp
// in ofApp.h
ofxBDF bdf;

// in ofApp.cpp
bdf.setup("path/to/bdf/file");
```

After running setup on the ofxBDF class with a path, you can use `bdf.draw(int scale)` to draw the characters to display the font and verify that it loaded correctly.

Then you can get ofImages for each characters using `bdf.chars[index].character`.

Check out the code for more features. It's under 500 lines of code so it should be fairly self explanatory.

## Examples

There is one simple example using the [cherry font](https://github.com/turquoise-hexagon/cherry) by turquoise-hexagon. (This is the reason for recursive clone).

Use project generator to import example and setup for your system. Then it should run, file an issue if it doesn't.

## Useful Links

- [BDF.js](https://github.com/victorporof/BDF.js) - A BDF library writen for javascript that has been refrenced heavily when working on this library.
- [bitmap-fonts](https://github.com/Tecate/bitmap-fonts) - A collection of fonts that contain both BDF and PCF types.
- [Cherry Font](https://github.com/turquoise-hexagon/cherry)
- [Wikipedia Article](https://en.wikipedia.org/wiki/Glyph_Bitmap_Distribution_Format)
