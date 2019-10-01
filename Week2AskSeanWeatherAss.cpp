// Week2.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <string>

using namespace std;

int main()
{
	//Variables for weather input
	string weather;
	string option;

	//Input for weather
	cout << "Welcome to Ask Sean, the Number 1 Weather Assistant for the UK!\nWhat is the weather like today?\n: ";
	cin >> weather;


	if (weather != "rainy") {
		//Input for comedic purpose
		cout << "\nDid you mean: 'rainy' ? (yes/no): ";
		cin >> option;

		//If statement to check option
		if (option == "no") {
			cout << "\nWeather is often Dissapointing...\n";
		}
		else if (option == "yes") {
			cout << "\nIts Always Rainy in Seanville\n\n\n";
			return 0;
		}
		else {
			cout << "\nInvalid response, response must be 'yes'\n";
			return 0;
		}
	}


	if (weather == "sunny") {
		cout << "\nDont wear too much, stay hydrated and put on suncream!\n";
	}
	else if (weather == "cloudy") {
		cout << "\nTake a coat just in case!\n";
	}
	else if (weather == "rainy") {
		cout << "\nTake steriods to grow taller so you can stay above the water and not drown while everyone shorter than you meets an untimely death!!!!\n\n\n\n";
	}
	else {
		cout << "\nInvalid Response, you should have typed 'rainy'\n\n";
	}


}