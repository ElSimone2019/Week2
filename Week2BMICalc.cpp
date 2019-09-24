// Week2.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <string>

using namespace std;

int main()
{
	//Variables to hold weight, height, input option, and BMI
	string option;
	float weight = 0;
	float height = 0;
	float calcHolding = 0;
	float BMI = 0;

	//If statement to allow for different height inputs
	cout << "To enter your height in Feet & Inches, please type 'feet'\nTo enter your height in Centimeters, please type 'centimeter'\n: ";
	cin >> option;

	if (option == "feet") {
		//Input for Feet
		cout << "Enter your height in feet then inches\n Feet: ";
		cin >> calcHolding;
		
		//Input for Inches
		cout << "Inches: ";
		cin >> calcHolding;

		//Conversion to cm
		height = calcHolding * 12;
		height = height + calcHolding;
		height = height * 0.025;
	}
	else if (option == "centimeter") {
		//Input for centimeters
		cout << "Enter your height in centimeters\n: ";
		cin >> height;
	}
	else {
		cout << "Invalid choice, please restart program";
		return 0;
	}


	//If statement to allow for different weight inputs
	cout << "To enter your weight in pounds, please type 'pound'\nTo enter your weight in kilograms, type 'kilo'\n: ";
	cin >> option;

	if (option == "pound") {
		//Input for pounds
		cout << "Enter your weight in pounds\n: ";
		cin >> calcHolding;

		//Conversion to kilograms
		weight = calcHolding * 0.45;
	}
	else if (option == "kilo") {
		//Input for Kilos
		cout << "Enter your weight in Kilos\n: ";
		cin >> weight;
	}
	else {
		cout << "Invalid option, please restart program";
		return 0;
	}


	//Calculations to find BMI
	calcHolding = height * height;
	BMI = weight / calcHolding;

	if (BMI < 18.5) {
	cout << "You have a BMI of " << BMI << ". This means you are very Underweight.";
	}
	else if (BMI <= 18.5 && BMI > 12) {
		cout << "You have a BMI of " << BMI << ". This means you are Underweight.";
	}
	else if (BMI >= 18.5 && BMI < 25) {
		cout << "You have a BMI of " << BMI << ". This means you are a Healthy Weight.";
	}
	else if (BMI >= 25 && BMI < 30) {
		cout << "You have a BMI of " << BMI << ". This means you are Overweight.";
	}
	else if (BMI >= 30 && BMI < 35) {
		cout << "You have a BMI of " << BMI << ". This means you are Level 1 Obese";
	}
	else if (BMI >= 35 && BMI < 40) {
		cout << "You have a BMI of " << BMI << ". This means you are Level 2 Obese";
	}
	else if (BMI >= 40) {
		cout << "You have a BMI of " << BMI << ". This means you are Level 3 Obese";
	}
	else {
		cout << "Invalid";
		return 0;
	}
}