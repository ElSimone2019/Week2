// Week2.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <string>

using namespace std;

int main()
{
	//Variable to hold the counter
	int counter = 2;

	//While loop to count to 20
	while (counter < 21) {
		if (counter != 10) {
			cout << counter << ", ";
		}
		counter = counter + 2;
	}
}