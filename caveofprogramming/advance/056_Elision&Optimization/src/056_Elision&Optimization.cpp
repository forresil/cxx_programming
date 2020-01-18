//============================================================================
// Name        : 056_Elision&Optimization.cpp
// Author      : S. Forrer
// Version     :
// Copyright   : This code comes from Udemy C++ Courses
// Description :
//
// Copy Elision --> (aka, Copy Omittion)
//In C++ computer programming, copy elision refers to a compiler
// optimization technique that eliminates unnecessary copying of objects.
// The C++ language standard generally allows implementations to perform any
// optimization, provided the resulting program's observable behavior is the same as
// if, i.e. pretending, the program were executed exactly as mandated by the
// standard. --> Wikipedia
//============================================================================

#include <iostream>
#include <vector>

using namespace std;

class Test{
public:
	Test(){
		cout << "constructor" << endl;
	}

	Test(int i){
		cout << "parameterized constructor" << endl;
	}

	Test(const Test &other){
		cout << "copy constructor" << endl;
	}

	~Test(){
		cout << "destructor" << endl;
	}

	friend ostream &operator<<(ostream &out, const Test &test);
};

ostream &operator<<(ostream &out, const Test &test){
	out << "Hello form test" << endl;
	return out;
}

Test getTest(){
	return Test();
}

int main() {
	cout << "Elision and Optimization \n" << endl; // prints Title\n

	cout << "Test test1 = getTest(): " << endl;
	Test test1 = getTest();
	cout << test1 << endl;
	/*
	 * This statements return with a C++98 compiler
	 * constructor -> from getTest() return Test();
	 * copy constructor -> when return Test passes the newly created object to
	 * 						the temporary output variable of function Test getTest()
	 * destructor	-> when the destructor of the first created Test object
	 * 					(return Test()) is called.
	 * copy constructor -> when Test test1 is loaded with the getTest() output object.
	 * destructor -> when the output object of getTest() is destroyed
	 * Hello from test -> from the << operator
	 * destructor -> when return 0 terminates the program and test1 is destroyed.
	 */

	cout << "vector<Test()> vec {Test()}: " << endl;
	vector<Test> vec{Test()};
	//vec.push_back(Test()); // C++98
	cout << endl;

	return 0;
}
