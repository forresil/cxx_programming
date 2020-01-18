//============================================================================
// Name        : OtherTypes.cpp
// Author      : forresil
// Version     :
// Copyright   : C++ Tutorial for Complete Beginers (Udemy)
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{
	cout << "Other Types" << endl; // prints Other Types
	cout << "---------------------------" << endl;

	bool bValue = true;
	cout << "\nBoolean Type\n";
	cout << bValue << endl; //print 1, because true = 1!

	char cValue = 'g';
	cout << "\nChar Type:\n";
	cout << "This is a char: " << cValue << endl;
	cout << "Size of char: " << sizeof(char) << " Bytes" << endl;

	wchar_t wValue = 'ä';
	cout << "\nWChar Type\n";
	cout << "This is a WChar: " << wValue << endl;
	cout << "This is a char casted Wchar: " << (char) wValue << endl;
	cout << "Size of wchar_t: " << sizeof(wchar_t) << " Bytes" << endl;

	return 0;
}
