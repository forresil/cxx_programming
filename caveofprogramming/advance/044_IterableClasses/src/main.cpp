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
	//textring.add("four");

	// C++98 Style
	// if we make that the following for loop iterator work, any C++11 loop will work!
	for (ring<string>::iterator it = textring.begin(); it != textring.end();
			it++) {
		cout << *it << endl;
	}

	cout << endl;

	// C++11 Style
	for (auto value : textring) {
		cout << value << endl;
	}

	cout << endl;

	for (int i = 0; i < textring.size(); i++) {
		cout << textring.get(i) << endl;
	}

	return 0;
}
