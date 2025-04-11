// Structures.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

struct car {
	string brand;
	string model;
	int year = 0;
};

enum Level {
	LOW = 5,
	MEDIUM = 4,
	HIGH,			// This is equal to previus (MEDIUM) + 1
};


int main()
{
	// Create a car structures
	car car1;
	car1.brand = "WV";
	car1.model = "Golf 4";
	car1.year = 2005;

	car car2;
	car2.brand = "BMW";
	car2.model = "E63";
	car2.year = 2004;


	// Print result
	cout << "Car 1: " << car1.brand << " " << car1.model << " - " << car1.year << endl;
	cout << "Car 2: " << car2.brand << " " << car2.model << " - " << car2.year << endl;


	// Use enumerations
	Level myEnum = HIGH;

	cout << "My enum: " << myEnum << endl;


	// Create references
	string food = "Pizza";
	string& meal = food;

	cout << food << " - " << meal << endl;
	food = "Sandwich";
	cout << food << " - " << meal << endl;
	meal = "Burger";
	cout << food << " - " << meal << endl;

	// Memory address
	cout << &food << endl;

	// Pinters
	string* ptr = &meal;
	cout << &meal << endl;
	cout << ptr << endl;

	// Dereference
	cout << *ptr << endl;

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
