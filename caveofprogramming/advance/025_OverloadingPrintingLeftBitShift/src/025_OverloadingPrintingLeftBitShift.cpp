//============================================================================
// Name        : 025_OverloadingPrintingLeftBitShift.cpp
// Author      : S. Forrer
// Version     :
// Copyright   : Udemy Advanced C++, Cave Programming Tutorial
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Test
{
private:
	int id;
	string name;

public:
	// Default Constructor
	Test() :
			id(0), name("")
	{
	}

	// Parameterized Constructor
	Test(int id, string name) :
			id(id), name(name)
	{
	}

	void print()
	{
		cout << id << ": " << name << "\n" << endl;
	}

	/************************************************************************/
	/*IMPORTANT*/
	// If you define an assignment operator, copy constructor or destructor you
	// always have to define the other two!!!!!!!!!!!!!!!
	/************************************************************************/

	//Assignment Operator Overloading
	/*const Test ... returns a reference to an object that shouldn't be modified!*/
	/*(const Test &...) gets a reference to an object that shouldn't be modified!*/
	const Test &operator=(const Test &other) /*Return value must be a reference!*/
	{
		cout << "Assigment running" << endl;
		id = other.id;
		name = other.name;
		return *this;
	}

	/*******************************************************************/
	//Overload << operator
	/*******************************************************************/
	//This function actually just needs a declaration of it in the class.
	// The function itself can stay on his own outside of the class.
	//Needs to be declared as a "friend", because "ostream operator<<()" is accessing
	//private attributes of this class.
	friend ostream &operator<<(ostream &out, const Test &test)
	{
		out << test.id << ": " << test.name;
		return out;
	}

	//Copy Constructor
	/*Used in a copy initialization!.. means object is being created copying an
	 * other object!*/
	Test(const Test &other)
	{
		cout << "Copy Constructor running" << endl;
		*this = other;  //calls the overloaded assignment operator!

	}

};

int main()
{
	cout << "Overloading the Insertion Operator for Printing\n" << endl; // prints Title\n

	Test test1(10, "Mike");
	Test test2(20, "Bob");
	test1.print();

	(cout << "tes1") << endl; // Bit Shift operation has left-right associativity!
	cout << test1 << " // " << test2 << endl;

	return 0;
}
