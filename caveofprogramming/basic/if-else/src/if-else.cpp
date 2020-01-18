//============================================================================
// Name        : if-else.cpp
// Author      : forresil
// Version     :
// Copyright   : C++ Tutorial for Complete Beginers (Udemy)
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{
	cout << "if-else" << endl; // prints if-else

	cout << "1.\tAdd new record." << endl;
	cout << "2.\tDelete record." << endl;
	cout << "3.\tView record." << endl;
	cout << "4.\tSearch record." << endl;
	cout << "5.\tQuit." << endl;

	cout << "Enter your selection > " << flush;

	int value;
	cin >> value;

	if (value < 3)
	{
		cout << "Insufficient privileges to use these menu option." << endl;
	}
	else
	{
		cout << "Privileges level sufficient." << endl;
	}

	if (value == 5)
	{
		cout << "Application quitting..." << endl;
	}
	else
	{
		cout << "Not quitting." << endl;
	}
	return 0;
}
