#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

vector<string> uncommon(string a, string b) {
	map<string,int> m;
	vector<string> sol;
	int last_index=0;
	for (int i=0; i<=a.size(); i++) {
		if(a[i]==' ' || i==a.size()) {
			//cout << a.substr(last_index,i-last_index) << endl;
			m[a.substr(last_index,i-last_index)]++;
			last_index = i+1;
		}
	}
	last_index=0;
	for (int i=0; i<=b.size(); i++) {
		if(b[i]==' ' || i==b.size()) {
			//cout << b.substr(last_index,i-last_index) << endl;
			if(m[b.substr(last_index,i-last_index)] || m[b.substr(last_index,i-last_index)]==-1) {
				m[b.substr(last_index,i-last_index)]=-1;
			}
			else {
				m[b.substr(last_index,i-last_index)]++;
			}
			last_index = i+1;
		}
	}
	for(auto c:m) {
		if (c.second > 0) {
			sol.push_back(c.first);
		}
	}
	return sol;
}

int main() {
	vector<string> s;
	s = uncommon("the quick", "brown fox");
	for(auto c:s) {
		cout << c << endl;
	}
	cout << endl;
	s = uncommon("the tortoise beat the haire", "the tortoise lost to the haire");
	for(auto c:s) {
		cout << c << endl;
	}
	cout << endl;
	s = uncommon("copper coffee pot", "hot coffee pot");
	for(auto c:s) {
		cout << c << endl;
	}
	cout << endl;
}



