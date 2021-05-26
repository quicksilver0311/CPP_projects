#include <cstdlib>
#include <iostream>
#include <vector>
#include <string>
#include <iterator>
#include <algorithm>
#include <map>

using namespace std;

int stonesjewels(string j, string s) {
	map <char,int> c;
	int total=0;
	for (auto st:s) {
		c[st]+=1;
	}
	for (auto jw:j) {
		total+=c[jw];
	}
	return total;
}

int main() {
	cout << stonesjewels("abc","ac") << endl;
	cout << stonesjewels("Af","AaaddfFf") << endl;
	cout << stonesjewels("AYOPD","ayopd") << endl;
}
