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

int main() {
	cout << "Static Cast\n" << endl; // prints Title\n

	Parent parent;
	Brother brother;

	// ok
	Parent *ppb = static_cast<Parent*>(&brother);
	cout << "static_cast: " << ppb << endl;

	// unsafe, but legal!!!
	Parent *pp = &parent;
	Brother *pbp = static_cast<Brother*>(pp);

	// safe!
	Brother *pbp2 = dynamic_cast<Brother*>(pp);
	// dynamic_cast returns a null pointer if the cast makes no sense!
	if (pbp2 == nullptr) {
		// if we try to cast the parent to a child..
		cout << "invalid cast" << endl;
	} else {
		// if we try to cast a child to other child, is ok...
		cout << "dynamic_cast: " << pbp2 << endl;
	}

	return 0;
}
