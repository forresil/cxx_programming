//============================================================================
// Name        : ConstructorsOverloading.cpp
// Author      : forresil
// Version     :
// Copyright   : C++ Tutorial for Complete Beginers (Udemy)
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>

#include "Person.h"

using namespace std;

int main()
{
	Person person1;
	Person person2("Bob");
	Person person3("Sue", 35);

	cout << person1.toString() << endl;
	cout << person2.toString() << endl;
	cout << person3.toString() << endl;

	return 0;
}
