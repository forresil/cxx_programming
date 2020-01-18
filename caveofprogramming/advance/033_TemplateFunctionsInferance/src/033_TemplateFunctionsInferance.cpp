//============================================================================
// Name        : 033_TemplateFunctionsInferance.cpp
// Author      : S. Forrer
// Version     :
// Copyright   : This code comes from Udemy C++ Courses
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

/**
 * @brief template function with an object of type T as argument.
 * @param obj
 */
template<class T>
void print(T obj){
	cout << "template version" << obj << endl;
}

/**
 * @brief Override function with an integer as argument.
 * @param n
 */
void print(int n){
	cout << "non-template version" << n << endl;
}

/**
 * @brief Template function with template class but no argument.
 * @details Here the caller must specify the type of the template class to be used.
 * Since there are no arguments passed to the function, the default value of the
 * template function will be passed to the underlying output stream of the standard
 * output!
 * @example show<double>();
 */
template<class T>
void show(){
	cout << T() << endl; // here we're calling only the constructor of class T
}

/**
 * @brief MAIN function of this program
 * @return
 */
int main() {
	cout << "Template Function Inferance/n" << endl; // prints Title/n
	print(5); // here Overide function will be called, since it's the natural choice.
	print<int>(5); // here the template version will be called.
	print<>(5); // here, also the template version will be called. Type is inferred!
	show<double>(); // here we must provide a type for the template in order to compile.
	return 0;
}
