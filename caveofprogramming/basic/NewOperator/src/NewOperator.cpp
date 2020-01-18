//============================================================================
// Name        : NewOperator.cpp
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
	Animal(){cout << "Animal " << name << " created." << endl;};

	// Copy Constructor
	// You can't call un-constant methods in a copy constructor! (see speak()!)
	Animal(const Animal& other) :
			name(other.name)
	{
		cout << "Animal " << name << " created by copying." << endl;
	}
	;

	//Destructor
	~Animal(){cout << name << "'s Destructor called" << endl;};

	//Methods
	void setName(string name){this->name = name;};
	void speak() const // here const prevents Object to be changed!!
	{
		cout << "My Name is: " << name << endl;
	}
};

// Passing an object by copy
Animal createAnimal(){
	Animal a;
	a.setName("Bertie");
	return a;
}

// Passing an object as pointer
Animal *createAnimalPtr(){
	Animal *pAnimal = new Animal();
	pAnimal->setName("Pointer");
	return pAnimal;
}


int main() {
	cout << "NEW Operator" << endl; // prints Title

	Animal cat;
	cat.setName("Freddy");
	cat.speak();

	Animal *pCat1 = new Animal(); //Allocate memory for a new object. Don't forget to destroy!!
	(*pCat1).setName("Gustav");
	pCat1->speak();
	delete pCat1;  // must be called after using new to call the destructor!

	cout << "Size of pCat1 in Bytes: " << sizeof(pCat1) << endl;

	Animal frog = createAnimal();
	frog.speak();

	Animal *pFrog = createAnimalPtr();
	pFrog->speak();
	delete pFrog;  // Delete must be called in order to remove the obj from memory

	return 0;
}
