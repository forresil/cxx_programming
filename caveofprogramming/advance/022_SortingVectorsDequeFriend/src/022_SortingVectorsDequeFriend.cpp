//============================================================================
// Name        : 022_SortingVectorsDequeFriend.cpp
// Author      : S. Forrer
// Version     :
// Copyright   : Udemy Advanced C++, Cave Programming Tutorial
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>  // needed for sort()
#include <deque>

using namespace std;

class Test
{
	int id;
	string name;

public:
	Test(int id, string name) :
			id(id), name(name)
	{
	}
	void print()
	{
		cout << id << ": " << name << endl;
	}

	// In order to use the sort class from std namespace we need to implement < operator
	bool operator<(const Test& other) const
	{
		return name < other.name;
	}

	// Declares an external function as friend, so it can access private attributes
	friend bool comp(const Test &a, Test &b);
};

// Global function, friend of class Test that aid to compare elements by id.
// Used by fucntion sort()
bool comp(const Test &a, Test &b)
{
	return a.id < b.id;
}

int main()
{
	cout << "Sorting Vectors\n" << endl; // prints Title\n

	vector<Test> tests;

	tests.push_back(Test(5, "Mike"));
	tests.push_back(Test(3, "Vicky"));
	tests.push_back(Test(10, "Sue"));
	tests.push_back(Test(7, "Raj"));

	cout << "Print vector..." << endl;
	for (unsigned int i = 0; i < tests.size(); ++i)
	{
		tests[i].print();
	}

	cout << "\nPrint vector ordered by name using operator overload..." << endl;
	sort(tests.begin(), tests.end());  // needs <algorithm> to be included!
	for (unsigned int i = 0; i < tests.size(); ++i)
	{
		tests[i].print();
	}

	cout << "\nPrint vector ordered by id using friend function..." << endl;
	sort(tests.begin(), tests.end(), comp); // sort needs <algorithm> to be included!
	for (unsigned int i = 0; i < tests.size(); ++i)
	{
		tests[i].print();
	}

	cout << "\nPrint vector with only the first 3 elements ordered by name.. " << endl;
	sort(tests.begin(), tests.begin()+3); // sort needs <algorithm> to be included!
	for (unsigned int i = 0; i < tests.size(); ++i)
	{
		tests[i].print();
	}


	// DEQUE is a kind of vector, but you can add elements in the front too!
	// It also has pop and push functions...
	deque<Test> testDeque;

	testDeque.push_front(Test(11,"Aita"));
	testDeque.push_back(Test(13,"Ama"));
	testDeque.push_front(Test(32,"Semea"));
	testDeque.push_back(Test(22,"Agura"));

	cout << "\nPrint deque... " << endl;
	//sort(testDeque.begin(), testDeque.end()); // sort needs algorithm to be included!
	for (unsigned int i = 0; i < tests.size(); ++i)
	{
		testDeque[i].print();
	}

	cout << "\nPrint deque ordered by name.. " << endl;
	sort(testDeque.begin(), testDeque.end()); // sort needs algorithm to be included!
	for (unsigned int i = 0; i < tests.size(); ++i)
	{
		testDeque[i].print();
	}



	return 0;
}
