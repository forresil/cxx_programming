//============================================================================
// Name        : Classes.cpp
// Author      : forresil
// Version     :
// Copyright   : C++ Tutorial for Complete Beginers (Udemy)
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

#include "Cat.h"

using namespace std;

int main()
{
	cout << "Program: Classes\n----------------------" << endl;

	Cat cat1;

	cat1.speak();
	cat1.jump();

	return 0;
}
