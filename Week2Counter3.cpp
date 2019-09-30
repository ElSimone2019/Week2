// Week2.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <string>

using namespace std;

int main()
{
	//Counter variable + looping variable
	int counter = 3;
	int loopAmount = 0;

	//While loop
	while (counter < 31) {
		if (counter == 9 || counter == 15) {
			cout << "";
		}
		else {
			cout << counter << ", ";
		}
		counter = counter + 3;
		loopAmount = loopAmount + 1;
	}

	//Output loop amount
	cout << "\nThe program has looped " << loopAmount << " times.\n";
}