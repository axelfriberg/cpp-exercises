/*
 * MorseCode: translates letters a-z to/from Morse code. The code
 * definitions are in the file morse.def.
 */
#ifndef MORSECODE_H
#define MORSECODE_H

#include <string>
#include <map>

class MorseCode {
public:
	MorseCode();
	std::string encode(const std::string& text) const;
	std::string decode(const std::string& code) const;
private:
	std::map<char,std::string> encMap;
	std::map<std::string,char> decMap;
};

#endif
