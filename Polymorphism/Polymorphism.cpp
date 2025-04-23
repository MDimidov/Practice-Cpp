// Polymorphism.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
using namespace std;
// Compile time polymorphism
// Functional overloading
void test() {

}

void test(int a) {

}

void test(int a, double b) {
    
}

// Operator overloading
ostream& operator<<(ostream& out, const vector<int>& data) 
{
    for (int i = 0; i < data.size(); i++) {
        if (i != 0) {
            out << ", ";
        }

        out << data.at(i);
    }

    return out;
}

// Run time polymorphism
// Virtual functions

int main()
{
    vector<int> items;
    items.push_back(1);
    items.push_back(2);
    items.push_back(3);
    items.push_back(4);
    items.push_back(5);

    cout << items << endl;

    return 0;
}
