#include <cstdlib>
#include <iostream>
#include <string>
#include <algorithm>
#include <iterator>
#include <map>

using namespace std;

bool anagram (string s, string t) {
	map <char,int> s1;
	map <char,int> t1;
	if(s.size() != t.size())	return false;
	for (int i=0; i<s.size(); i++) {
		s1[s[i]]++;
		t1[t[i]]++;
	}
	for (int i=0; i<s1.size(); i++) {
		if (s1[i] != t1[i]) {
			return false;
		}
	}
	return true;
}

int main() {
	cout << anagram("cat", "tac") << endl;
	cout << anagram("listen", "silent") << endl;
	cout << anagram("program", "function") << endl;
}
