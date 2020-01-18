//============================================================================
// Name        : 053_FunctionalTypes.cpp
// Author      : S. Forrer
// Version     :
// Copyright   : This code comes from Udemy C++ Courses
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <functional>
#include <vector>
#include <algorithm>

using namespace std;

// function passed a function pointer
bool check(string &test) {
	return test.size() == 3;
}

// class passed as functor
class Check {
public:
	bool operator()(string &test) { //define functor operation
		return test.size() == 5;
	}
} check1;  // <-- directly definition of an object!


// make run accepts anything that is callable
void run(function<bool(string&)> check) {
	string test = "dog";
	cout << check(test) << endl;
}

int main() {
	cout << "Functional Types \n" << endl; // prints Title\n

	unsigned int size { 5 };
	vector<string> vec { "one", "two", "three" };

	// inline lambda expression
	cout << count_if(vec.begin(), vec.end(), [](string test) {
		return test.size() == 5;
	}) << endl;

	// passing a lambda expression
	auto lambda = [size](string test) {
		return test.size() == size;
	};
	int count = count_if(vec.begin(), vec.end(), lambda);
	cout << count << endl;

	// passing a function pointer
	count = count_if(vec.begin(), vec.end(), check);
	cout << count << endl;

	// passing a functor
	count = count_if(vec.begin(), vec.end(), check1);
	cout << count << endl;

	// we can pass anything what we define to run
	run(lambda); // pass the lambda expression
	run(check); // passes function check() as function pointer.
	run(check1); // pass the object check1 as functor

	// using function inside of a function/method
	// this is a type that can refer to anything in the local scope
	function<int(int, int)> add = [](int one, int two) {
		return one + two;
	};
	cout << add(7, 3) << endl;

	return 0;
}
