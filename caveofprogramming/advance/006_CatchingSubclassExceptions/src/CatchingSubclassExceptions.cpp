//============================================================================
// Name        : CatchingSubclassExceptions.cpp
// Author      : S. Forrer
// Version     :
// Copyright   : Udemy Advanced C++, Cave Programming Tutorial
// Description : Hello World in C++, ANSI-style
//============================================================================

#include <iostream>
using namespace std;

void goesWrong()
{
	bool error1Detected = false;
	bool error2Detected = true;

	if (error1Detected)
	{
		throw bad_alloc();
	}
	if (error2Detected)
	{
		throw exception();
	}
}

int main()
{
	cout << "Catching Subclass Exceptions\n" << endl; // prints Title\n

	// Think about catching exceptions of subclasses before exceptions of parents!!!
	// Here if catch(bad_alloc) stands after catch(exception) only the pice of code in
	// catch(exception) section would be executed since bad_alloc is a subclass of exception!
	try
	{
		goesWrong();
	} catch (bad_alloc &e)
	{
		cout << "Catching bad_alloc: " << e.what() << endl;
	} catch (exception &e)
	{
		cout << "Catching exception: " << e.what() << endl;
	}

	return 0;
}
