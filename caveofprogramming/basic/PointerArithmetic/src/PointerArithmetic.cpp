//============================================================================
// Name        : PointerArithmetic.cpp
// Author      : forresil
// Version     :
// Copyright   : C++ Tutorial for Complete Beginers (Udemy)
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	cout << "Pointer Arithmetic" << endl; // prints Pointers & Arrays

	const int NSTRINGS = 5;

	string texts[NSTRINGS]={"one","two","three","four","five"};
	string *pTexts = texts;
	cout << *pTexts << endl;

	pTexts++;
	cout << *pTexts << endl;

	pTexts+=2;
	cout << *pTexts << endl;


	cout << "\ncompare pointers..." << endl; //compare pointers
	string *pStart = texts;
	string *pEnd = &texts[NSTRINGS];
	pTexts=pStart;
	while(pTexts != pEnd){
		cout << *pTexts << endl;
		pTexts++;
	}


	// Set pTexts back to start.
	pTexts = &texts[0];

	long elements = (long)(pEnd -pTexts);

	cout << "\nTotal number of Elements: " << elements << endl;

	// Set pTexts back to start.
	pTexts = &texts[0];

	pTexts += NSTRINGS/2;
	cout << "\n"<<*pTexts  << endl;
	return 0;
}
