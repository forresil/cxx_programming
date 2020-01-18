//============================================================================
// Name        : CustomObjectsAsMapsVal.cpp
// Author      : S. Forrer
// Version     :
// Copyright   : Udemy Advanced C++, Cave Programing Tutorial
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <map>
using namespace std;

class Person
{
private:
	string name;
	int age;

public:
	// Parameter-less constructor is required by map!!!!
	Person() :
			name(""), age(0)
	{
	}

	// Copy constructor is required by map.insert(make_pair())!!!!
	Person(const Person &other)
	{
		cout << "Copy Constructor running..." << endl;
		name = other.name;
		age = other.age;
	}

	Person(string name, int age) :
			name(name), age(age)
	{
	}
	/// This function prints out the object
	/// The function must be declared as "const" in order to work as key!!
	/// The "const" operator prevents the owning instance to be accidentally modified.
	void print() const
	{
		cout << name << ": " << age << flush; // never enter endl in a print function!
	}

	/// @brief In order to sort the objects the map class needs to compare the objects
	/// @warning Don't forget to compare every member of the object to avoid errors
	/// or lost of data when adding new pairs to the maps!!
	/// @note this functions doesn't change either the passed argument, nor the owning
	/// instance.
	/// @return true if left object is less than the right one, else returns false.
	bool operator<(const Person &other) const
	{
		// If two instances have the same name, compare the ages
		if (name == other.name)
		{
			return age < other.age;
		}
		else //only compare the names
		{
			return name < other.name;
		}
	}

};

int main()
{
	cout << "Custom Objects as Map Values.\n" << endl; // prints Title\n

	// Declare map
	map<Person, int> people;

	// Add some elements
	people[Person("Mike", 40)] = 0; //calls copy constructor 1x!
	people[Person("Mike", 4)] = 10; // Uses the comparator function!
	people[Person("Vicky", 30)] = 1;
	people[Person("Raj", 20)] = 2;

	// Iterate over the elements
	for (map<Person, int>::iterator it = people.begin(); it != people.end();
			it++)
	{
		cout << it->second << ": " << flush;  // get key
		it->first.print(); // functions of object must be const!
		cout << endl;
	}

	return 0;
}
