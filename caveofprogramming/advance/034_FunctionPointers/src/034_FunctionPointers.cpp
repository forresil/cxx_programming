//============================================================================
// Name        : 034_FunctionPointers.cpp
// Author      : S. Forrer
// Version     :
// Copyright   : This code comes from Udemy C++ Courses
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void test() {
	cout << "Hello" << endl;
}

void testNr(int value){
	cout << "Hello " << value <<  endl;

}

int main() {
	cout << "Function Pointers/n" << endl; // prints Title/n

	test(); //calling the function directly

	//declare a function pointers
	void (*pTest)();
	void (*pTest2)();
	//initialize function pointers
	pTest = &test;
	pTest2 = test;
	//define function pointers
	void (*pTest3)() = test;  // <-- Most common case!!
	// using the function pointers to call the pointed functions
	(*pTest)();
	pTest2();
	pTest3();

	//declaring and initializing a function pointer with parameters
	void (*pTest4)(int) = testNr;
	pTest4(4);

	return 0;
}
