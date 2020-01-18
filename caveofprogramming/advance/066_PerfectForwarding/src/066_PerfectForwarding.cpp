//============================================================================
// Name        : 066_PerfectForwarding.cpp
// Author      : S. Forrer
// Version     :
// Copyright   : This code comes from Udemy C++ Courses
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Test{

};

// Perfect Forwarding L/Rvalues
template<typename T>
void call(T &&arg){
	check(static_cast<T>(arg)); // <-- the same as the forward<T>() keyword!
}

template<typename T>
void callForward(T &&arg){
	check(forward<T>(arg));  // <--- C++11 uses this keyword to achieve the same
}

// This function is called if a Lvalue is passed
void check(const Test &test){
	cout << "Lvalue" << endl;
}

// This function is called if a Rvalue is passed
void check(Test &&test){
	cout << "Rvalue" << endl;
}


int main() {
	cout << "Perfect Forwarding\n" << endl; // prints Title\n

	Test test;

	auto &&t1 = Test();
	auto &&t2 = test;  // <--- Reference collapsing rule!!!!

	call(test);  //pass Lvalue
	call(Test());  // pass Rvalue

	callForward(test);


	return 0;
}
