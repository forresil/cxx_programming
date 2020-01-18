//============================================================================
// Name        : DataMembers.cpp
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
	// prints Program: Data Members
	cout << "Program: Data Members\n----------------------" << endl;

	Cat jim;
//	jim.happy = true;
	jim.makeHappy();
	jim.speak();

	Cat bob;
//	bob.happy = true;
	bob.makeSad();
	bob.speak();

	return 0;
}
