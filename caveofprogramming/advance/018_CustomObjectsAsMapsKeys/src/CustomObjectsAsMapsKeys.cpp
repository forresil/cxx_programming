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

	void print()
	{
		cout << name << ": " << age << endl;
	}

};

int main()
{
	cout << "Custom Objects as Map Values.\n" << endl; // prints Title\n

	// Declare map
	map<int, Person> people;

	// Add some elements
	people[0] = Person("Mike", 40);
	people[1] = Person("Vicky", 30);
	people[2] = Person("Raj", 20);

	//Inserting objects to the map with make_pair
	people.insert(make_pair(55, Person("Bob", 45))); //requires copy constructor 2x!!
	people.insert(make_pair(5, Person("Sue", 24)));

	// Iterate over the elements
	for (map<int, Person>::iterator it = people.begin(); it != people.end();
			it++)
	{
		cout << it->first << ": " << flush;  // get key
		it->second.print(); //get value
	}

	return 0;
}
