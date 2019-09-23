// Week2.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <string>

using namespace std;

int main() 
{
	//Variables to hold the driver age, car value, insurance premium
	int driverAge = 0;
	int carValue = 0;
	float insurance = 0;

	//Inputs for driver age and car value
	cout << "Enter the drivers age: ";
	cin >> driverAge;

	cout << "Enter the cars value: ";
	cin >> carValue;

	//If statement to find insurance premium
	if (driverAge >= 18 && driverAge < 20) {
		if (carValue >= 10000) {
			insurance = 700;
		}
		else {
			insurance = 600;
		}
	}
	else if (driverAge >= 20 && driverAge < 25) {
		if (carValue >= 10000) {
			insurance = 500;
		}
		else {
			insurance = 400;
		}
	}
	else if (driverAge >= 25) {
		if (carValue >= 10000) {
			insurance = 300;
		}
		else {
			insurance = 200;
		}
	}
	else {
		cout << "You are too young to drive";
	}

	//Output the insurance premium
	cout << "The insurance will cost " << insurance;
}