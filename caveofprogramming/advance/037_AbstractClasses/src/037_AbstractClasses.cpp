//============================================================================
// Name        : 037_AbstractClasses.cpp
// Author      : S. Forrer
// Version     :
// Copyright   : This code comes from Udemy C++ Courses
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

// PURE ABSTRACT CLASS
class Animal {
	/// An abstract class is class that contains methods without implementations
	/// We can't instantiate abstract classes!!!!

public:
	// Animal Constructor
	Animal() {
		cout << "Animal Constructor: new Animal created!" << endl;
	}
	// virtual Animal Destructor
	virtual ~Animal() {

	}
	virtual void run() =0;  // PURE VIRTUAL FUNCTION
	virtual void speak()=0;  // PURE VIRTUAL FUNCTION
};

// CLASS WITH VIRTUAL METHODS
class Dog: public Animal {
public:
	// Dog Constructor
	Dog() {
		cout << "Dog Constructor: new Dog created!" << endl;
	}
	// virtual Dog Destructor
	virtual ~Dog() { /* virtual: This method can be overriden by a subclass! */
	}
	virtual void speak() { /* virtual: This method can be overriden by a subclass! */
		cout << "Dog speak(): Woof!" << endl;
	}

};

// CONCRETE CLASS
class Labrador: public Dog {
public:
	Labrador() {
		cout << "Labrador Constructor: new Labrador created!" << endl;
	}
	virtual ~Labrador() {

	}
	virtual void run() { /* virtual: This method can be overriden by a subclass! */
		cout << "Labrador run(): Labrador is running" << endl;
	}
};

// Global Function
void test(Animal &a) {
	a.run();
}

// MAIN Function and Entry Point
int main() {
	cout << "Abstract Classes and pure Virtual Functions/n" << endl; // prints Title/n

	cout << "Testing the Labrador class..." << endl;
	Labrador lab;
	lab.run();
	lab.speak();

	cout << "\nTesting the Animal abstract super class..." << endl;
	Animal *animals[5];
	animals[0] = &lab;
	animals[0]->speak();

	cout << "\nTesting the \"test()\" global function..." << endl;
	test(lab);

	return 0;

}
