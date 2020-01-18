//============================================================================
// Name        : Lists.cpp
// Author      : S. Forrer
// Version     :
// Copyright   : Udemy Advanced C++, Cave Programing Tutorial
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <list>
using namespace std;

/**
 * This function iterates over a list of integers and sends every element to
 * the standard output.
 * @param numbers list of integers
 */
void printNumbers(list<int>& numbers)
{
	// iterate through a list and print values to standard output
	for (list<int>::iterator it = numbers.begin(); it != numbers.end(); ++it)
	{
		cout << *it << endl;
	}
}

int main()
{
	cout << "Lists\n" << endl; // prints Title\n

	list<int> numbers;

	numbers.push_back(1);  // Add some elementes at the end of the list
	numbers.push_back(2);
	numbers.push_back(3);

	numbers.push_front(0); // Add some elements at the beginning

	// Insert an element to the list
	list<int>::iterator it = numbers.begin();
	it++;
	numbers.insert(it, 100);

	// iterate through a list and print values to standard output
	printNumbers(numbers);

	// Erase 1 element
	list<int>::iterator eraseIt = numbers.begin();
	eraseIt++;
	cout << "Erasing element (" << *eraseIt << ") from the list..." << endl;
	eraseIt = numbers.erase(eraseIt); //Refresh iterator!!!!!!
	cout << "Element (" << *eraseIt << ") is now on his place." << endl;

	// iterate through a list and print values to standard output
	printNumbers(numbers);

	// Automatically inserting elements
	cout << "Automatically inserting element 1234..." << endl;
	for (list<int>::iterator it = numbers.begin(); it != numbers.end(); it++)
	{
		if (*it < 3)
		{
			numbers.insert(it, 1234);
		}
	}

	// iterate through a list and print values to standard output
	printNumbers(numbers);

	// Automatically deleting elements
	cout << "Automatically deleting element 1234..." << endl;
	for (list<int>::iterator it = numbers.begin(); it != numbers.end();)
	{
		if (*it == 1234)
		{
			it = numbers.erase(it);
		}
		else
		{
			it++; // Don't forget to remove ++it from for body!!!!!!
		}
	}

	// iterate through a list and print values to standard output
	printNumbers(numbers);

	return 0;
}
