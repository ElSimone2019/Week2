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
	cout << "Player One, please pick 'Rock', 'Paper', or 'Scissors': ";
	cin >> playerOne;
	system("CLS");

	//Player Two Choice
	cout << "Player Two, please pick 'Rock', 'Paper', or 'Scissors': ";
	cin >> playerTwo;
	system("CLS");

	//Choice of Rock Paper Scissors//

	//Draws
	if (playerOne == "Rock" && playerTwo == "Rock") {
		cout << "Draw";
	}
	else if (playerOne == "Paper" && playerTwo == "Paper") {
		cout << "Draw";
	}
	else if (playerOne == "Scissors" && playerTwo == "Scissors") {
		cout << "Draw";
	}

	//Player One Wins
	else if (playerOne == "Rock" && playerTwo == "Scissors") {
		cout << "Player One Wins";
	}
	else if (playerOne == "Paper" && playerTwo == "Rock") {
		cout << "Player One Wins";
	}
	else if (playerOne == "Scissors" && playerTwo == "Paper") {
		cout << "Player One Wins";
	}

	//Player Two Wins
	else if (playerOne == "Scissors" && playerTwo == "Rock") {
		cout << "Player Two Wins";
	}
	else if (playerOne == "Rock" && playerTwo == "Paper") {
		cout << "Player Two Wins";
	}
	else if (playerOne == "Paper" && playerTwo == "Scissors") {
		cout << "Player Two Wins";
	}

	else {
		cout << " ";
	}
}	