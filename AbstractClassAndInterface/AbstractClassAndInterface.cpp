// AbstractClassAndInterface.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Dog 
{
public:
    virtual void bark() {
        cout << "Bark!\n";
    }

    virtual void sleep() = 0;
};

class Husky : public Dog
{
public:
    virtual void sleep() override
    {
        cout << "Sleep!\n";
    }
};


int main()
{
    Husky dog;

    dog.bark();
    dog.sleep();


}