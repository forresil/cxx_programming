//============================================================================
// Name        : 055_DelegatingConstructors.cpp
// Author      : S. Forrer
// Version     :
// Copyright   : This code comes from Udemy C++ Courses
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Parent{
	int dogs{5}; // will be initialized by default constructor
	string text{"hello"}; // will be initialized by default constructor

public:
	// Parent constructor delegates string initialization to the parameterized constructor.
	Parent():Parent("Init-Text"){  // only C++11
		cout << "No parameter parent constructor " << endl;
	}

	Parent(string text){
		cout << "string parameterized parent constructor" << endl;
	}
};

class Child : public Parent{
public:
	// Child constructor delegates initialization to the parameterized parent constructor
	Child():Parent("hello Child"){

	}
};

class Child2 : public Parent{
public:
	// Child2 delegates initialization to the Parent constructor. (C++98 style)
	Child2(){

	}
};

class Child3 : public Parent{
public:
	//Child3 also delegates initialization to  the Parent constructor. (C++11 style)
	Child3() = default; // implicitly declares that we use the default Parent constructor.
};


int main() {
	cout << "Delegating Constructors\n" << endl; // prints Title\n

	cout << "Parent parent(\"Hello\") calls: " << endl;
	Parent parent("Hello");

	cout << "\nChild child calls: " << endl;;
	Child child;

	cout << "\nChild2 child2 calls:" << endl;
	Child2 child2;

	cout << "\nChild3 child3 calls:" << endl;
	Child3 child3;



	return 0;
}
