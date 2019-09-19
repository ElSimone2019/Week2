// Week2.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <string>

using namespace std;

int main()
{
	//Variable to hold balance
	float bal = 0;

	//Input to get users bank balance
	cout << "What is your bank balance: ";
	cin >> bal;

	//If statement to show bank balance analysis
	if (bal < 0) {
		cout << "You have a negative bank balance";
	}
	else if (bal > 0) {
		cout << "You have a positive bank balance";
	}
	else if (bal == 0) {
		cout << "You have a neutral bank balance";
	}
}