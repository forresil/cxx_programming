//============================================================================
// Name        : This.cpp
// Author      : forresil
// Version     :
// Copyright   : C++ Tutorial for Complete Beginers (Udemy)
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

#include "Person.h"
using namespace std;

int main()
{
	cout << "This" << endl; // prints This

	Person person1;
	Person person2("Bob", 42);
	Person person3("Sue", 25);

	cout << person1.toString() << "; memory location: " << &person1 << endl;
	cout << person2.toString() << "; memory location: " << &person2 << endl;
	cout << person3.toString() << "; memory location: " << &person3 << endl;
	person1.memInfo();
	person2.memInfo();
	person3.memInfo();

	return 0;
}
