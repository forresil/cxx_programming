//============================================================================
// Name        : CharArrays.cpp
// Author      : forresil
// Version     :
// Copyright   : C++ Tutorial for Complete Beginers (Udemy)
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{
	cout << "Char Arrays\n" << endl; // prints Char Arrays

	char hello[] =
	{ 'h', 'e', 'l', 'l', 'o' };  // \n missed
	cout << hello << endl;  //this line produces garbage!!

	char world[] = "world";
	cout << world << endl;

	for (int i = 0; i < sizeof(hello); i++)
	{
		cout << i << ": " << hello[i] << " " << (int)hello[i]<< endl;
	}
	cout << endl;
	for (int i = 0; i < sizeof(world); i++)
	{
		cout << i << ": " << world[i] << endl;
	}


	int k=0;
	while(true){
		if(hello[k]==0)
			break;
		cout << hello[k] << flush;

		k++;
	}
	return 0;
}
