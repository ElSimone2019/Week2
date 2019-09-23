// Week2.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <string>

using namespace std;

int main()
{
	//Variables to hold salary and tax
	float salary = 0; 
	float tax = 0;

	//Input for Salary
	cout << "What is your yearly salary: ";
	cin >> salary;

	//If statement to work out tax boundaries
	if (salary <= 40000) {
		tax = salary * 0.2;
	}
	else if (salary > 40000) {
		tax = salary * 0.3;
	}

	//Output the total tax
	cout << "You need to pay " << tax << " in tax"
}