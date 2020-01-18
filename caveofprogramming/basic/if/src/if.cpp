//============================================================================
// Name        : if.cpp
// Author      : forresil
// Version     :
// Copyright   : C++ Tutorial for Complete Beginers (Udemy)
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "if" << endl; // prints if

	string passsword = "hello";
	cout << "Enter your password > " << flush;

	string input;
	cin >> input;

	//Password is correct
	if (input == passsword)
	{
		cout << "Password accepted." << endl;
	}

	//Password is incorrect
	if (input != passsword)
	{
		cout << "Access denied!" << endl;
	}
	return 0;
}
