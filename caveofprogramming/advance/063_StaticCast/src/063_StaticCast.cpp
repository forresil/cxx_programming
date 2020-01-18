//============================================================================
// Name        : 063_StaticCast.cpp
// Author      : S. Forrer
// Version     :
// Copyright   : This code comes from Udemy C++ Courses
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Parent{
public:
	void speak(){
		cout << "parent" << endl;
	}
};

class Brother: public Parent{

};

class Sister: public Parent{

};

int main() {
	cout << "Static Cast\n" << endl; // prints Title\n

	Parent parent;
	Brother brother;

	float value = 3.123;
	cout << value << endl;
	cout << (int)value << endl; // casting it to be an integer in C style;
	cout << int(value) << endl; // constructing an integer in C++98 style;
	cout << static_cast<int>(value) << endl; // this replace the C style cast!

	Parent *pp = &brother; // uses polymorphism to cast subclass to parent class.
	cout << pp << endl;

	Brother *pb = static_cast<Brother *>(&parent);
	cout << pb << endl;

	Parent &&rpp = Parent(); // OK
	//Parent &&rpp2 = parent; //NOK we're binding a Rvalue to a Lvalue!
	Parent &&rpp2 = static_cast<Parent &&>(parent);
	rpp2.speak();

	return 0;
}
