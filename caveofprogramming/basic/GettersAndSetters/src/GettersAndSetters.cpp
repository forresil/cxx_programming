//============================================================================
// Name        : GettersAndSetters.cpp
// Author      : forresil
// Version     :
// Copyright   : C++ Tutorial for Complete Beginers (Udemy)
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

#include "Person.h"

using namespace std;

int main() {
	cout << "Program: Getters & Setters\n----------------------" << endl;
	//A Person
	Person person;
	person.setName("Georgina");
	cout << person.toString() << endl; //Print the name of "person"
	cout << "Name of person with Get-Method: " << person.getName() << endl;
	return 0;
}
