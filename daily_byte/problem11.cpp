#include <cstdlib>
#include <iostream>
#include <string>
#include <map>
#include <iterator>
#include <algorithm>

using namespace std;

int uniquechar(string s) {
	map <char,int> m;
	for (auto c:s) {
		m[c]++;
	}
	for (int i=0; i<s.size(); i++) {
		if(m[s[i]]==1) {
			return i;
		}
	}
	return -1;
}

int main() {
	cout << uniquechar("abcabd") << endl;
	cout << uniquechar("thedailtbyte") << endl;
	cout << uniquechar("developer") << endl;
	cout << uniquechar("aaaa") << endl;	
}
