// LoopsAndArrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	// For loop
	int num = 5;
	for (int i = 0; i <= 5; i++) {
		if (i > 3) {
			cout << endl;
			break;
		}

		cout << i << " ";

		if (i == num) {
			cout << endl;
		}
	}


	// Foreach loop
	int myNums[] = { 10, 20, 30, 40, 50, 56, 34 };
	for (int i : myNums) {
		if (i == 40) {
			continue;
		}

		cout << i << " ";
	}
	cout << endl;


	// Arrays
	string strs[] = { "test", "test2", "test3" };
	strs[2] = "Pesjo";
	cout << strs[2] << endl;

	for (string str : strs) {
		cout << str << " ";
	}
	cout << endl;

	int arr[5];

	for (int i = 1; i <= sizeof(arr) / sizeof(arr[0]); i++) {
		arr[i - 1] = i;
	}

	for (int x : arr) {
		cout << x << " ";
	}
	cout << endl;


	// Multidimensional arrays
	string multiArr[2][2] = {
		{"D", "A"},
		{"B", "C"}
	};

	for (int i = 0; i < sizeof(multiArr[0]) / sizeof(multiArr[0][0]); i++) 
	{
		for (int j = 0; j < sizeof(multiArr[1]) / sizeof(multiArr[1][0]); j++) 
		{
			cout << multiArr[i][j] << " ";
		}
	}

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
