//============================================================================
// Name        : Inheritance.cpp
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
	void speak()
	{
		cout << "Grrr" << endl;
	}
};

class Cat: public Animal
{
public:
	void jump()
	{
		cout << "Cat jumping!" << endl;
	}
};

class Tiger: public Cat
{
public:
	void attackAntelope()
	{
		cout << "Attacking!" << endl;
	}
};

int main()
{
	cout << "Inheritance" << endl; // prints Title

	Animal a;
	a.speak();

	Cat cat;
	cat.speak();
	cat.jump();

	Tiger tiger;
	tiger.speak();
	tiger.jump();
	tiger.attackAntelope();

	return 0;
}
