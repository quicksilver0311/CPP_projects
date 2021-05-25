#include <cstdlib>
#include <iostream>
#include <iterator>
#include <algorithm>
#include <bitset>

using namespace std;

string binarySum1(string a, string b) {
	int num1 = stoi(a,NULL,2);
	int num2 = stoi(b,NULL,2);
	string sol = bitset<32>(num1+num2).to_string();
	int indx = sol.find("1");
	//cout << num1 << " " << num2 << endl;
	if(indx != string::npos)	return sol.substr(indx);
	return "0";
}

string binarySum2(string a, string b) {
	int sum=0;
	int i=a.size()-1;
	int j=b.size()-1;
	string sol="";
	while(i>=0 || j>=0 || sum==1) {
		sum+=((i>=0)?a[i]-'0':0);
		sum+=((j>=0)?b[j]-'0':0);
		sol = char(sum%2+'0') + sol;

		sum = sum/2;
		i--;j--;
	}
	return sol;
}

int main() {
	cout << binarySum2("100","1") << endl;
	cout << binarySum2("11","1") << endl;
	cout << binarySum2("1","0") << endl;
	return 0; 
}

