// DataStructures.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
#include<list>
#include<stack>
#include<queue>
#include<deque>
#include<set>
#include<map>
#include<algorithm>
using namespace std;

int main()
{
	// Vectors
	{
		vector<string> cars = { "Bentley", "Bugatti", "Porsche" };

		cout << "------Vectors-------" << endl;
		cout << "First element: " << cars.front() << endl;
		cout << "Last element: " << cars.back() << endl;
		cout << "[1] element: " << cars.at(1) << endl;
		//cout << "Throw element: " << cars.at(12) << endl;

		cars.push_back("Tesla");    // Push element into vector 
		cars.push_back("Tesla");    // Push element into vector 

		for (string car : cars) {
			cout << "Car brand: " << car << endl;
		}
		cars.pop_back();            // Remove last element from vector
		cars.pop_back();            // Remove last element from vector
		cars.pop_back();            // Remove last element from vector

		cout << "Vector size: " << cars.size() << endl; // Check vector size/length

		if (cars.empty())       // Check if the vector is empty
		{
			cout << "The vector is empty" << endl;
		}
		else
		{
			cout << "The vector is not empty" << endl;
		}

		for (int i = 0; i < cars.size(); i++) {
			cout << "Car brand: " << cars.at(i) << endl;
		}

		cout << endl;
	}

	// Lists
	{
		cout << "------Lists-------" << endl;
		list<string> cars = { "Bentley", "Bugatti", "Porsche" };

		cout << "First car: " << cars.front() << endl;
		cout << "Last car: " << cars.back() << endl;

		cars.front() = "Lamborghini";
		cars.back() = "Tesla";

		cars.push_front("Bentley");
		cars.push_back("Porsche");

		cars.pop_front();
		cars.pop_back();

		for (string car : cars) {
			cout << "Car brand: " << car << endl;
		}

		cout << "Size of list: " << cars.size() << endl;

		if (cars.empty()) {
			cout << "No cars at the list!" << endl;
		}
		else {
			cout << cars.size() << " cars at the list!" << endl;
		}

		cout << endl;
	}

	// Stacks
	{
		cout << "------Stacks-------" << endl;

		stack<string> cars;

		// Add elements to the stack
		cars.push("Lamborghini");
		cars.push("Bentley");
		cars.push("Porsche");
		cars.push("Tesla");
		cars.push("Maserati");
		cars.push("Bugatti");

		cout << cars.top() << endl;

		cars.top() = "Ferrari";
		cout << cars.top() << endl;

		cars.pop();
		cout << cars.top() << endl;

		cout << "Stack size: " << cars.size() << endl;

		while (!cars.empty()) {
			cout << cars.top() << endl;
			cars.pop();
		}

		cout << endl;
	}

	// Queues
	{
		cout << "------Queues-------" << endl;
		queue<string> cars;

		// Add elements to the queue
		cars.push("Lamborghini");
		cars.push("Bentley");
		cars.push("Porsche");
		cars.push("Tesla");
		cars.push("Maserati");
		cars.push("Bugatti");

		cout << "First element: " << cars.front() << endl;
		cout << "Last element: " << cars.back() << endl;

		cars.front() = "Lambo";
		cars.back() = "I woke up in my new Bugatti";

		cout << "First element: " << cars.front() << endl;
		cout << "Last element: " << cars.back() << endl;

		cars.pop();
		cout << "First element: " << cars.front() << endl;

		cout << "Queue size: " << cars.size() << endl;

		while (!cars.empty()) {
			cout << "Car brand: " << cars.front() << endl;
			cars.pop();
		}

		cout << endl;
	}

	// Deque
	{
		cout << "------Dequeues-------" << endl;

		deque<string> cars = { "Bentley", "Bugatti", "Porsche" };

		cout << "cars[2]: " << cars[2] << endl;

		cout << "First element: " << cars.front() << endl;
		cout << "Last element: " << cars.back() << endl;

		cout << "First element: " << cars.at(0) << endl;
		cout << "Last element: " << cars.at(cars.size() - 1) << endl;

		cars.at(1) = "Lamborghini";
		cout << "at(1) element: " << cars.at(1) << endl;

		cars.push_front("Tesla");
		cars.push_back("Ferrari");

		for (string car : cars) {
			cout << " Car brand: " << car << endl;
		}

		cout << "Size of the deque: " << cars.size() << endl;

		cars.pop_front();
		cars.pop_back();

		cout << "First element: " << cars.front() << endl;
		cout << "Last element: " << cars.back() << endl;

		while (!cars.empty()) {
			cout << " Car brand: " << cars.front() << endl;
			cars.pop_front();
		}

		cout << endl;
	}

	// Sets
	{
		cout << "------Sets-------" << endl;

		set<string> cars = { "Bentley", "Bugatti", "Porsche", "Ferrari", "BMW", "BMW" };	// Sets sort data automaticaly in ascending order

		for (string car : cars) {
			cout << "Car brand: " << car << endl;
		}

		// Sort in ascendnig order
		{
			set<int> nums = { 6, 2,3,1,9,7,8,4,5 };

			for (int num : nums) {
				cout << num << " ";
			}
			cout << endl;
		}

		// Sort in descending order
		{
			set<int, greater<int>> nums = { 6,2,3,1,9,7,8,4,5 };
			for (int num : nums) {
				cout << num << " ";
			}
			cout << endl;
		}

		cars.insert("Rouse Royse");	// Add element to set
		cars.erase("BMW");
		for (string car : cars) {
			cout << car << endl;
		}

		cout << "Size of the set: " << cars.size() << endl;

		cars.clear();
		cout << "Size of the set after clear(): " << cars.size() << endl;

		if (cars.empty()) {
			cout << "No cars in the list" << endl;
		}
		else {
			cout << cars.size() << " cars in the list" << endl;
		}

		cout << endl;
	}

	// Maps - Dictionary (Associative array)
	{
		cout << "------Maps-------" << endl;

		map<string, string> cars = { {"Bentley", "Luxury"}, {"Bugatti", "Luxury"}, {"Porsche", "Standard"}, {"Ferrari", "Luxury"}, {"BMW", "Standard"}, {"BMW", "Cheap"} };	// Maps sort data automaticaly in ascending order by keys

		cout << "Bentley is: " << cars["Bentley"] << endl;
		cout << "BMW is: " << cars.at("BMW") << endl;

		cars.at("Bentley") = "Favorites";
		cout << "Bentley is: " << cars.at("Bentley") << endl;

		// Add element to map
		cars["Tesla"] = "Electric";
		cout << "Tesla is: " << cars.at("Tesla") << endl;

		cars.insert({ "Lamborghini", "Luxury, Favorite" });
		cout << "Lamborghini is: " << cars.at("Lamborghini") << endl;

		// Delete element from map
		cars.erase("Tesla");
		//cout << "Tesla is: " << cars.at("Tesla") << endl;	// This will throw an error

		cout << "Size of the map is: " << cars.size() << endl;


		if (cars.count("Porsche")) {
			cout << "Porsche is available and " << cars.at("Porsche") << endl;
		}
		else {
			cout << "Porsche is not in the map list" << endl;
		}

		for (auto car : cars) {
			cout << car.first << " is " << car.second << endl;
		}

		cars.clear();
		cout << "Size of the map after clear() is: " << cars.size() << endl;
		cout << endl;
	}

	// Iterators
	{
		cout << "------Iterators-------" << endl;
		vector<string> cars = { "Porsche", "Lamborghini", "Ferrari", "Bentley" };
		vector<string> people = { "John", "Andy", "Anna", "Lora" };

		{

			vector<string>::iterator it;

			for (it = cars.begin() + 1; it != cars.end(); ++it) {
				cout << *it << endl;
			}

			it = cars.begin();
			*it = "Tesla";
			cout << cars.at(0) << endl;
		}

		{
			auto it = cars.begin();
			for (it = cars.begin(); it != cars.end();) {
				if (*it == "Tesla") {
					*it = "Porsche";
				}
				else {
					++it;
				}
			}

			// Iterate in reverse order
			for (auto it = cars.rbegin(); it != cars.rend(); ++it) {
				cout << *it << endl;
			}

			vector<int> numbers = { 5,2,3,1,7,6,9,8,4 };
			//sort(numbers.begin(), numbers.end());	// Order in ascending order
			sort(numbers.rbegin(), numbers.rend());	// Order in descending order

			for (auto num : numbers) {
				cout << num << " ";
			}
			cout << endl;
		}
	}

	// Algorithms
	{
		cout << "------Iterators-------" << endl;

		vector<int> numbers = { 5,2,3,1,7,6,9,8,4 };
		sort(numbers.begin() + 3, numbers.end() - 2);

		for (auto num : numbers) {
			cout << num << " ";
		}
		cout << endl;

		auto it = find(numbers.begin(), numbers.end(), 4);
		cout << *it << endl;

		sort(numbers.begin(), numbers.end());
		it = upper_bound(numbers.begin(), numbers.end(), 4);
		cout << *it << endl;

		auto its = min_element(numbers.rbegin(), numbers.rend());
		cout << "array min_element(): " << *its << endl;

		its = max_element(numbers.rbegin(), numbers.rend());
		cout << "array max_element(): " << *its << endl;


		// Coppy vector
		vector<int> copiedNums(9);

		copy(numbers.begin(), numbers.end(), copiedNums.begin());

		for (auto num : copiedNums) {
			cout << num << " ";
		}
		cout << endl;

		// Fill elements
		fill(copiedNums.begin(), copiedNums.end(), 6);

		for (auto num : copiedNums) {
			cout << num << " ";
		}
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
