//============================================================================
// Name        : 057_Constructors&Memory.cpp
// Author      : S. Forrer
// Version     :
// Copyright   : This code comes from Udemy C++ Courses
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <cstring>
//#include <memory.h>
#include <iostream>
#include <vector>

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
	cout << "Constructors and Memory\n" << endl; // prints Title\n

	Test test = Test(3);
	Test test1 = getTest();

	cout << test1 << endl;

	vector<Test> vec{Test()};


	return 0;
}
