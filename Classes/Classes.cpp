// Classes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
using namespace std;

class MyClass {       // The class
public:             // Access specifier
	MyClass() {
		cout << "Test constructor" << endl;
	}

	MyClass(int number);

	int myNum = 0;        // Attribute (int variable)
	string myString;  // Attribute (string variable)
	void myMethod();    // Method/function declaration
};

void MyClass::myMethod() {  // Method/function definition outside the class
	cout << "Hello world!" << endl << endl;
}

MyClass::MyClass(int number) {
	myNum = number;
}

class Car {
public:
	Car(string br, string md, int yr) {
		year = yr;
		brand = br;
		model = md;
	}

	Car() {}

	int year = 0;
	string brand;
	string model;

	void printCar() {   // Method/function defined inside the class
		cout << "Car brand: " << brand << endl;
		cout << "Car model: " << model << endl;
		cout << "Car year: " << year << endl << endl;
	}

	int maxSpeed(int speed) {
		return speed;
	}
};

// Encapsulation
class Employee {
private:
	int salary;
public:
	// Setter
	void setSalary(int s) {
		salary = s;
	}

	// Getter
	int getSalary() {
		return salary;
	}
};

// Inheritance
class Vehicle {
public:
	string brand;
	string model;
	int year = 0;

	void honk() {
		cout << "Tuut, Tuuut!" << endl;
	}
};

class Truck : public Vehicle {
public:
	Truck(string br, string md, int yr) {
		brand = br;
		model = md;
		year = yr;
	}

	Truck() {};

	void print() {
		cout << "Truck brand: " << brand << endl;
		cout << "Truck model: " << model << endl;
		cout << "Truck year: " << year << endl << endl;
	}
};


// Multilevel Inheritance
class Buss : public Truck {
public:
	Buss(string br, string md, int yr) {
		model = md;
		brand = br;
		year = yr;
	}
};

// Polymorphism
class Animal {
public:
	void sound() {
		cout << "The animal makes sound!" << endl << endl;
	}
};

class Dog : public Animal {
public:
	void sound() {
		cout << "The dog says: bow wow!" << endl;
	}
};

class Pig : public Animal {
public:
	void sound() {
		cout << "The pig says: wee wee!" << endl;
	}
};

int main()
{
	// Test class and objects
	MyClass myObject(12);
	//myObject.myNum = 15;
	myObject.myString = "Pesjo";

	cout << "Name is: " << myObject.myString << endl;
	cout << "Age is: " << myObject.myNum << endl;
	myObject.myMethod();


	// Simple class and objects
	Car bmw;
	bmw.brand = "BMW";
	bmw.model = "E37";
	bmw.year = 2024;

	bmw.printCar();

	Car audi;
	audi.brand = "Audi";
	audi.model = "S8";
	audi.year = 2025;

	cout << audi.maxSpeed(340) << " km/h" << endl;
	audi.printCar();


	Car bently("Bently", "model", 2024);
	bently.printCar();


	// Encapsulation
	Employee pesho;
	pesho.setSalary(15000);
	cout << "Salary: " << pesho.getSalary() << endl << endl;

	// Inheritance
	Truck man("MAN", "38", 2023);
	man.print();

	// Multilevel Inheritance
	Buss bus("Merceds Bendz", "model", 2023);
	bus.print();

	// Polymorphism
	Animal animal;
	animal.sound();

	Dog dog;
	dog.sound();

	Pig pig;
	pig.sound();

	cout << endl;

	// Files
	// write to file
	ofstream MyFile("test.txt"); // Create and open text file
	MyFile << "Write sth in file!" << endl;
	MyFile << "Write sth in file!" << endl;
	MyFile << "Write sth in file!" << endl;
	MyFile.close(); // prevent memroy leak

	// read from file
	ifstream MyReadFile("test.txt");
	string myText;
	while (getline(MyReadFile, myText))
	{
		cout << myText << endl;
	}

	MyReadFile.close();

	cout << endl;

	// Exceptions
	try {
		int age = 15;
		if (age < 18) {
			throw(age);
		}
		else {
			cout << "Access granted - you are old enough." << endl;
		}
	}
	catch (int myNum) {
		cout << "Access denied - You must be at least 18 years old." << endl;
		cout << "Age is: " << myNum << endl;
	}


	try {
		int age = 15;
		if (age >= 18) {
			cout << "Access granted - you are old enough." << endl;
		}
		else {
			throw 505;
		}
	}
	catch (...) {
		cout << "Access denied - You must be at least 18 years old." << endl;
	}

	cout << endl;

	// Date and Time
	time_t timestamp = time(NULL);
	time(&timestamp);

	char buffer[26]; // 26 is enough symbols for ctime_s
	ctime_s(buffer, sizeof(buffer), &timestamp);
	cout << buffer << endl << endl;

	struct tm datetime;
	//time_t timestamp;

	datetime.tm_year = 2025 - 1900;
	datetime.tm_mon = 4 - 1;
	datetime.tm_mday = 15;
	datetime.tm_hour = 14;
	datetime.tm_min = 15;
	datetime.tm_sec = 13;
	datetime.tm_isdst = -1;

	timestamp = mktime(&datetime);
	ctime_s(buffer, sizeof(buffer), &timestamp);
	cout << buffer << endl << endl;


	struct tm datetime2;
	datetime2.tm_year = 2025 - 1900;
	datetime2.tm_mon = 4 - 1;
	datetime2.tm_mday = 15;
	datetime2.tm_hour = 14; datetime2.tm_min = 15; datetime2.tm_sec = 13;
	datetime2.tm_isdst = -1;

	string weekdays[] = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };

	cout << "The date is on: " << weekdays[datetime.tm_wday] << endl;
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
