// Functions.cpp : This file contains the 'main' function. Program execution begins and ends there.
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


// Functions
int power(int number) {
	return number * number;
}

auto powerAuto(int number) -> int {
	return number * number;
}

// Template functions - Generic
template <typename T>
T powerUpGeneric(T number) {
	return number * number;
}

template< typename T, typename R>
auto multiply(T num1, R num2) -> decltype(num1* num2)
{
	return num1 * num2;
}

// Create function
void myFunction();	// declaration
void printCountry(string country = "Italy");
void printNames(string firstName, string lastName, int age);
int sumNumbers(int a, int b);
void swapNumbers(int& a, int& b);

int main()
{
	cout << "Hello World!\n";

	int powered = power(4);

	cout << "This is Generic function" << endl;
	cout << powerUpGeneric(5.5) << endl;
	cout << powerUpGeneric(5.3f) << endl;
	cout << powerUpGeneric(2) << endl;
	cout << power(5) << endl;
	cout << "This is Normal function" << endl;
	cout << powered << endl;
	cout << "This is Auto function" << endl;
	cout << powerAuto(5) << endl;

	int a = 6;
	// Lambda functions
	cout << "This is Lambda function" << endl;
	cout << [a]()
		{
			return a * a;
		}() << endl;

	cout << "This is Auto Generic function" << endl;
	double result = multiply<int, double>(5, 2.54);
	cout << result << endl;
	cout << multiply<int, double>(5, 3.14) << endl;

	string test = "Message test";

	cout << test;
	cout << endl;


	// Call myFunction
	myFunction();


	// Parameters and Arguments
	printCountry("Spain");
	printCountry();

	printNames("Pesho", "Ivanov", 18);

	cout << "Sum is " << sumNumbers(2, 5) << endl;

	// Reference - Swap number
	int x = 10;
	int y = 20;

	cout << "Before swap: x = " << x << "; y = " << y << endl;
	
	swapNumbers(x, y);

	cout << "After swap: x = " << x << "; y = " << y << endl;

}

void myFunction()	// declaration 
{
	cout << "My function" << endl;	// definition
}

void printCountry(string country)
{
	cout << country << endl;
}

void printNames(string firstName, string lastName, int age)
{
	cout << "Name: " << firstName << " " << lastName << endl;
	cout << "Age: " << age << endl;
}


int sumNumbers(int a, int b)
{
	return a + b;
}

void swapNumbers(int& a, int& b) 
{
	a += b;
	b = a - b;
	a -= b;
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
