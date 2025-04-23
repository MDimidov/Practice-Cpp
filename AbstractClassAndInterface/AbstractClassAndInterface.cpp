// AbstractClassAndInterface.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

// Abstract class has at least one virtual function = 0
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
    void sleep() override
    {
        cout << "Sleep!\n";
    }
};

// Interface has only virtual functions = 0
class IDog
{
public:
    virtual void bark() = 0;
    virtual void sleep() = 0;
};

class Pitbul : public IDog 
{
public:
    void bark() override {
        cout << "Pitbule Bark!\n";
    }

    void sleep() override {
        cout << "Pitbule Sleep!\n";
    }
};

int main()
{
    Husky dog;

    dog.bark();
    dog.sleep();

    Pitbul pitbul;
    pitbul.bark();
    pitbul.sleep();
}