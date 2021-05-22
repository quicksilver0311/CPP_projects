#include <iostream>
#include <cstdlib>
#include <algorithm>
using namespace std;

string reverse1(string s) {
	string reverse="";
	int len = s.length();
	for (int i=len-1; i>=0; i--)
	{
		reverse+=s[i];
	}
	return reverse;
}

string reverse2(string s) {
	reverse(s.begin(),s.end());
	return s;
}

int main(int argv, char** argc) {
	cout << reverse1("Cat") << endl;
	cout << reverse1("The Daily Byte") << endl;
	cout << reverse1("civic") << endl;
	cout << reverse2("Cat") << endl;
	cout << reverse2("The Daily Byte") << endl;
	cout << reverse2("civic") << endl;
	return 0;
}
