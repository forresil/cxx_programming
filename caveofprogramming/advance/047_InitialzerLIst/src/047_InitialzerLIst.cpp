//============================================================================
// Name        : 047_InitialzerLIst.cpp
// Author      : S. Forrer
// Version     :
// Copyright   : This code comes from Udemy C++ Courses
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include <initializer_list>

using namespace std;

class Test{
public:
	Test(initializer_list<string> texts){
		for(auto value: texts){
			cout << value << endl;
		}
	}

	void print(initializer_list<string> texts){
		for(auto value: texts){
			cout << value << endl;
		}
	}
};

int main() {
	cout << "Initializer List\n" << endl; // prints Title\n

	vector<int> numbers{1,2,3,4};
	cout << "numbers[2]= " <<  numbers[2] << endl;

	// create an instance of class Test and pass some variable number of
	// strings to his constructor
	Test test{"apple", "orange", "banana"};

	// call print method of class Test on test instance passing some variable
	// number of strings
	test.print({"one", "two", "three"});

	return 0;
}
