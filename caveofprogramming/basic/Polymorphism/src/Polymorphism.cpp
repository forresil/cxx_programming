//============================================================================
// Name        : Polymorphism.cpp
// Author      : forresil
// Version     :
// Copyright   : C++ Tutorial for Complete Beginers (Udemy)
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Animal
{
public:
	// virtual creates a v-table to look for the correct method of the derived class
	// if the method is not declared as virtual always "????.." is used.
	// Whit "method()=0;" any Descendant MUST have their own method's implementation.
	virtual void speak()=0;

	// Destructors should always be declared as virtual!
	virtual ~Animal()
	{
	}
	;
};

class Cat: public Animal
{
public:
	//Descendant objects MAY have their own "speak()" implementation.
	virtual void speak()
	{
		cout << "RrrrRrrrrrr" << endl;
	}

	virtual ~Cat()
	{
	}
	;
};

class HouseCat: public Cat
{
public:
	void speak()
	{
		cout << "Meeouww" << endl;
	}
	virtual ~HouseCat()
	{
	}
	;
};

class OtherCat: public Cat
{
public:
	virtual ~OtherCat()
	{
	}
	;
};

int main()
{
	cout << "Title\n" << endl; // prints Title\n

	Animal *pAnimal1 = new Cat; //you can use the derive class when super class is expected.
	pAnimal1->speak(); // uses speak() implementation of Cat
	delete pAnimal1;

	Animal *pAnimal2 = new HouseCat;
	pAnimal2->speak();// uses speak() implementation of HouseCat
	delete pAnimal2;

	Animal *pAnimal3 = new OtherCat;
	pAnimal3->speak(); // uses speak() implementation of Cat since OtherCat doesn't has one!
	delete pAnimal3;

	return 0;
}
