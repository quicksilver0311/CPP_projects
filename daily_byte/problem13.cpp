#include <cstdlib>
#include <iostream>
#include <vector>
#include <string>
#include <iterator>
#include <algorithm>
#include <map>

using namespace std;

vector<int> intersect (vector<int> A, vector<int> B) {
	map <int, int> a;
	vector <int> sol={};
	for (auto c:A) {
		a[c]++;
	}
	for (auto c:B) {
		if(a[c]>0) {
			sol.push_back(c);
		}
	}
	return sol;
}

int main() {
	vector <int> s;
	s = intersect({2, 4, 4, 2},{2, 4});
	for (int i=0; i<s.size(); i++) {
		cout << s[i] << endl;
	}
	s = intersect({1, 2, 3, 3},{3, 3});
	for (int i=0; i<s.size(); i++) {
		cout << s[i] << endl;
	}
	s = intersect({2, 4, 6, 8},{1, 3, 5, 7});
	for (int i=0; i<s.size(); i++) {
		cout << s[i] << endl;
	}
}
