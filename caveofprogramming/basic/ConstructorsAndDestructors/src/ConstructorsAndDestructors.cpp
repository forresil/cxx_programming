//============================================================================
// Name        : ConstructorsAndDestructors.cpp
// Author      : forresil
// Version     :
// Copyright   : C++ Tutorial for Complete Beginers (Udemy)
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

#include "Cat.h"

using namespace std;

int main()
{
	cout << "Program: Constructors and Destructors starting..." << endl;

	// Destructor of this instance will be called when main() exits!!!
	Cat jim;
	jim.speak();

	//Deallocate Memory to call the Cat-Destructor  before main() ends.
	//Every instance is destroyed when leaving his scope.
	{
		Cat bob;
		bob.speak();
	}

	cout << "Program: Constructors and Destructurs ending..." << endl;
	return 0;
}
