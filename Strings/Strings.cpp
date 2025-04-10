// Strings.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
	cout << "Hello World!\n";

	string firstName = "John ";
	string lastName = "Doe";
	string middleName = "Mid";
	string fullName = firstName.append(middleName + " ").append(lastName).append("\n");
	cout << fullName;
	cout << "New line" << endl << endl;
	//cout << firstName.append((middleName + " ").append(lastName).append("\n"));

	// String length/size
	cout << "-----------String length----------" << endl;

	string txt = "This text(string) is with length: ";
	cout << txt << txt.length() << " // using length()" << endl;
	cout << txt << txt.size() << " // using size()" << endl << endl;


	// String indexes/access
	cout << "-----------String index----------" << endl;
	cout << txt[0] << txt[1] << txt[2] << txt[3] << endl;
	cout << txt[txt.length() - 8] 
		<< txt[txt.length() - 7] 
		<< txt[txt.length() - 6] 
		<< txt[txt.length() - 5] 
		<< txt[txt.length() - 4] 
		<< txt[txt.length() - 3] 
		<< txt[txt.length() - 2] << endl;
	txt.at(3) = 'S'; // change char
	cout << txt.at(3) << endl << endl;

	// String special chars
	cout << "-----------String special characters----------" << endl;
	txt = "We are the so-called \"Vikings\"\tfrom the north.";
	cout << txt << endl << endl;

	// String input
	cout << "-----------String input----------" << endl;
	cout << "Type your first name: ";
	cin >> firstName; // With 'cin >>' you can take only the first word
	cout << "Your name is: " << firstName << endl;
	
	cout << "Type your full name: ";
	cin.ignore();
	getline(cin, fullName);
	cout << "Your Full name is: " << fullName << endl << endl;

	// String C-style string
	cout << "-----------String C-style string----------" << endl;
	char charArray[] = "String with char Array";
	cout << charArray << endl << endl;
	
	// Math operations
	cout << "-----------Math operations----------" << endl;
	int x = 5;
	int y = 10;
	cout << max(x, y) << endl;
	cout << min(x, y) << endl;
	cout << sqrt(64) << endl;
	cout << round(3.14) << endl;
	cout << round(3.54) << endl;
	cout << log(2) << endl;
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
