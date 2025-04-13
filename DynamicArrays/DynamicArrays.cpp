// DynamicArrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <algorithm>
#define Base 1024
#define _1KB(type) new type [Base / sizeof(type)]
#define _1MB(type) new type [Base * Base / sizeof(type)]
#define _1GB(type) new type [Base * Base * Base / sizeof(type)]

using namespace std;

int main()
{
	int a = 7;	// Stack
	int* b = new int(7); // Heap - consist keyword 'new'
	delete b; // Use delete to prevent memory leak

	int* c = nullptr; // Stack

	int arr_a[10]; // Stack
	int* arr_b = new int[10]; // Heap - with square brackets [] means it's array
	delete[] arr_b; // Use this syntaxis to delete an array in heap


	int* numbers = nullptr;

	for (int i = 0; i < 10; i++) {
		numbers = _1MB(int);
		delete[] numbers;	// if you put delete in array you prevent memory leak
	}
	//delete[] numbers;	// if you put delete out of array you get memory leak
	cout << endl;

	vector<int> ints{ 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	fill(ints.begin(), ints.end(), 0);	// Fill vectors with values
	ints.push_back(8);
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < ints.size(); j++) {
			cout << ints[j] << " ";
		}
		cout << endl;
	}

	// Matrix
	vector<vector<int>> matrix;
	int rows = 6;
	int cols = 6;

	while (true)
	{

		for (int i = 0; i < rows; i++) // Initialize matrix with values
		{
			matrix.emplace_back(vector<int>());
			for (int j = 0; j < cols; j++)
			{
				matrix.at(i).push_back(i);
			}
		}

		for (int i = 0; i < matrix.size(); i++) // Print Matrix
		{
			for (int j = 0; j < matrix.at(i).size(); j++)
			{
				cout << matrix.at(i).at(j) << " ";
			}
			cout << endl;
		}

		matrix.clear(); // Prevent memory leak
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
