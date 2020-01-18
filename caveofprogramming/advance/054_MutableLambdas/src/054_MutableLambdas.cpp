//============================================================================
// Name        : 054_MutableLambdas.cpp
// Author      : S. Forrer
// Version     :
// Copyright   : This code comes from Udemy C++ Courses
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	cout << "Mutable Lambdas\n" << endl; // prints Title\n

	int cats = 5;
	cout << "before the lambda expression cats is " << cats << endl;

	/*
	 * with the keyword mutable you can change the variables passed by value to a
	 * lambda expression without altering the proper values of the variables it self.
	*/
	[cats]()mutable{
		cats = 8;  // change the value of cats inside the lambda expression
		cout << "inside of the lambda expression cats is " << cats << endl;
	}();
	cout << "after the lambda expreesion cats is " << cats << endl;

	return 0;
}
