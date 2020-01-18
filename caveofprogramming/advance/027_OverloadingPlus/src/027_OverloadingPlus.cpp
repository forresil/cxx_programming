//============================================================================
// Name        : 027_OverloadingPlus.cpp
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
	cout << "Overloading the PLUS Operator\n" << endl; // prints Title\n

	// Adding two or more complex numbers!
	Complex c1(3, 4);
	Complex c2(2, 3);
	Complex c3 = c1 + c2;
	cout << "c1 + c2 + c3 = " << c1 << " + " << c2 << " + " << c3 << " = "
			<< c1 + c2 + c3 << endl;

	// Adding a "double" to a complex number!
	Complex c4(4, 2);
	Complex c5 = c4 + 7;
	cout << "c4 + 7 = " << c4 << " + " << 7 << " = " << c5 << endl;


	// Adding a complex number to a double!
	Complex c6 = 3.2 + c4;
	cout << "3.2 + c4 = " << 3.2 << " + " << c4 << " = " << c6 << endl;

	// Adding it all..
	cout << 7 + c1 + c2 + 8 + 9 + c6 << endl;


	return 0;
}
