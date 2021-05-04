#include <stdio.h>
#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
	string userid;
	string password;
	char input;
	map<string, string> db;
	map<string, float> balance;
	cout << "Hi! Welcome to Mr. Shah's ATM Machine!\n\n";
start:
	cout << "Please select an option from the menu below:\n\n";
	cout << "l -> Login\n" << "c -> Create New Account\n" << "q -> Quit\n\n";
	cin >> input;
	switch(input) {
	case 'l': 
		cout << "Please enter your user id: ";
		cin >> userid;
		cout << "Please enter your password: ";
		cin >> password;
		if (db.find(userid) != db.end()) {
			if (db[userid] == password) {
				cout << "Access Granted!\n\n";
				goto ATM;
			}
		}
		cout << "******** LOGIN FAILED! ********\n\n";
		goto start;	
		break;
	case 'c':
		cout << "Please enter your user id: ";
		cin >> userid;
		cout << "Please enter your password: ";
		cin >> password;
		db[userid] = password;
		cout << "Thank You! Your account has been created!\n\n";
		goto start;
		break;
	case 'q':
		cout << "Thanks for stopping by!\n";
		return 0;
		break;
	default:
		cout << "Invalid input. Please try again!\n\n";
		goto start;
		break;
	}
ATM:
	float deposit,withdraw;
	cout << "d -> Deposit Money\n" << "w -> Withdraw Money\n" << "r -> Request Balance\n\n";
	cin >> input;
	switch(input) {
        case 'd':
                cout << "Amount to deposit: $";
                cin >> deposit;
		if (balance.find(userid) != balance.end())
                	balance[userid]+=deposit;
		else 
			balance[userid]=deposit;
		goto ATM;
                break;
        case 'w':
                cout << "Amount of withdrawal: $";
                cin >> withdraw;
                if (balance.find(userid) != balance.end())
                        if (withdraw <= balance[userid])
				balance[userid]-=withdraw;
			else
				cout << "Sorry your account does not have sufficient balance! You can withdraw a maximum of: $" << balance[userid] <<"\n\n";
                else
                        cout << "Sorry your account has 0 balance! Please deposit money first!\n\n";
                goto ATM; 
                break;
        case 'r':
                if (balance.find(userid) != balance.end())
			cout << "Your balance is $" << balance[userid] << "\n\n";
                else
                        cout << "Sorry your account has 0 balance! Please deposit money first!\n\n";
		goto ATM; 
                break;
	case 'q':
		cout << "Thanks for stopping by!\n";
		return 0;
		break; 
	default:
                cout << "Invalid input. Please try again!\n";
                goto ATM;
                break;
        }
	return 0;
}
