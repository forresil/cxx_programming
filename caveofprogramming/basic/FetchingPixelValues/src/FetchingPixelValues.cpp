//============================================================================
// Name        : FetchingPixelValues.cpp
// Author      : forresil
// Version     :
// Copyright   : C++ Tutorial for Complete Beginers (Udemy)
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

using namespace std;

int main()
{
	cout << "Fetching Pixel Values with Binary AND\n"; // prints Title\n
	cout << "/////////////////////////////////////////" << endl;

	int color = 0x123456;

	int red = (color & 0xFF0000) >> 16;
	//color : 0001 0010 0011 0100 0101 0110
	//mask  : 1111 1111 0000 0000 0000 0000 &
	//---------------------------------
	//result: 0001 0010 0000 0000 0000 0000

	int green = (color & 0x00FF00) >> 8;
	int blue = (color & 0x0000FF);

	cout << hex << (int) red << endl;
	cout << hex << (int) green << endl;
	cout << hex << (int) blue << endl;

	// or do the following (works for me at least)
	unsigned char redAgain = color >> 16;
	cout << hex << (int) redAgain << endl;

	return 0;
}
