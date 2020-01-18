//============================================================================
// Name        : 045_C++98_Initialization.cpp
// Author      : S. Forrer
// Version     :
// Copyright   : This code comes from Udemy C++ Courses
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>

using namespace std;

int main() {
	cout << "Initialization in C++98\n" << endl; // prints Title\n

	// initialize an array of integers
	int values[] = { 1, 4, 5 };
	cout << "values[0] = " << values[0] << endl;

	// declare class C
	class C {
	public:
		string text;
		int id;
	};

	// initialize an instance of class C
	C c1 = { "Hello from instance c1 of Class C", 7 };
	cout << c1.text << endl;

	// declare a struct S
	struct S {
		string text;
		int id;
	};

	// initialize an instance of the Data Type of struct S
	S s1 = { "Hello from instance s1 of Data Type (struct) S ", 7 };
	cout << s1.text << endl;

	// declare and initialize two objects of the Data Type of struct R
	struct R {
		string text;
		int id;
	} r1 = { "Hello from instance r1 of Data Type (struct) R", 7 }, r2 = {
			"Hello from instance r2 of Data Type (struct) R", 9 };
	cout << r1.text << endl;
	cout << r2.text << endl;

	// declaration of a vector of strings
	vector<string> strings;

	// population of the vector of strings
	strings.push_back("one");
	strings.push_back("two");
	strings.push_back("three");

	// iteration over the elements and display of their content
	cout << "vector<string> strings: " << endl;
	for (vector<string>::iterator it = strings.begin(); it != strings.end();
			it++) {
		cout << *it << endl;
	}

	return 0;
}
