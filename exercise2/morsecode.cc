#include "morsecode.h"

#include <fstream>
#include <sstream>

using namespace std;

MorseCode::MorseCode() {
	ifstream ifs("morse.def");
	string line;
	while(ifs.getLine(line)){
		encMap.put(char c << line, string s << line);
	}
}

string MorseCode::encode(const string& text) const {
	return "";
}

string MorseCode::decode(const string& code) const {
	return "";
}
