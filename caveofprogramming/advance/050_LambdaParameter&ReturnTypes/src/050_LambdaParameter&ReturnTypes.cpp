//============================================================================
// Name        : 050_LambdaParameter&ReturnTypes.cpp
// Author      : S. Forrer
// Version     :
// Copyright   : This code comes from Udemy C++ Courses
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void testGreet(void (*greet)(string)) {
	greet("Bob");
}


void runDivide(double (*divide)(double a, double b)){
	auto rval = divide(9, 3);
	cout << rval << endl;
}

int main() {
	cout << "Lambda Parameters and Return Types\n" << endl; // prints Title\n

	// Lambda expression with a parameter
	auto pGreet = [](string name) {
		cout << "Hello " << name << endl;
	};

	pGreet("Mike");
	testGreet(pGreet);

	// Lambda expression with two parameters and return type declaration
	auto pDivide = [](double a, double b) -> double {
		if (b == 0.0) {
			return 0; // returns 0.0 since return type declared to be double!
		}

		return a / b;
	};

	cout << pDivide(10.0, 5.0) << endl;
	cout << pDivide(10.0, 0.0) << endl;

	runDivide(pDivide);

	return 0;
}
