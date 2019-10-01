// Week2.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <string>

using namespace std;

int main()
{
	//Variable to hold gender and age
	string gender;
	int age = 0;

	//input for gender
	cout << "What is your gender (male/female)?\n: ";
	cin >> gender;

	//input for age
	cout << "What is your age?\n: ";
	cin >> age;

	if (gender == "male") {
		cout << "You have " << age - 78 << " years left to work";
	}
	else if (gender == "female") {
		cout << "You have " << age - 78 << " years left to work";
	}
	else {
		cout << "Incorrect input";
	}
}