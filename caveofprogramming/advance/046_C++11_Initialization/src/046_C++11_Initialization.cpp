//============================================================================
// Name        : 046_C++11_Initialization.cpp
// Author      : S. Forrer
// Version     :
// Copyright   : This code comes from Udemy C++ Courses
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	cout << "Initialization in C++11\n" << endl; // prints Title\n

	int value{5};
	cout << "value initialized to: " << value << endl;

	string text{"Hello"};
	cout << "text initialized to: " << text << endl;

	int numbers[]{1,2,3};
	cout << "number[1] initialized to: " << numbers[1] << endl;

	int *pInts = new int[3]{1,2,3};
	cout << "int *pInts initialized to: " << pInts[1] << endl;
	delete pInts;

	// Initialize variables to zero
	int value1{};
	cout << "value1 zero-initialized: " << value1 << endl;

	// Initialize a pointer to zero
	int *pSomething0a{}; // bad practice!
	int *pSomething0b{NULL}; // initialized with NULL macro -> needs header file!
	int *pSomething0c{nullptr}; // Initialization in C++11, equivalent to int *pSomething = nullptr;;-)

	cout << "int* zero-initialized with {}: " << pSomething0a << endl;
	cout << "int* zero-initialized with {NULL}: " << pSomething0b << endl;
	cout << "int* zero-initialized with {nullptr}: " << pSomething0c << endl;

	// initialize a pointer to an existing value-address
	int *pSomething0{&value};
	cout << "int* initialized to existing variable-address: " << pSomething0;
	cout << " with content: " << *pSomething0 << endl;;

	// initialize all elements of a array to zero
	int numbers1[5]{};
	cout << "empty numbers1 array, elements initialized to: ";
	for(int i:numbers1){
		cout << numbers1[i] << ", ";
	}
	cout << endl;

	// struct initialization is practically the same as in C++98
	struct {
		int value;
		string text;
	} s1{5, "Hi"};
	cout << "struct s1.text= " << s1.text << endl;

	// initialize a vector with some values
	vector<string> strings{"one","two","three"};
	cout << "vector strings[2]: " << strings[2] << endl;

	return 0;
}
