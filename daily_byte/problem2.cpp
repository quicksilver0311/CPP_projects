#include <cstdlib>
#include <iterator>
#include <algorithm>
#include <iostream>
#include <map>

using namespace std;

bool isPalindrome(string s) {
	string ss="";
	string temp="";
	for (auto c:s) {
		if(isupper(c))	ss+=('a'+(c-'A'));
		else if(islower(c))	ss+=c;
	}
	temp=ss;
	reverse(ss.begin(),ss.end());
	return (temp==ss);
}

int main() {
	cout << isPalindrome("level") << endl;
	cout << isPalindrome("algorithm") << endl;
	cout << isPalindrome("A man, a plan, a canal: Panama.") << endl;
}
