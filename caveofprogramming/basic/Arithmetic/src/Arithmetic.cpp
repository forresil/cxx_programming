//============================================================================
// Name        : Arithmetic.cpp
// Author      : forresil
// Version     :
// Copyright   : C++ Tutorial for Complete Beginers (Udemy)
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{
	cout << "Arithmetic" << endl; // prints Arithmetic

	double value1 = 7 / 2;
	cout << value1 << endl;

	// (double) cast
	double value11 = (double) 7 / 2;
	cout << value11 << endl;

	int value2 = 7.3;
	cout << value2 << endl;

	// (int) cast
	int value22 = (int) 7.3;
	cout << value22 << endl;

	// +=
	int value3 = 8;
	value3 += 1; // value3 = value3 + 1 or value3++..
	cout << value3 << endl;

	// /=
	int value4 = 10;
	value4 /= 5; // value4 = value4/5;
	cout << value4 << endl;

	// %=
	int value5 = 13 % 5;
	cout << value5 << endl;

	// precedence
	double equation = ((5 / 4) % 2) + (2 * 6);
	cout << equation << endl;

	return 0;
}
