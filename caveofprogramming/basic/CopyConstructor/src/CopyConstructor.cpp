//============================================================================
// Name        : CopyConstructor.cpp
// Author      : forresil
// Version     :
// Copyright   : C++ Tutorial for Complete Beginers (Udemy)
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Animal
{
private:
	string name;
public:
	Animal(){cout << "Animal created." << endl;};
	// Copy Constructor
	// You can't call un-constant methods in a copy constructor! (see speak()!)
	Animal(const Animal& other):name(other.name){cout << "Animal created by copying." << endl;};
	void setName(string name){this->name = name;};
	void speak() const // here const prevents Object to be changed!!
	{
		cout << "My Name is: " << name << endl;
	}
};

int main() {
	cout << "Copy Constructor\n" << endl; // prints Title

	Animal animal1;

	animal1.setName("Freddy");

	Animal animal2=animal1;  // Calls the copy constructor
	animal2.speak();
	animal2.setName("Bob");

	animal1.speak();
	animal2.speak();

	Animal animal3(animal1);  // Uses the copy constructor directly
	animal3.speak();

	return 0;
}
