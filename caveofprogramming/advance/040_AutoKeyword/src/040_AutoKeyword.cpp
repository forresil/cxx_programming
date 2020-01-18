//============================================================================
// Name        : 040_AutoKeyword.cpp
// Author      : S. Forrer
// Version     :
// Copyright   : This code comes from Udemy C++ Courses
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

//C++03
int get() {
	return 999;
}

//C++11
auto test_C11() -> int {
	return 11;
}

template<class T>
auto testTemplate_C11(T value) -> decltype(value) {
	return value;
}

template<class T, class S>
auto testTemplate2_C11(T value1, S value2) -> decltype(value1 + value2) {
	return value1 + value2;
}

auto test3_C11() -> decltype(get()) {
	return get();
}

//C++17
auto test_C17() {
	return 17;
}

template<class T>
auto testTemplate_C17(T value) {
	return value;
}

template<class T, class S>
auto testTemplate2_C17(T value1, S value2) {
	return value1 + value2;
}

auto test3_C17() {
	return get();
}

int main() {
	cout << "The auto Keyword/n" << endl; // prints Title/n

	// Let the C++ compiler to figure out what kind of variable we have!
	auto value = 7;
	auto text = "Hello";

	cout << value << endl;
	cout << text << endl;
	cout << test_C11() << endl;
	cout << test_C17() << endl;
	cout << testTemplate_C11("Hello there C++11") << endl;
	cout << testTemplate_C17("Hello there C++17") << endl;
	cout << testTemplate2_C11(5, 6) << endl;
	cout << testTemplate2_C17(10, 7) << endl;
	cout << testTemplate2_C17(10, 7.17) << endl;
	cout << test3_C11() << endl;
	cout << test3_C17() << endl;

	return 0;
}
