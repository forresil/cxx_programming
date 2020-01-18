//============================================================================
// Name        : 052_CapturingThisInLambdas.cpp
// Author      : S. Forrer
// Version     :
// Copyright   : This code comes from Udemy C++ Courses
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Test {
private:
	int one { 1 }, two { 2 }; //variables are initialized by a default constructor (C++11)

public:
	void run() {
		int three { 3 }, four { 4 };

		// capture local variables by value into the lambda expression
		auto pLambda = [three, four]() {
			cout << "capture local variables by value..." << endl;
			//cout << one << endl;
			//cout << two << endl;
			cout << three << endl;
			cout << four << endl;
		};
		pLambda();

		// capture the class wide variables by reference using "this"
		auto pLambda2 = [this, three, four]() {
			cout << "capture class wide by reference and local variables "
					"by value..." << endl;
			one = 11;
			two = 22;
			cout << one << endl;
			cout << two << endl;
			cout << three << endl;
			cout << four << endl;
		};
		pLambda2();

		// capture the class wide and local variables by reference using "this" and &
		[&, this]() {
			cout << "capture both, class wide and local variables by reference" << endl;
			one = 111;
			two = 222;
			three = 33;
			four = 44;
			cout << one << endl;
			cout << two << endl;
			cout << three << endl;
			cout << four << endl;
		}();

	}

};

int main() {
	cout << "Capturing This in Lambda expressions\n" << endl; // prints Title\n

	Test test;
	test.run();

	return 0;
}
