#ifndef TEXT_H
#define TEXT_H

#include <string>
#include <vector>
#include "textiterator.h"

class Text {
public:
	//functions such as constructor are synthesised by the compiler
	using iterator = TextIterator;
	iterator begin(){return iterator(&lines,0);}
	iterator end(){return iterator(&lines,lines.size());}
	void addLine(const std::string& line) { lines.push_back(line); }
	
private:
	std::vector<std::string> lines;
};

#endif
