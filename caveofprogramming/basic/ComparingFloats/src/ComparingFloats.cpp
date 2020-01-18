//============================================================================
// Name        : ComparingFloats.cpp
// Author      : forresil
// Version     :
// Copyright   : C++ Tutorial for Complete Beginers (Udemy)
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	cout << "Comparing Floats" << endl; // prints Comparing Floats

	float value1 = 1.1;
	if (value1 == 1.1)
	{
		cout << "equals" << endl;
	}
	else
	{
		cout << "not equals" << endl;
	}

	cout << "actual value of value1: " << setprecision(10) << value1 << endl;
	return 0;
}
