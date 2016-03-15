#include "editor.h"

#include <string>

using namespace std;

string::size_type Editor::find_left_par(string::size_type pos) const {
	char r_par = text[pos];	
	char l_par;
	switch (r_par) {
		case ')' : l_par = '('; break;
		case ']' : l_par = '['; break;
		case '}' : l_par = '{'; break;
		default  : return string::npos;
	}
	int level = 0;
	bool found = false;
	string::size_type i = pos - 1;
	while (i != string::npos && !found) {
		char ch = text[i];
		if (ch == l_par && level == 0) {
			found = true;
		} else {
			if (ch == r_par) {
				++level;
			} else if (ch == l_par) {
				--level;
			}
			--i;
		}
	}
	return i;

	
}
