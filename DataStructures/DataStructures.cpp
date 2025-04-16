// DataStructures.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
#include<list>
using namespace std;

int main()
{
	// Vectors
	{
		vector<string> cars = { "Bentley", "Bugatti", "Porsche" };

		cout << "------Vectors-------" << endl;
		cout << "First element: " << cars.front() << endl;
		cout << "Last element: " << cars.back() << endl;
		cout << "[1] element: " << cars.at(1) << endl;
		//cout << "Throw element: " << cars.at(12) << endl;

		cars.push_back("Tesla");    // Push element into vector 
		cars.push_back("Tesla");    // Push element into vector 

		for (string car : cars) {
			cout << "Car brand: " << car << endl;
		}
		cars.pop_back();            // Remove last element from vector
		cars.pop_back();            // Remove last element from vector
		cars.pop_back();            // Remove last element from vector

		cout << "Vector size: " << cars.size() << endl; // Check vector size/length

		if (cars.empty())       // Check if the vector is empty
		{
			cout << "The vector is empty" << endl;
		}
		else
		{
			cout << "The vector is not empty" << endl;
		}

		for (int i = 0; i < cars.size(); i++) {
			cout << "Car brand: " << cars.at(i) << endl;
		}

		cout << endl;
		cout << "------Lists-------" << endl;
	}

	// Lists
	{
		list<string> cars = { "Bentley", "Bugatti", "Porsche" };

		cout << "First car: " << cars.front() << endl;
		cout << "Last car: " << cars.back() << endl;

		cars.front() = "Lamborghini";
		cars.back() = "Tesla";

		cars.push_front("Bentley");
		cars.push_back("Porsche");

		cars.pop_front();
		cars.pop_back();

		for (string car : cars) {
			cout << "Car brand: " << car << endl;
		}

		cout << "Size of list: " << cars.size() << endl;

		if (cars.empty()) {
			cout << "No cars at the list!" << endl;
		}
		else {
			cout << cars.size() << " cars at the list!" << endl;
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
