//============================================================================
// Name        : switch.cpp
// Author      : forresil
// Version     :
// Copyright   : C++ Tutorial for Complete Beginers (Udemy)
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{
	cout << "Program: Switch\n----------------" << endl; // prints Program: Switch

	int value = 4;

 	const int number = 4; // int constant used as case

	switch (value)
	{
	case number:
		cout << "Value is 4." << endl;
		break;
	case 5:
		cout << "Value is 5." << endl;
		break;
	case 6:
		cout << "Value is 6." << endl;
		break;
	default:
		cout << "Unrecognized value." << endl;
		break;
	}

	return 0;
}
