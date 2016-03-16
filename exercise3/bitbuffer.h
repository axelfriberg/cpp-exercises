#ifndef BIT_BUFFER_H
#define BIT_BUFFER_H

#include <iostream>
#include <vector>


class BitBuffer {
public:
	BitBuffer(std::ostream& out);
	void put(bool b);
private:
	std::ostream& os;
	std::vector<bool> buffer;
};

#endif
