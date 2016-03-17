#ifndef AV_H
#define AV_H

#include <utility>
#include <vector>

template<typename Key, typename T>
class AV {
public:
	using key_type = Key;
	using mapped_type = T;
	using value_type = std::pair<Key, T>;
	
	AV() {}
	std::pair<iterator, bool> insert(const value_type& val);
private:
	std::vector<value_type > v;
};

template<typename Key, typename T>
std::pair<typename AV<Key, T>::iterator, bool>
AV<Key, T>::insert(const value_type& val) {
	
}

#endif