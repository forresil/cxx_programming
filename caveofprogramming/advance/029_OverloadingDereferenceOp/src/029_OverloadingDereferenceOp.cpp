//============================================================================
// Name        : 029_OverloadingDereferenceOp.cpp
// Author      : S. Forrer
// Version     :
// Copyright   : Udemy Advanced C++, Cave Programming Tutorial
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Complex.h"

using namespace std;

int main() {
	cout << "Overload Dereference OPerator\n" << endl; // prints Title\n

	forresil::Complex c1(2,4);

	cout << c1 << endl;
	cout << *c1 << endl;
	cout << *c1 + forresil::Complex(3,4) << endl;
	cout << *c1 + *forresil::Complex(3,4) << endl;

	return 0;
}
