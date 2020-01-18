//============================================================================
// Name        : SizeOfMultidimensionalArrays.cpp
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

	//Declare and define the array
	string animals[2][3]
	{
	{ "fox", "dog", "cat" },
	{ "mouse", "squirrel", "parrot" } };

	// Calculate rows and columns
	unsigned int rows = sizeof(animals) / sizeof(animals[0]);
	unsigned int cols = sizeof(animals[0]) / sizeof(string);

	cout << "Size of string: " << sizeof(string) << endl;
	cout << "Size of array in Bytes: " << sizeof(animals) << endl;
	cout << "Number of Rows: " << rows << endl;
	cout << "Number of Colums: " << cols << endl;

	// Print array
	for (unsigned int i = 0; i < rows; ++i)
	{
		for (unsigned int j = 0; j < cols; ++j)
		{
			cout << "\t" << animals[i][j] << flush;
		}
		cout << endl;
	}

	return 0;
}
