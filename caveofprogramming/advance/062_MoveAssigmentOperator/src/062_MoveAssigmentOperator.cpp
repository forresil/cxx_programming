//============================================================================
// Name        : 058_Rvalues&Lvalues.cpp
// Author      : S. Forrer
// Version     :
// Copyright   : This code comes from Udemy C++ Courses
// Description : Hello World in C++, Ansi-style
//============================================================================


/**
 * RULE OF 3:
 * If you are implementing a copy constructor or an assign operator you will need to
 * implement an Constructor and a Destructor
 */

#include <cstring>
#include <iostream>
#include <vector>

using namespace std;

class Test {
private:
	static const unsigned int SIZE { 10 };
	int *_pBuffer{nullptr}; // Convention: start member variables with an underscore  or with m

public:
	Test() {
		cout << "constructor" << endl;
		_pBuffer = new int[SIZE] { }; // initialize array with zeros
		// or you also can initialize array values with zeros on using:
		// memset(_pBuffer, 0, SIZE);
	}

	Test(unsigned int mult) :
			Test() {
		cout << "parameterized constructor" << endl;

		for (unsigned int i = 0; i < SIZE; i++) {
			_pBuffer[i] = 7 * mult;
		}
	}

	// Copy Cosntructor
	Test(const Test &other) :
			Test() { /*Lets initialize _pBuffer with constructor*/
		cout << "copy constructor" << endl;

		memcpy(_pBuffer, other._pBuffer, SIZE * sizeof(int));

	}

	// Move Constructor
	Test (Test &&other){
		// steal the pointer of other
		_pBuffer = other._pBuffer;
		// clear the pointer of other to prevent their content to be erased when
		// the deconstructor of other is called.
		other._pBuffer = nullptr;
	}

	Test& operator=(const Test &other) {
		cout << "Assignment" << endl;

		_pBuffer = new int[SIZE] { }; // initialize array with zeros
		memcpy(_pBuffer, other._pBuffer, SIZE * sizeof(int));

		return *this;
	}

	// Move Assigment operator
	Test &operator=(Test &&other){
		cout << "Move assigment operator" << endl;
		delete[] _pBuffer;
		_pBuffer = other._pBuffer;
		other._pBuffer = nullptr;

		return *this;
	}

	~Test() {
		cout << "destructor" << endl;
		delete[] _pBuffer;
	}

	friend ostream& operator<<(ostream &out, const Test &test);
};

ostream& operator<<(ostream &out, const Test &test) {
	out << "Hello form test" << endl;
	return out;
}

Test getTest() {
	return Test();
}

// This function accept Lvalue references
Test check(const Test &Lvalue){
	cout << "Lvalue function" << endl;
}

// This function accept Rvalue references
Test check(Test &&Rvalue){
	cout << "Rvalue function" << endl;
}

int main() {
	cout << "Move Constructor" << endl; // prints Title\n

	vector<Test> vec;
	vec.push_back(Test()); // Use the Move Constructor

	// in order to call the move assigment operator we have to instantiate the class first!
	Test test;
	test = getTest();

	return 0;
}
