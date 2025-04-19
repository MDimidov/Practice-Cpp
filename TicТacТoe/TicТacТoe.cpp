// TicТacТoe.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<algorithm>

using namespace std;

enum Winner : int {
	PlayerX = 1,
	PLayerO = 2,
	Draw = 3,
};

const int WIN = 3;

// Create char two-dimensional array
char** initializeCharDimArr(int rows, int cols) {
	char** resultArr = new char* [rows];

	for (int i = 0; i < rows; i++) {
		resultArr[i] = new char[cols];
	}

	return resultArr;
}

// Fill char array
void fillArr(char** array, int rows, int cols, char symbol) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols;j++) {
			array[i][j] = symbol;
		}
	}
}

// Fill single element
void fillSingleEl(char** array, int row, int col, char symbol = 'X') {
	array[row][col] = symbol;
}

// Print array
void printArr(char** array, int rows, int cols) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3;j++) {
			cout << array[i][j] << " ";
		}
		cout << endl;
	}
}

bool isRowEqual(char** array, int rows, int cols, char symbol = 'X') {

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			if (array[i][j] != symbol) {
				break;
			}

			if (j == cols - 1) {
				return true;
			}
		}
	}

	return false;
}

bool isColEqual(char** array, int rows, int cols, char symbol = 'X') {

	for (int i = 0; i < cols; i++) {
		for (int j = 0; j < rows; j++) {
			if (array[j][i] != symbol) {
				break;
			}

			if (j == rows - 1) {
				return true;
			}
		}
	}

	return false;
}

bool isDiagonalEqual(char** array, int rows, char symbol = 'X') {

	for (int i = 0; i < rows; i++) {
		char ch = array[i][i];
		if (array[i][i] != symbol) {
			break;
		}

		if (i == rows - 1) {
			return true;
		}
	}

	for (int i = rows - 1; i >= 0; i--) {
		char ch = array[i][rows - 1 - i];
		if (array[i][rows - 1 - i] != symbol) {
			break;
		}

		if (i == 0) {
			return true;
		}
	}

	return false;
}

bool isPsnTaken(char** array, int row, int col, char defaultSymbol) {
	if (array[row][col] != defaultSymbol) {
		return true;
	}

	return false;
}

void printLine() {
	cout << "---------------------------" << endl;
}

int main()
{
	int rows = 3;
	int cols = 3;
	char** ticTacToeField = initializeCharDimArr(rows, cols);
	char defaultSymbol = '*';

	fillArr(ticTacToeField, rows, cols, defaultSymbol);
	//printArr(ticTacToeField, rows, cols);

	int moves = 0;
	int x = -1;
	int y = -1;
	char symbol = 'X';

	cout << "This is Tic Tak Toe" << endl;
	while (true) {
		printLine();
		printArr(ticTacToeField, rows, cols);
		if (moves % 2 == 0) {
			cout << "Please enter position for player X: ";
			symbol = 'X';
		}
		else {
			cout << "Please enter position for player O: ";
			symbol = 'O';
		}

		cin >> x >> y;

		if (x < 0 || x > rows - 1 || y < 0 || y > cols - 1) {
			printLine();
			cout << "Invalid position, try again:" << endl;
			continue;
		}
		else {
			if (isPsnTaken(ticTacToeField, x, y, defaultSymbol)) {
				printLine();
				cout << "This position is already taken. Try again!" << endl;
				continue;
			}
			fillSingleEl(ticTacToeField, x, y, symbol);
			moves++;
		}

		if (moves >= 3) {
			if (isRowEqual(ticTacToeField, rows, cols, symbol) ||
				isColEqual(ticTacToeField, rows, cols, symbol) ||
				isDiagonalEqual(ticTacToeField, rows, symbol))
			{
				printLine();
				cout << "The winner is player " << symbol << " very GoodGame" << endl;
				printLine();
				break;
			}
			else if (moves == 9) {
				printLine();
				cout << "The game is DRAW. Play again!" << endl;
				printLine();
				break;
			}
		}
	}

	printArr(ticTacToeField, rows, cols);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
