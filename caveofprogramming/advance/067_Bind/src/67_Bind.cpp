//============================================================================
// Name        : 67_Bind.cpp
// Author      : S. Forrer
// Version     :
// Copyright   : This code comes from Udemy C++ Courses
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <functional>

using namespace std;
using namespace placeholders;
class Test {
public:
	int add(int a, int b, int c) {
		cout << a << ", " << b << ", " << c << endl;
		return a + b + c;
	}
};

int add(int a, int b, int c) {
	cout << a << ", " << b << ", " << c << endl;
	return a + b + c;
}
int run(function<int(int, int)> func) {
	return func(7, 3);
}
int main() {
	cout << "066 - Bind\n" << endl; // prints Title\n

	cout << add(1, 2, 3) << endl;

	auto calculate = bind(add, 3, 4, 5);
	cout << calculate() << endl;

	auto calculate2 = bind(add, _1, _2, _3); // _1.._3 represents the arguments to the function
	cout << calculate2(10, 20, 30) << endl;

	auto calculate3 = bind(add, _2, _3, _1); //  change the order of the arguments
	cout << calculate3(10, 20, 30) << endl;

	auto calculate4 = bind(add, _2, 400, _1); //  inject constant arguments
	cout << calculate4(10, 20) << endl;

	cout << run(calculate4) << endl;

	// Binding Function methods
	Test test;
	auto calculate5 = bind(&Test::add, test, _2, 500,_1); //Methods must be referenced(&)!!
	cout << run(calculate5) << endl;

	return 0;
}
