//============================================================================
// Name        : StandardExceptions.cpp
// Author      : S. Forrer
// Version     :
// Copyright   : Udemy Advanced C++, Cave Programing Tutorial
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class CanGoWrong
{
public:
	CanGoWrong()
	{
		char *pMemory = new char[9999999999999999];
		delete[] pMemory;
	}
};

int main()
{
	cout << "Standard Exceptions\n" << endl; // prints Title\n
	cout << "---------------------" << endl;

	try
	{
		CanGoWrong wrong;
	} catch (bad_alloc &e)
	{ //memory allocation exceptios throws an object of type bad_alloc!
		cout << "Caught exception: " << e.what() << endl; // e.what() returns an explanation of the error
	}

	cout << "Still running" << endl;

	return 0;
}
