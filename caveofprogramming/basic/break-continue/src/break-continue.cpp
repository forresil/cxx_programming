//============================================================================
// Name        : break-continue.cpp
// Author      : forresil
// Version     :
// Copyright   : C++ Tutorial for Complete Beginers (Udemy)
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{
	cout << "Program: break-continue" << endl; // prints Program: break-continue

// break...
//////////////////////////////////////////////

//	for (int i = 0; i < 5; ++i)
//	{
//		cout << "i is: " << i << endl;
//
//		if (i == 3)
//		{
//			break;
//		}
//
//		cout << "looping..." << endl;
//	}

// continue...
//////////////////////////////////////////////
//	for (int i = 0; i < 5; ++i)
//	{
//		cout << "i is: " << i << endl;
//
//		if (i == 3)
//		{
//			continue;
//		}
//
//		cout << "looping..." << endl;
//	}
//
//	cout << "Program quitting..." << endl;

	//Define constants at a single place in your program.
	const string PASSWORD = "hello";
	const int MAX_NUMBER_OF_TRIES = 3;

	//Declare variables next to where they are used.
	string input; //user input
	int numOfTries = 0; // actual intent number
	bool match = false; // user input match password

	do
	{
		cout << "Enter your password > " << flush;
		cin >> input;

		if(input == PASSWORD) {
			match= true;
			break;
		}

		if (input != PASSWORD && numOfTries > MAX_NUMBER_OF_TRIES)
		{
			match = false;
			break;
		}
		else
		{
			cout << "Password is wrong, try again.. > " << endl;
			numOfTries++;
			continue;
		}
	} while (input != PASSWORD);




	if (match)
	{
		cout << "Password accepted." << endl;
	}
	else
	{
		cout << "Access denied." << endl;
	}

	return 0;
}
