#include <cstdlib>
#include <string>
#include <iostream>
#include <iterator>
#include <algorithm>
#include <map>

using namespace std;

char diff (string s, string t) {
	map <char,int> m;
	char sol = ' ';
	int count=0;
	if((t.size()<s.size()) && (t.size()>s.size()+1))	return sol;
	for (auto c:t)
		m[c]++;
	for (auto c:s) {
		if(m[c])	m[c]--;
		else	return sol;
	}
	for(auto c:t) {
		if (m[c] > 0) {
			return c;
		}
	}
	return sol;
}

int main() {
	cout << diff("foobar", "barfoot") << endl;
	cout << diff("ide", "idea") << endl;
	cout << diff("coding", "ingcod") << endl;
}
