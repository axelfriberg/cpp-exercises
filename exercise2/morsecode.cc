#include "morsecode.h"

#include <fstream>
#include <sstream>
#include <vector>
#include <iostream>


using namespace std;

MorseCode::MorseCode() {
	ifstream ifs("morse.def");
	string line;
	while(getline(ifs, line)){
		char k;
		string v;
		istringstream iss(line); 
		iss >> k >> v;
		encMap.insert(pair<char,string>(k, v));
		decMap.insert(pair<string,char>(v, k));
	}
	ifs.close();
}

string MorseCode::encode(const string& text) const {
	string result;	
	for(char ch : text){
		if (ch >= 'a' && ch <= 'z') {
			result += encMap.at(ch) + " ";
		}
	}
	return result;
}

string MorseCode::decode(const string& code) const {
	istringstream iss(code);
	string s;
	string result;
	while (iss >> s) {
		result += decMap.at(s);
	}
	return result;
}
