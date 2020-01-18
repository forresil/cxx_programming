//============================================================================
// Name        : Multimap.cpp
// Author      : S. Forrer
// Version     :
// Copyright   : Udemy Advanced C++, Cave Programing Tutorial
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <map>
using namespace std;

/**
 * @brief This program shows the usage of Multimaps
 * @details Multimaps allow to have pairs with identical keys but different values.
 * @return
 */
int main()
{
	cout << "Multimap\n" << endl; // prints Title\n

	multimap<int, string> lookup;

	lookup.insert(make_pair(30, "Mike")); // by multimaps it doesn't work without make_pair!!
	lookup.insert(make_pair(10, "Vicky"));
	lookup.insert(make_pair(30, "Raj"));
	lookup.insert(make_pair(20, "Bob"));
	lookup.insert(make_pair(30, "Sue"));
	lookup.insert(make_pair(15, "Mario"));
	lookup.insert(make_pair(25, "Alice"));

	// 1. Print elements of multimap to standard output
	cout << "All elements of multimap lookup:" << endl;
	for (multimap<int, string>::iterator it = lookup.begin();
			it != lookup.end(); it++)
	{
		cout << it->first << ": " << it->second << endl;
	}

	cout << endl;

	// 2. Return all elements in the map added after an element with a defined key
	cout << "Pairs of elements with a key-nr greater or equals 20..." << endl;
	for (multimap<int, string>::iterator it = lookup.find(20);
			it != lookup.end(); it++)
	{
		cout << it->first << ": " << it->second << endl;
	}

	cout << endl;

	// 3. Display all elements with a defined key
	cout << "Pairs of elements with key-nr. 30..." << endl;
	pair<multimap<int, string>::iterator, multimap<int, string>::iterator> its =
			lookup.equal_range(30);
	for (multimap<int, string>::iterator it = its.first; it != its.second; it++)
	{
		cout << it->first << ": " << it->second << endl;
	}

	cout << endl;

	// 4. In C++11 (same as in 3.)
	cout << "C++11(auto keyword):\nPairs of elements with key-nr. 30..." << endl;
	auto its2 = lookup.equal_range(30);
	for (auto it = its2.first; it != its2.second; it++)
	{
		cout << it->first << ": " << it->second << endl;
	}


	return 0;

}
