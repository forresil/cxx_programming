//============================================================================
// Name        : 036_ObjectSlicing&Polymorphism.cpp
// Author      : S. Forrer
// Version     :
// Copyright   : This code comes from Udemy C++ Courses
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Parent {
public:
	void print() {
		cout << "parent" << endl;
	}
};

class Child: public Parent {
public:
	/// this method can never be invoked since it's shadowed be the parent's method!
	void print() {
		cout << "child" << endl;
	}

};

class ParentVirtual {
private:
	int one;

public:

	// Constructor
	/// a constructor MUST be declared in order to give child-classes a default
	/// constructor that they can run at instantiation
	ParentVirtual() :
			one(0) {

	}

	// Copy Constructor
	ParentVirtual(const ParentVirtual &other) :
			one(0) {
		one = other.one;
		cout << "copy parent virtual" << endl;
	}

	//Destructor
	virtual ~ParentVirtual() {

	}

	// Whit the virtual keyword c++ is going to create a table of function pointers
	// to point to the right kind of object functions
	virtual void print() {
		cout << "parent virtual" << endl;
	}
};

/**
 * @note Every time when you declare a Sub-Class the parent class MUST have
 * a Constructor, which the child-class can call at his instantiation!
 */
class ChildVirtual: public ParentVirtual {
private:
	int two;
public:
	ChildVirtual() :
			two(0) {
	}

	/// this method overrides the parent's method, since the former is "virtual"
	void print() {
		cout << "child virtual" << endl;
	}

};

int main() {
	cout << "Object Slicing and Polymorphism/n" << endl; // prints Title/n

	Child c1;
	Parent &p1 = c1;
	p1.print();  // here "parent" is printed out

	ChildVirtual cv1;
	ParentVirtual &pv1 = cv1;
	pv1.print(); // here "child virtual" is printed out!

	/// OBJECT SLICING
	/// A child-object is casted to be a parent object through the copy constructor
	/// Here variable "two" is thrown away, while "one" is passed to the new parent
	/// class.
	// use copy initialization
	ParentVirtual pv2 = ChildVirtual(); //here "copy parent virtual" is printed out!
	pv2.print();  // here "parent virtual" is printed out!

	return 0;
}
