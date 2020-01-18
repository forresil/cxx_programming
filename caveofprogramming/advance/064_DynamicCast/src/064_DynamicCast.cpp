//============================================================================
// Name        : 063_StaticCast.cpp
// Author      : S. Forrer
// Version     :
// Copyright   : This code comes from Udemy C++ Courses
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Parent {
public:
	virtual void speak() {
		cout << "parent" << endl;
	}
};

class Brother: public Parent {

};

class Sister: public Parent {

};
/**
 * In this program we are reinterpreting a brother class as sister.
 * @return
 */
int main() {
	cout << "Reinterpret Cast\n" << endl; // prints Title\n

	Parent parent;
	Brother brother;
	Sister sister;

	Parent *ppb = &brother;

	// This here is really very stupid... but reinterpret_cast makes it possible!
	Sister *psp = reinterpret_cast<Sister *> (ppb);
	cout << psp << endl;

	return 0;
}
