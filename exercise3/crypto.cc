#include "crypto.h"

#include <string>
#include <random>

using namespace std;

string Crypto::encrypt(const string& text, unsigned int key) {
	string result = text;
	default_random_engine re;
	re.seed(key);
	uniform_int_distribution<int> ud{0,255};
	for(unsigned int i = 0; i < result.size(); i++){		
		result[i] = (result[i] + ud(re)) % 256;
	}
	return result;
}

string Crypto::decrypt(const string& crypt, unsigned int key) {
	string result = crypt;
	default_random_engine re;
	re.seed(key);
	uniform_int_distribution<int> ud{0,255};
	for(unsigned int i = 0; i < result.size(); i++){
		result[i] = (result[i] - ud(re)) % 256;
	}
	return result;
}
