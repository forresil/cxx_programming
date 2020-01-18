//============================================================================
// Name        : PrototypesAndIncludes.cpp
// Author      : forresil
// Version     :
// Copyright   : C++ Tutorial for Complete Beginers (Udemy)
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "utils.h"

using namespace std;


int main() {
	cout << "Program: Prototypes & Includes\n----------------------" << endl;
	doSomething();
	doSomething();
	return 0;
}

void doSomething(){
	cout << "Hello" << endl;
}
