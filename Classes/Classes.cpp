// Classes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
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
