//============================================================================
// Name        : 020_Sets.cpp
// Author      : S. Forrer
// Version     :
// Copyright   : Udemy Advanced C++, Cave Programing Tutorial
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
/**
 * @include set only store unique elements
 */
#include <set>
using namespace std;

class Test
{
	int id;
	string name;

public:

	/// Default constructor
	Test() :
			id(0), name("")
	{

	}

	Test(int id, string name) :
			id(id), name(name)
	{

	}

	/**
	 * @brief print() prints out the class consten to stdout
	 * @details const says here that this method doesn't change any instance variables!
	 */
	void print() const
	{
		cout << id << ": " << name << endl;
	}

	/**
	 * @brief Overload < operator to compare the names of the object
	 * @details this method doesn't modify the object passed by reference (first const,
	 * either the attributes of the actual instance (second const)!
	 */
	bool operator<(const Test &other) const
	{
		// Use name to compare instances alphabetically
		return name < other.name;
	}

};

int main()
{
	cout << "Sets\n" << endl; // prints Title\n

	set<int> numbers;

	numbers.insert(50);
	numbers.insert(10);
	numbers.insert(30);
	numbers.insert(30); /// This element won't be inserted since it's already in set!
	numbers.insert(20);

	for (set<int>::iterator it = numbers.begin(); it != numbers.end(); it++)
	{
		cout << *it << endl;
	}

	// Search for an element in the set and return it
	int searchedNr = 30;
	set<int>::iterator itFind = numbers.find(searchedNr);
	if (itFind != numbers.end())
	{
		cout << "Found: " << *itFind << endl;
	}
	else
	{
		cout << searchedNr << " wasn't found! " << endl;
	}

	// Only tell if a certain element is in the set
	if (numbers.count(searchedNr))
	{
		cout << "Number found!" << endl;
	}

	// Overloading the comparator function of the set class
	set<Test> tests;

	tests.insert(Test(10, "Mike"));
	tests.insert(Test(30, "Joe"));
	tests.insert(Test(33, "Joe")); //it won't be added, since we're comparing names for this set (see <)
	tests.insert(Test(20, "Sue"));

	for (set<Test>::iterator it = tests.begin(); it != tests.end(); it++)
	{
		it->print(); //C++ needs to know that this method doesn't modify the object!
					 // so you will have to declare the funciton as const!
	}

	return 0;
}
