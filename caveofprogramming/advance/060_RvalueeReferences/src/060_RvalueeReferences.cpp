//============================================================================
// Name        : 058_Rvalues&Lvalues.cpp
// Author      : S. Forrer
// Version     :
// Copyright   : This code comes from Udemy C++ Courses
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <cstring>
#include <iostream>
#include <vector>

using namespace std;

class Test {
private:
	static const unsigned int SIZE { 10 };
	int *_pBuffer; // Convention: start member variables with an underscore  or with m

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

	Test(const Test &other) :
			Test() { /*Lets initialize _pBuffer with constructor*/
		cout << "copy constructor" << endl;

		memcpy(_pBuffer, other._pBuffer, SIZE * sizeof(int));

	}

	Test& operator=(const Test &other) {
		cout << "Assignment" << endl;

		_pBuffer = new int[SIZE] { }; // initialize array with zeros
		memcpy(_pBuffer, other._pBuffer, SIZE * sizeof(int));

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
	cout << "Lvalues References\n" << endl; // prints Title\n

	Test test1 = getTest();

	cout << test1 << endl;

	vector<Test> vec;
	vec.push_back(Test());

	Test &lTest1 = test1;  // this is a L value reference, so you can bind Lvalues to it!

	Test &&Test1 = Test(); // this is a R value reference, so you can bind Rvalues to it!
	Test &&Test2 = getTest();

	cout << "chek(test1):" << endl;
	check(test1);
	cout << "chek(getTest()):" << endl;
	check(getTest());
	cout << "chek(Test()):" << endl;
	check(Test());

	return 0;
}
