//============================================================================
// Name        : sizeof.cpp
// Author      : forresil
// Version     :
// Copyright   : C++ Tutorial for Complete Beginers (Udemy)
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{
	cout << "Program: Size Of Arrays" << endl; // prints Program: Size Of Arrays

	int values[] =
	{ 4, 7, 3, 4 };

	cout << "Size of values-Array in Bytes: " << sizeof(values) << endl;
	cout << "Size of int: " << sizeof(int) << endl;

	//calculate size of Array
	int sizeOfValuesArray = sizeof(values) / sizeof(int);

	//Print content of values-Array
	cout << "Content of values array:" << endl;
	for (int i = 0; i < sizeOfValuesArray; ++i)
	{
		cout << "\t" << values[i] << " " << flush;
	}

	cout << endl;

	return 0;
}
