//============================================================================
// Name        : Namespaces.cpp
// Author      : forresil
// Version     :
// Copyright   : C++ Tutorial for Complete Beginers (Udemy)
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

#include "Animals.h"
#include "Cat.h"

using namespace std;
using namespace cats;
using namespace jwp;

int main() {
	cout << "Namespaces" << endl; // prints Title
	//Cat cat;  //-> is ambiguous
	//cat.speak(); // -> is ambiguous

	cats::Cat cat2;
	cat2.speak();

	jwp::Cat cat3;
	cat3.speak();

	cout << jwp::CATNAME << endl;
	cout << cats::CATNAME << endl;
	//cout << CATNAME << endl; // Doesn't work! -> is ambiguous

	return 0;
}
