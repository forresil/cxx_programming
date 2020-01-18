//============================================================================
// Name        : 026_ComplexNumberClass.cpp
// Author      : S. Forrer
// Version     :
// Copyright   : Udemy Advanced C++, Cave Programming Tutorial
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "Complex.h"

using namespace forresil;
using namespace std;

int main()
{
	cout << "Implementing my own Complex Number Class\n" << endl; // prints Title\n

	Complex c1(2, 3);  	// Calls Parameterized Constructor
	Complex c2 = c1;  	// Calls Copy Constructor
	Complex c3(c2);   	// Implicitly calls Copy Constructor
	Complex c4;

	c4 = c2;			// Calls Overloaded Assignment Operator

	cout << "c1 - created by parameterized Constructor: " << c1 << "\n";
	cout << "c2 - created by copy constructor: " << c2 << "\n";
	cout << "c3 - created implicitly by copy constructor: " << c3 << "\n";
	cout << "c4 - created by default constructor, filled by \"&opearator=\": "
			<< c4 << endl;

	return 0;
}
