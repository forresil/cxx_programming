//============================================================================
// Name        : 058_Rvalues&Lvalues.cpp
// Author      : S. Forrer
// Version     :
// Copyright   : This code comes from Udemy C++ Courses
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <memory.h>
using namespace std;

class Test {
private:
	static const unsigned int SIZE{10};
	int *_pBuffer; // Convention: start member variables with an underscore  or with m

public:
	Test() {
		cout << "constructor" << endl;
		_pBuffer = new int[SIZE]{}; // initialize array with zeros
		// or you also can initialize array values with zeros on using:
		// memset(_pBuffer, 0, SIZE);
	}

	Test(unsigned int mult):Test() {
		cout << "parameterized constructor" << endl;

		for(unsigned int i=0; i< SIZE; i++){
			_pBuffer[i]=7*mult;
		}
	}

	Test(const Test &other):Test() { /*Lets initialize _pBuffer with constructor*/
		cout << "copy constructor" << endl;

		memcpy(_pBuffer, other._pBuffer, SIZE*sizeof(int));

	}

	Test &operator=(const Test &other){
		cout << "Assignment" << endl;

		_pBuffer = new int[SIZE]{}; // initialize array with zeros
		memcpy(_pBuffer, other._pBuffer, SIZE*sizeof(int));

		return *this;
	}

	~Test() {
		cout << "destructor" << endl;
		delete [] _pBuffer;
	}

	friend ostream& operator<<(ostream &out, const Test &test);
};

ostream& operator<<(ostream &out, const Test &test) {
	out << "Hello form test" << endl;
	return out;
}

Test getTest(){
	return Test();
}

int main() {
	cout << "Rvalues and Lvalues\n" << endl; // prints Title\n

	Test test1 = getTest();

	int value1 = 7;

	int *pValue1 = &value1;

	Test * pTest1 = &test1;
	//Test * pTest2 = &getTest(); // ERROR: takes address of temporary variable

	int *pValue3 = &++value1; // increment the value and than uses it
	cout << *pValue3 << endl;

	//int *pValue4 = &value1++; // ERROR: Lvalue required as & operand
	//cout << pValue4 << endl;

	//int *s = &(7 + value1); // ERROR: Lvalue required as & operand

	// int *pValue2 = &7;
	/*
	 * In C++11 a Lvalue is a value on the left side of the assignment operator.
	 * From a Lvalue you can the always get the their memory location/address
	 * */

	return 0;
}
