//============================================================================
// Name        : BasicExceptions.cpp
// Author      : S. Forrer
// Version     :
// Copyright   : Udemy Advanced C++, Cave Programing Tutorial
// Description : Basic Exceptions in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void mightGoWrong()
{
	bool error0 = false;
	bool error1 = false;
	bool error2 = true;

	if (error0)
	{
		throw 8;
	}
	if (error1)
	{
		throw "Something went wrong!";
	}
	if (error2)
	{
		throw string("Something else went wrong!"); //throw an object as error!
	}
}

void usesMightGoWrong()
{
	mightGoWrong();
}

int main()
{
	cout << "Basic Exceptions\n" << endl; // prints Title\n

	try
	{
		usesMightGoWrong();
	} catch (int e)  // called if functions throws an integer
	{
		cout << "Error code: " << e << endl;
	} catch (char const * e) //called if function throws a character array.
	{
		cout << "Error message: " << e << endl;
	} catch (string &e)  // <--- objects should be passed by reference!
	{
		cout << "string error message: " << e << endl;
	}

	cout << "Still running!" << endl;

	return 0;
}
