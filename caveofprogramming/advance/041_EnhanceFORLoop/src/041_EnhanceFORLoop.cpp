//============================================================================
// Name        : 041_EnhanceFORLoop.cpp
// Author      : S. Forrer
// Version     :
// Copyright   : This code comes from Udemy C++ Courses
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
using namespace std;

int main() {
	cout << "Range based Loops/n" << endl; // prints Title/n

	//C++11
	cout << "In C++11..." << endl;
	string texts_C11[] = {"one", "two", "three"};
	for(unsigned int i=0; i < 3; i++){
		cout << texts_C11[i] << endl;
	}

	//C++17
	cout << "\nIn C++17..." << endl;
	auto texts = {"one", "two", "three"};
	for(auto text:texts){
		cout << text << endl;
	}


	cout << "\nPrint a vector..." << endl;
	vector<int> numbers;
	numbers.push_back(5);
	numbers.push_back(7);
	numbers.push_back(9);
	numbers.push_back(11);

	for(auto number:numbers){
		cout << number << endl;
	}

	string hello = "Hello";

	cout << "\nPrint chararctes of Hello..." << endl;
	for (auto c:hello){
		cout << c << endl;
	}

	return 0;
}
