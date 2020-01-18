//============================================================================
// Name        : 028_OverloadingComparisonOp.cpp
// Author      : S. Forrer
// Version     :
// Copyright   : Udemy Advanced C++, Cave Programming Tutorial
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Complex.h"

using forresil::Complex;
using namespace std;

int main() {
	cout << "Overloading Comparison Operator\n" << endl; // prints Title\n

	Complex c1(3,2);
	Complex c2(3,2);

	// using ==
	if(c1 == c2){
		cout << "Equals" << endl;
	}
	else{
		cout << "Not equal" << endl;
	}

	// using !=
	if(c1 != c2){
		cout << "Not equal" << endl;
	}
	else{
		cout << "equal" << endl;
	}

	return 0;
}
