// RockPaperScissor.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
//#include<random>
#include<cstdlib>
#include<conio.h>
using namespace std;

enum Game {
	Rock = 0,
	Paper = 1,
	Scissors = 2,
	WrongInput = 3,
};

void printLine() {
	cout << "----------------------------------------" << endl;
}

void clearScreen() {
	system("cls");
}

int main()
{
	srand(time(0));
	int randNum = -1;
	char key;

	int playerWins = 0;
	int computerWins = 0;

	Game playerChoose;
	Game computerChoose;

	while (true)
	{
		randNum = rand() % 3;
		cout << "Press [R], [P], [S] for [R]ock, [P]aper, [S]cissors. Pres [ESC] for Exit." << endl;
		key = _getch();

		//cout << key << endl;

		cout.clear();

		if ((int)key == 27) {
			printLine();
			cout << "Good game. See you next time!" << endl;
			printLine();
			break;
		}
		else {
			clearScreen();
		}

		switch (key)
		{
		case 'r':
		case 'R':
			playerChoose = Rock;
			cout << "Your choose is Rock." << endl;
			break;
		case 'p':
		case 'P':
			playerChoose = Paper;
			cout << "Your choose is Paper." << endl;
			break;
		case 's':
		case 'S':
			playerChoose = Scissors;
			cout << "Your choose is Scissors." << endl;
			break;
		default:
			playerChoose = WrongInput;
			printLine();
			cout << "You choose wrong input please try again!" << endl;
			printLine();
			continue;
			break;
		}

		computerChoose = (Game)randNum;
		cout << "Computer choose is: " << (computerChoose == Rock ? "Rock" : computerChoose == Paper ? "Paper" : "Scissors") << endl;

		printLine();
		if (playerChoose == computerChoose) {
			cout << "Game is Draw" << endl;
		}
		else if ((playerChoose == Rock && computerChoose == Scissors) ||
			(playerChoose == Paper && computerChoose == Rock) ||
			(playerChoose == Scissors && computerChoose == Paper))
		{
			cout << "The winner is You my friend. Congratulations!" << endl;
			playerWins++;
		}
		else
		{
			cout << "You Loose, Computer wins!" << endl;
			computerWins++;
		}

		printLine();

		cout << "Current result: " << endl;
		cout << "Player wins: " << playerWins << endl;
		cout << "Computer wins: " << computerWins << endl;

		printLine();
		cout << endl;

	}
}
