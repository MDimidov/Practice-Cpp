// TypesAndVariables.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//#define C // Uncoment to use C || comment to use C++

#ifdef C
extern "C" {
#include <stdio.h>
}
#else{
#include <iostream>
#endif

using namespace std;

namespace mine {
	unsigned int uint = 100;
}

int main()
{
	cout << "Hello World!\n";
	int num = 5;
	bool isTrue = 0;
	double dNum = 12.23123124123;
	float fNum = 21.12312312312f; // To define float number you must add 'f' to the end of the number
	char symbol = '#';
	unsigned int uint = -1; // Unsigned int will overflow - can not be negative

	cout << uint << " - " << mine::uint << endl; // Here we can use different namespaces for variables with the same name

	if (num == 32) // If you use '=' instead of '==' you will receave always 'true' and thats not correct
	{
		cout << "a is qual to 32" << endl;
	}

	int result = num != 32 ? 10 : -10;

	cout << result << endl << endl;

	switch (result)
	{

	case 10: {
		cout << "Your result is positive" << endl;
	}
		   break;
	case -10: {

		cout << "Your result is negative" << endl;
	}
			break;
	default:
		break;
	}

	cout << "----Here we start with for loop" << endl;
	for (int i = 0; i < 10; i++) {
		if (i % 2 == 0) {
			cout << i << endl;
		}
	}
	cout << "----Here we start with While loop" << endl;
	int i = 10;
	while (i < 20) {
		if (i % 2 == 0) {
			cout << i << endl;
		}
		i++;
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
