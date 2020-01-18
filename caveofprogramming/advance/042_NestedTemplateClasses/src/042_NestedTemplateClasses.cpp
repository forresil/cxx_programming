//============================================================================
// Name        : 042_NestedTemplateClasses.cpp
// Author      : S. Forrer
// Version     :
// Copyright   : This code comes from Udemy C++ Courses
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "ring.h"
using namespace std;

int main() {
	cout << "Nested Template Classes/n" << endl; // prints Title/n

	ring<int>::iterator1 it;
	it.print();

	ring<int>::iterator2 it2;
	it2.print();

//	cout << *it << std::endl;

//	ring<string> textring(3);
//
//	textring.add("one");
//	textring.add("two");
//	textring.add("three");
//	textring.add("four");
//
//	for(int i=0; i<textring.size(); i++){
//		cout << textring.get(i) << endl;
//	}

	/*
	 * Output should be
	 * four
	 * one
	 * two
	 */

	return 0;
}
