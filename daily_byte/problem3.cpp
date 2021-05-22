#include <cstdlib>
#include <algorithm>
#include <iostream>
#include <iterator>
#include <map>

using namespace std;

bool BackToStart(string s) {
	map <char,int> pos = {{'L',0},{'R',0},{'U',0},{'D',0}};
	for (auto c:s) {
		pos[c]++;
	}
	return ((pos['L']==pos['R']) && (pos['U']==pos['D']));
}

int main() {
	cout << BackToStart("LR") << endl;
	cout << BackToStart("URURD") << endl;
	cout << BackToStart("RUULLDRD") << endl;
}
