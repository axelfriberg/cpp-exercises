/*
 * Class SVector: implementation.
 */

#include "svector.h"

SVector::SVector(size_t size) : n(size), v(new int[n]) {}

SVector::~SVector() {
	delete[] v;
}

SVector::SVector(const SVector& a) : n(a.size()), v(new int[n]){
	for(unsigned int i = 0; i < a.size(); ++i){
		v[i] = a.get(i);
	}
}

SVector& SVector::operator=(const SVector& a){
	if(&a == this){
		return *this;
	} else {
		int nn = a.size();
		int* nv = new int[nn];
		for(int i = 0; i < nn; i++){
			nv[i] = a.get(i);
		}		
		delete[] v;
		n = nn;
		v = nv;
		return *this;
	}	
}

size_t SVector::size() const {
	return n;
}

int SVector::get(size_t i) const {
	return v[i];
}

void SVector::set(size_t i, int value) {
	v[i] = value;
}
