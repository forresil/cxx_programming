//============================================================================
// Name        : 032_TemplateFunctions.cpp
// Author      : S. Forrer
// Version     :
// Copyright   : This code comes from Udemy C++ Courses
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

/**
 * @brief Function Template print using "typename" keyword
 */
template<typename T>
void print(T obj){
	cout << obj << endl;
}

/**
 * @brief Function Template, same as before, but using "class" keyword.
 * @param obj
 */
template<class T>
void myPrint(T obj){
	cout << "myPrint: " << obj << endl;
}

/**
 * @brief MAIN function of this program!
 * @return
 */
int main() {
	cout << "Template Functions/n" << endl; // prints Title/n

	print<string>("Hello");
	print<int>(5);
	print("Type Inference!");

	myPrint<string>("Hello");
	myPrint<int>(5);
	myPrint("Type Inference!");

	return 0;
}
