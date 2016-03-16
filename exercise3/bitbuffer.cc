#include "bitbuffer.h"

#include <iostream>

BitBuffer::BitBuffer(std::ostream& out) : os(out){}

void BitBuffer::put(bool b) {
	buffer.push_back(b);

	if(buffer.size() == 8){
		unsigned char c;
		for(unsigned int i = 0; i < buffer.size(); i++){
			if(buffer[i]){
				switch (i) {
				  case 0: c += 128;
				  		  break;				 
				  case 1: c += 64;
				  		  break;
				  case 2: c += 32;
				  		  break;				 
				  case 3: c += 16;
				  		  break;	
		  		  case 4: c += 8;
		  		  		break;	
		  		  case 5: c += 4;
		  		  		break;	
		  		  case 6: c += 2;
		  		  		break;
		  		  case 7: c += 1;
		  		  		break;					  
				  default:
				    c += 0;
				 }	
			}
		}
		os.put(c);
		buffer.clear();
	}
}
