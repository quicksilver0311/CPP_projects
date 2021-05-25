#include <iostream>
#include <cstdlib>
#include <string>
#include <algorithm>
#include <iterator>
#include <vector>

using namespace std;

struct compare {
	inline bool operator()(const string& a, const string& b) {
		return (a.size()<b.size());
	}
};

string prefix(vector<string> A) {
	compare c;
	string sol="";
	sort(A.begin(),A.end(),c);
	for(int i=A[0].size()-1; i>=0; i++) {
		for(int j=1; j<A.size(); j++) {
			if(A[j].substr(0,i) != A[0].substr(0,i)) {
				return sol;
			}
		}
		sol=A[0].substr(0,i);
	}
	return sol;
}

int main() {
	cout << prefix({"colorado", "color", "cold"}) << endl;
	cout << prefix({"a", "b", "c"}) << endl;
	cout << prefix({"spot", "spotty", "spotted"}) << endl;
}
