//============================================================================
// Name        : 049_Intro_LambdaExpression.cpp
// Author      : S. Forrer
// Version     :
// Copyright   : This code comes from Udemy C++ Courses
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

// A function that accepts a function, whit a void return type as argument.
void test(void (*pFunc)()){
	pFunc(); // call the function stored in the address pointed by the function pointer.
}

int main() {
	cout << "Introduction to Lambda Expressions\n" << endl; // prints Title\n

	// anonymous lambda expression body
	[](){};

	// anonymous lambda expression declaration and in-place call
	[](){cout << "1) Anonymous Lambda Expression (in-place call!)" << endl;}();

	//Assignment of lambda expression to a variable
	auto func = [](){cout << "2) auto func -> Lambda Expression" << endl;};
	// call the function stored in func
	func();

	// Call a function that accept a lambda expression as argument.
	test([](){ cout << "3) lambda expression embedded as argument of a function " << endl; });

	return 0;
}
