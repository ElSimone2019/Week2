// Week2.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <string>

using namespace std;

int main()
{
	//Variable to hold the counter
	int counter = 50;

	//While loop to count to 20
	while (counter >= 0) {
		cout << counter << ", ";
		counter = counter - 1;
	}
}