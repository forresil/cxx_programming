//============================================================================
// Name        : 024_OverloadingAssigmentOperator.cpp
// Author      : S. Forrer
// Version     :
// Copyright   : Udemy Advanced C++, Cave Programming Tutorial
// Description : Copy Constructor & Assignment Operator Overloading belong together!
//============================================================================

#include <iostream>
using namespace std;

class Test
{
private:
	int id;
	string name;

public:
	Test() :
			id(0), name("")
	{
	}
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
	// If you define an assigment operator, copy constructor or destructor you
	// always have to define the other two!!!!!!!!!!!!!!!
	/************************************************************************/

	//Assignment Operator Overloading
	/*const Test ... returns a reference to an object that shouldn't be modified!*/
	/*(const Test &...) gets a reference to an object that shouldn't be modified!*/
	const Test &operator=(const Test &other)  /*Return value must be a reference!*/
	{
		cout << "Assigment running" << endl;
		id = other.id;
		name = other.name;
		return *this;
	}

	//Copy Constructor
	/*Used in a copy initialization!.. means object is being created copying an
	 * other object!*/
	Test(const Test &other)
	{
		cout << "Copy Constructor running" << endl;
		id = other.id;
		name = other.name;
		//you also could call the assigment operation here.. like:
		// *this = other;

	}
};

int main()
{
	cout << "Overloading Assignment Operator\n" << endl; // prints Title\n

	Test test1(10, "Mike");
	cout << "test1 => " << flush;
	test1.print();

	Test test2(20, "Bob");
	cout << "test2 => " << flush;
	test2.print();

	test2 = test1;
	cout << "test2 = test1 -(shallow copy)-> test2 => " << flush;
	test2.print();

	Test test3;
	test3 = test2 = test1;
	cout << "test3 = test 2 = test1 --> test3 => " << flush;
	test3.print();

	Test test4;
	//test4 = test2;
	test4.operator=(test2);
	cout << "test4.operator=(test2) --> test4 = > " << flush;
	test4.print();

	//Copy Initialization
	Test test5 = test1; // Doesn't runs the assignment operator, only copy constructor!
	cout << "Test test5 = test1 --> " << flush;
	test5.print();

	return 0;
}
