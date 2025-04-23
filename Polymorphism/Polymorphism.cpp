// Polymorphism.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
using namespace std;

class Box {
public:
	Box() {}

	Box(int h, int l) {
		high = h;
		length = l;
	}

	void setHigh(int newHigh) {
		high = newHigh;
	}

	void setLength(int newLength) {
		length = newLength;
	}

	virtual void printTest() {
		cout << "Box" << endl;
	}

	void print()
	{
		cout << "Box high: " << high << endl;
		cout << "Box length: " << length << endl;
	}

protected:
	int high{ 0 };
	int length{ 0 };
};


class SuperBox : public Box
{
public:
	SuperBox() {}
	void print()
	{
		cout << "SuperBox high: " << high << endl;
		cout << "SuperBox length: " << length << endl;
	}

	void printTest() override {
		cout << "SuperBox" << endl;
	}

};

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

vector<int>& operator+=(vector<int>& lhs, vector<int>& rhs) {
	for (auto item : rhs) {
		lhs.push_back(item);
	}

	return lhs;
}

// Run time polymorphism
// Virtual functions

int main()
{
	{
		vector<int> items;
		items.push_back(1);
		items.push_back(2);
		items.push_back(3);
		items.push_back(4);
		items.push_back(5);
		cout << items << endl;

		vector<int> items2;
		items2.push_back(6);
		items2.push_back(7);
		items2.push_back(8);
		items2.push_back(9);
		items2.push_back(0);

		items += items2;
		cout << items << endl;
	}

	{
		vector<Box> boxes;
		Box box(4, 12);
		SuperBox superBox;
		boxes.push_back(box);
		boxes.push_back(superBox);

		for (auto& it : boxes) {
			it.printTest();		// RunTime Polymorphism
			it.print();
		}
	}
	cout << "--------------------" << endl;
	{
		vector<Box*> boxes;
		Box box(4, 12);
		SuperBox superBox;
		boxes.push_back(&box);
		boxes.push_back(&superBox);

		for (auto& it : boxes) {
			it->printTest();	// RunTime Polymorphism
			it->print();
		}
	}

	return 0;
}
