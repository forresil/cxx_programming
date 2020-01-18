//============================================================================
// Name        : References.cpp
// Author      : forresil
// Version     :
// Copyright   : C++ Tutorial for Complete Beginers (Udemy)
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void changeSomething(double value) // (double value = valueX)!
{
	value = 123.4;
}
void changeSomethingRef(double &value) // (double &value = valueX)!
{
	value = 123.4;
}

int main()
{
	cout << "References\n" << endl; // prints Title

	int value1 = 8;
	cout << "original value1: " << value1 << endl;

	int value2 = value1;
	int &value3 = value1;  //value3 is just another name for value1!
	value2 = 10;
	value3 = 3;

	cout << "Value1: " << value1 << endl;
	cout << "Value2: " << value2 << endl;
	cout << "Value3: " << value3 << endl;

	cout << endl;

	double value = 432.1;
	changeSomething(value);
	cout << "change without reference: " << value << endl;
	changeSomethingRef(value);
	cout << "change with reference: " << value << endl;

	return 0;
}
