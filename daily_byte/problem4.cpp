#include <cstdlib>
#include <iostream>
#include <iterator>
#include <algorithm>

using namespace std;

bool isCap(string s) {
	if (islower(s[0]) && isupper(s[1]))	return false;
	for (int i=2; i<s.length(); i++) {
		if((isupper(s[1]) && islower(s[i])) || (islower(s[1]) && isupper(s[i])))	return false;
	}
	return true;
}

int main() {
	cout << isCap("USA") << endl;
	cout << isCap("Calvin") << endl;
	cout << isCap("compUter") << endl;
	cout << isCap("coding") << endl;
	cout << isCap("aSSORA") << endl;
	cout << isCap("aSura") << endl;
}

