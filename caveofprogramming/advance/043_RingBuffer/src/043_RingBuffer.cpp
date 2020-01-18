//============================================================================
// Name        : 043_RingBuffer.cpp
// Author      : S. Forrer
// Version     :
// Copyright   : This code comes from Udemy C++ Courses
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "ring.h"

using namespace std;

int main() {
	cout << "Ring Buffer\n" << endl; // prints Title/n

	// Declares a new ring buffer with 3 members of type T
	ring<string> textring(3);

	textring.add("one");  //this entry is going to be overwritten with "four"!
	textring.add("two");
	textring.add("three");
	textring.add("four");

	for(int i=0; i < textring.size(); i++){
		cout << textring.get(i) << endl;
	}


	return 0;
}
