//============================================================================
// Name        : do-while.cpp
// Author      : forresil
// Version     :
// Copyright   : C++ Tutorial for Complete Beginers (Udemy)
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{
	cout << "Program: do-while" << endl; // prints do-while

	//Define constants at a single place in your program.
	const string password = "hello";

	//Declare variables next to where they are used.
	string input;

	do
	{
		cout << "Enter your password > " << flush;
		cin >> input;
		if (input != password)
		{
			cout << "Access denied." << endl;
		}
	} while (input != password);

	cout << "Password accepted." << endl;

	return 0;
}
