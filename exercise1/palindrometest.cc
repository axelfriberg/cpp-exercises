#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

bool isPalindrome(string s){
	string old = s;
	reverse(s.begin(),s.end());
	if(s == old){
		return true;
	} else {
		return false;
	}
}

int main(){
	cout << "Write a string to test if it is a palindrome:" << endl;
	string in;
	cin >> in;
	if(isPalindrome(in) == true){
		cout << "It is a palindrome!"<< endl;
	} else {
		cout << "It is not a palindrome."<< endl;
	}
}