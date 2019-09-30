// Week2.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <string>

using namespace std;

int main()
{
	//Variables to hold Age, Engine Size, Pass Plus, Insurance
	int age = 0;
	float engineSize = 0;
	string passPlus;
	int insurance = 0;

	//Input for age
	cout << "What is your age?\n: ";
	cin >> age;

	//Input for Engine Size
	cout << "What size engine does your car have?\n: ";
	cin >> engineSize;

	//Input for Pass Plus
	cout << "Did you pass Pass Plus?\n: ";
	cin >> passPlus;

	//If statement to check age
	if (age > 18 && age < 25) {
		insurance = insurance + 500;
	}
	else if (age >= 25) {
		insurance = insurance + 250;
	}
	else {
		cout << "You are too young to apply!";
		return 0;
	}

	//If statement to check engine size
	if (engineSize > 0 && engineSize < 2) {
		insurance = insurance + 100;
	}
	else if (engineSize >= 2) {
		insurance = insurance + 300;
	}
	else {
		cout << "You cannot have an engine smaller than 0";
		return 0;
	}

	//If statement to check if they passed Pass Plus
	if (passPlus == "yes") {
		insurance = insurance - 100;
	}
	else if (passPlus == "no") {
		insurance = insurance;
	}

	//Output insurance cost
	cout << "Your insurance will cost " << insurance << " pounds.";
}