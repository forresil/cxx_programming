//============================================================================
// Name        : FloatingPointTypes.cpp
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
	cout << "Floating Point Types" << endl; // prints Floating Point Types
	cout << "---------------------------" << endl;

	float fValue = 123.456789;
	cout << "Float (size: " << sizeof(float) << " Bytes)" << endl;
	cout << "containing:\t123.456789 " << endl;
	cout << "returns:\t" << setprecision(20) << fixed << fValue << endl << endl;

	double dValue = 123.456789;
	cout << "Double (size: " << sizeof(double) << " Bytes)" << endl;
	cout << "containing:\t123.456789 " << endl;
	cout << "returns:\t" << setprecision(20) << fixed << dValue << endl << endl;

	long double ldValue = 123.456789876543210;
	cout << "Long Double (size: " << sizeof(long double) << " Bytes)" << endl;
	cout << "containing:\t123.456789876543210" << endl;
	cout << "returns:\t" << setprecision(20) << fixed << ldValue << endl;

	return 0;
}
