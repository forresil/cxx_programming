//============================================================================
// Name        : Arrays.cpp
// Author      : forresil
// Version     :
// Copyright   : C++ Tutorial for Complete Beginers (Udemy)
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{
	cout << "Program: Arrays" << endl; // prints Program: Arrays

	cout << "\nArray of Integers" << endl;
	cout << "-----------------------" << endl;
	int values[3];

	values[0] = 88;
	values[1] = 123;
	values[2] = 7;

	cout << values[0] << endl;
	cout << values[1] << endl;
	cout << values[2] << endl;
	cout << "Bad idea: " << values[3] << endl;

	cout << "\nArray of Doubles" << endl;
	cout << "-----------------------" << endl;

	double numbers[4] =
	{ 4.5, 2.3, 7.2, 8.1 };

	//Print out the array
	for (int i = 0; i < 4; ++i)
	{
		cout << "Element of index " << i << ": " << numbers[i] << endl;
	}

	//Initialize the array with Zeros!
	cout << "\nArray of Int initialized to Zeroes" << endl;
	cout << "-----------------------" << endl;
	int numberArray[8] =
	{ };
	for (int i = 0; i < 4; ++i)
	{
		cout << "Element of index " << i << ": " << numberArray[i] << endl;
	}

	//Array of Strings
	cout << "\nArray of Strings" << endl;
	cout << "-----------------------" << endl;
	string text[] =
	{ "apple", "banana", "orange" }; // array is sized automatically
	for (int i = 0; i < 3; ++i)
	{
		cout << "Element of index " << i << ": " << text[i] << endl;
	}

	return 0;
}
