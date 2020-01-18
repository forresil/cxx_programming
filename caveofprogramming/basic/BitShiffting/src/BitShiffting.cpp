//============================================================================
// Name        : BitShiffting.cpp
// Author      : forresil
// Version     :
// Copyright   : C++ Tutorial for Complete Beginers (Udemy)
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	cout << "Bit Shifting\n" << endl; // prints Title\n

	// 0xFF1123456
	unsigned char alpha = 0xFF;
	unsigned char red = 0x12;
	unsigned char green = 0x34;
	unsigned char blue = 0x56;

	unsigned int color = 0;
	cout << setfill('0') << setw(8) << hex << color << endl;

	color += alpha;
	cout << setfill('0') << setw(8) << hex << color << endl;
	color <<= 8; // shift bits 8x to the left
	color += red;
	cout << setfill('0') << setw(8) << hex << color << endl;
	color <<= 8; // shift bits 8x to the left
	color += green;
	cout << setfill('0') << setw(8) << hex << color << endl;
	color <<= 8; // shift bits 8x to the left
	color += blue;
	cout << setfill('0') << setw(8) << hex << color << endl;

	return 0;
}
