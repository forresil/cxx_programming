//============================================================================
// Name        : 039_Decltype&Typeid.cpp
// Author      : S. Forrer
// Version     :
// Copyright   : This code comes from Udemy C++ Courses
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <typeinfo>

using namespace std;

int main() {
	cout << "Decltype, Typeid and Name Mangling" << endl; // prints Title/n

	int integerValue;
	double doubleValue;
	string stringValue;

	cout << "Show typeid usage..."  << endl;
	cout << "tpyeid of integerValue: " << typeid(integerValue).name() << endl;
	cout << "typeid of doubleValue: " << typeid(doubleValue).name() << endl;
	// Name Mangling!
	cout << "typeid of stringValue: " << typeid(stringValue).name() << endl;


	// Declare variables of an existing type!
	cout << "\nShow decltype usage..." << endl;
	decltype(stringValue) name = "Bob";
	cout  << name << endl;

	return 0;
}
