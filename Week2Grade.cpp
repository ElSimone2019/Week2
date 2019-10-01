// Week2.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <string>

using namespace std;

int main()
{
	//Variable to hold the grade
	float grade = 0;

	//Input to get result
	cout << "What is your grade?\n: ";
	cin >> grade;

	//If statement to output result
	if (grade >= 0 && grade < 40) {
		cout << "Fail";
	}
	else if (grade >= 40 && grade < 60) {
		cout << "Pass";
	}
	else if (grade >= 60 && grade < 70) {
		cout << "Merit";
	}
	else if (grade >= 70 && grade <= 100) {
		cout << "Distinction";
	}
	else {
		cout << "Grade cannot be less than 0 or more than 100";
	}
}