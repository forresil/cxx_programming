//============================================================================
// Name        : 051_LambdaCaptureExpressions.cpp
// Author      : S. Forrer
// Version     :
// Copyright   : This code comes from Udemy C++ Courses
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	cout << "Lambda Capture Expressions\n" << endl; // prints Title\n

	int one{1};
	int two{2};
	int three{3};

	// Capture one and two by value
	[one, two](){cout << one << ", " << two << endl;}();

	// Capture all local variables by value
	[=](){cout << one << ", " << two << ", " << three << endl;}();

	// Default capture all local variables by value, but capture three by reference.
	[=, &three](){three=31; cout << one << ", " << two << ", " << three << endl;}();
	cout << three << endl;

	// Default capture all local variables by reference.
	[&](){three=31; two=21; one=11; cout << one << ", " << two << ", " << three << endl;}();
	cout << three << endl;

	// Default capture all local variables by reference, but two by value;
	[&, two](){three=33; int mytwo=two; mytwo=2; one=12; cout << one << ", " << mytwo << ", " << three << endl;}();
	cout << three << endl;
	return 0;
}
