#include <cstdlib>
#include <iostream>
#include <iterator>
#include <map>
#include <algorithm>
#include <vector>

using namespace std;

bool twosum(vector <int> A, int sum) {
	map <int,int> a;
	for (auto n:A) {
		//cout << n << endl;
		if(a[sum-n]) {
			//cout << n << " " << a[sum-n] << endl;
			return true;
		}
		a[n] = sum-n;
	}
	return false;
}

pair<int,int> twosumV(vector <int> A, int sum) {
	map <int,int> a;
	for (int i=0; i<A.size(); i++) {
		//cout << i << " " << A[i] << endl;
		if(a[sum-A[i]]) {
			//cout << i << " " << a[sum-A[i]] << endl;
			return {a[sum-A[i]],i};
		}
		a[A[i]] = i;
	}
	return {0,0};
}

int main() {
	pair <int,int> f;
	cout << twosum({1,3,8,2},10) << endl;
	cout << twosum({3,9,13,7},8) << endl;
	cout << twosum({4,2,6,5,2},4) << endl;
	f = twosumV({1,3,8,2},10);
	cout << f.first << " " << f.second << endl;
	f = twosumV({3,9,13,7},8);
	cout << f.first << " " << f.second << endl;
	f = twosumV({4,2,6,5,2},4);
	cout << f.first << " " << f.second << endl;
}

