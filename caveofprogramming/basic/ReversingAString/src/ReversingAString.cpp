//============================================================================
// Name        : ReversingAString.cpp
// Author      : forresil
// Version     :
// Copyright   : C++ Tutorial for Complete Beginers (Udemy)
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{
	cout << "Reversing a String\n" << endl; // prints Title

	char text[] = "hello";

	int nChars=sizeof(text)-1; //size of string + '\n'

	char *pStart = text;
	char *pEnd = text + nChars-1;

	cout << "text: " << text << endl;

	while(pStart < pEnd){

		char save = *pStart;

		*pStart = *pEnd;
		*pEnd = save;

		pStart++;
		pEnd--;
	}

	cout <<"inversed text: " << text << endl;

	return 0;
}
