//============================================================================
// Name        : multidimensional-arrays.cpp
// Author      : forresil
// Version     :
// Copyright   : C++ Tutorial for Complete Beginers (Udemy)
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{
	cout << "Program: Multidimensional Arrays" << endl; // prints Program: Multidimensional Arrays

	//Declare and define the array
	string animals[2][3]
	{
	{ "fox", "dog", "cat" },
	{ "mouse", "squirrel", "parrot" } };

	//Print the array
	cout << "Animals-Array:" << endl;
	for (int i = 0; i < 2; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			cout << "\t" << animals[i][j] << " " << flush;
		}
		cout << endl;
	}

	return 0;
}
