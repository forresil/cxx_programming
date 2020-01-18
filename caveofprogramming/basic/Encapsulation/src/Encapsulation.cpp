//============================================================================
// Name        : Encapsulation.cpp
// Author      : forresil
// Version     :
// Copyright   : C++ Tutorial for Complete Beginers (Udemy)
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Frog
{
	// Private instant data
private:
	string name;

private:
	// Private methods
	string getName()
	{
		return name;
	}

public:
	Frog(string name) :
			name(name)
	{
	}

	// Display frog info
	void info()
	{
		cout << "My name is: " << getName() << endl;
	}
};

int main()
{
	cout << "Encapsulation" << endl; // prints Title

	Frog frog("Freddy");
	//cout << frog.getName() << endl; // Private
	frog.info();

	return 0;
}
