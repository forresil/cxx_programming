//============================================================================
// Name        : AllocatingMemory.cpp
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
	//Constructor
	Animal(){cout << "Animal " << this << " " << name << " created." << endl;};

	// Copy Constructor
	// You can't call un-constant methods in a copy constructor! (see speak()!)
	Animal(const Animal& other) :
			name(other.name)
	{
		cout << "Animal " << name << " created by copying." << endl;
	}
	;

	//Destructor
	~Animal(){cout << this <<" "<< name << "'s Destructor called" << endl;};

	//Methods
	void setName(string name){this->name = name;};
	void speak() const // here const prevents Object to be changed!!
	{
		cout << "My Name is: " << name << endl;
	}
};

int main() {
	cout << "Allocating Memory" << endl; // prints Title

	int *pInt = new int;  // You can use new in any type of object
	*pInt = 8;
	cout << *pInt << endl;
	delete pInt;  //delete the allocated object!

	Animal *pAnimal = new Animal[10];  // creates an array of objects
	pAnimal[5].setName("George");
	pAnimal[5].speak();
	delete [] pAnimal;  // Don't forge the square brackets!

	char *pMem = new char[1000];
	delete [] pMem;

	// set a string with a single or any number of characters
	char c = 'a';
	string name(1,'a');
	cout << name  << endl;
	c++;  // points to b
	string name2(5,c);
	cout << name2  << endl;

	return 0;
}
