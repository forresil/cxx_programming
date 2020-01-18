//============================================================================
// Name        : PointersAndArrays.cpp
// Author      : forresil
// Version     :
// Copyright   : C++ Tutorial for Complete Beginers (Udemy)
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{
	cout << "Pointers & Arrays" << endl; // prints Pointers & Arrays

	// ARRAY
	string texts[] =
	{ "one", "two", "three" };

	// LENGHT of ARRAY
	cout << sizeof(texts) / sizeof(string) << endl;

	// PRINT ARRAY
	for (unsigned int i = 0; i < sizeof(texts) / sizeof(string); ++i)
	{
		cout << texts[i] << " " << flush;
	}

	cout << endl;

	// With pointers....
	string *pTexts = texts;

	for (unsigned int i = 0; i < sizeof(texts) / sizeof(string); ++i)
	{
		cout << pTexts[i] << " " << flush;
	}

	cout << endl;

	// Also, with pointers controlled by the FOR-LOOP
	for (unsigned int i = 0; i < sizeof(texts) / sizeof(string); ++i, pTexts++)
	{
		cout << *pTexts << " " << flush;
	}

	cout << endl;

	// With START and END Pointers
	string *pElement = &texts[0];  // pointer to the start of the array
	string *pEnd = &(texts[2]); // pointer to the end of the array

	while(true){
		cout << *pElement << " " << flush;

		if (pElement == pEnd) {
			break;
		}
		pElement++;
	}




	return 0;
}
