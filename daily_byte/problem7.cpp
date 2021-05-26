#include <cstdlib>
#include <iostream>
#include <string>
#include <iterator>
#include <algorithm>

using namespace std;

bool palindrome (string s) {
	string temp=s;
	reverse(s.begin(),s.end());
	return (temp==s);
}

bool palindromeWithRemoval(string s) {
	for (int i=0; i<s.size(); i++) {
		if(palindrome(s.substr(0,i)+s.substr(i+1))) {
			return true;
		}	
	}
	return false;
}

int main() {
	cout << palindromeWithRemoval("abcba") << endl;
	cout << palindromeWithRemoval("foobof") << endl;
	cout << palindromeWithRemoval("") << endl;
	cout << palindromeWithRemoval("abccab") << endl;
}
