// Week2.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <string>

using namespace std;

int main()
{
    //Variables to hold the user choices in
	string playerOne = " ";
	string playerTwo = " ";
	
	//Player One Choice
	cout << "Please pick 'Rock', 'Paper', or 'Scissors'";
	cin >> playerOne;

	//Player Two Choice
	cout << "Please pick 'Rock', 'Paper', or 'Scissors'";
	cin >> playerTwo;

	//Choice of Rock Paper Scissors
	if (playerOne == "Rock" && playerTwo == "Rock") {
		cout << "Draw";
	}
	else if (playerOne == "Paper" && playerTwo == "Paper") {
		cout << "Draw";
	}
	else if (playerOne == "Scissors" && playerTwo == "Scissors") {
		cout << "Draw";
	}
}	