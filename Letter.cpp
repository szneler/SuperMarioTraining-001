#include "Letter.h"

using namespace std;

Letter::Letter(char newCharacter, string newLine1, string newLine2, string newLine3, string newLine4, string newLine5) {
	character = newCharacter;
	line1 = newLine1;
	line2 = newLine2;
	line3 = newLine3;
	line4 = newLine4;
	line5 = newLine5;
}

Letter::~Letter() {
}

char Letter::getCharacter() const {
	return character;
}

string Letter::getLine1() const {
	return line1;
}

string Letter::getLine2() const {
	return line2;
}

string Letter::getLine3() const {
	return line3;
}

string Letter::getLine4() const {
	return line4;
}

string Letter::getLine5() const {
	return line5;
}
