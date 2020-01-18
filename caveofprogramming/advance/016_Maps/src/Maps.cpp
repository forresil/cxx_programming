//============================================================================
// Name        : Maps.cpp
// Author      : S. Forrer
// Version     :
// Copyright   : Udemy Advanced C++, Cave Programing Tutorial
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <map>
using namespace std;

int main()
{
	cout << "Maps\n" << endl; // prints Title\n

	// Declare Map
	map<string, int> ages;

	// Add some Keys and values to the map
	ages["Mike"] = 40;
	ages["Raj"] = 20;
	ages["Vicky"] = 30;


	// Read values from the map
	cout << "Mikes's age is: " << ages["Mike"] << endl;
	cout << "Raj's age is: " << ages["Raj"] << endl;


	// Rewrite or replace the key values
	cout << "Changing Mike's age to 70..." << endl;
	ages["Mike"] = 70;
	cout << "Mike's new age is: " << ages["Raj"] << endl;


	// Insert key-values pairs into the map
	// 1. By using pair<> variable
	pair<string, int> addToMap("Peter", 100);
	ages.insert(addToMap);
	// 2. By using pair<> constructor directly
	ages.insert(pair<string, int>("Maria", 32));
	// 3. By using make_pair
	ages.insert(make_pair("Markus", 67));


	// Check for a key in the map
	string key = "Vicky"; // type here a name to search for...
	if (ages.find(key) != ages.end())
	{
		cout << "Found " << key << endl;
	}
	else
	{
		cout << key << " not found!" << endl;
	}


	// Iterate over all map keys and print out its contents.
	for (map<string, int>::iterator it = ages.begin(); it != ages.end(); it++)
	{
		cout << it->first << ": " << it->second << endl;
	}


	// An other way to iterate over the map
	cout << "Iterating with pair<string, int>..." << endl;
	for (map<string, int>::iterator it = ages.begin(); it != ages.end(); it++)
	{
		pair<string, int> age = *it;
		cout << age.first << ": " << age.second << endl;
	}

	return 0;
}
