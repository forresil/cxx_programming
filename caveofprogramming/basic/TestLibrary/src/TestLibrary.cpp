//============================================================================
// Name        : TestLibrary.cpp
// Author      : forresil
// Version     :
// Copyright   : C++ Tutorial for Complete Beginers (Udemy)
// Description : Hello World in C++, Ansi-style
// To run this program you'll have to add the "animals" static library!!!
// Project > Properties > C++ Build > Settings > Linker >
// Add Path to library "libname.a" and the name of library, here means only "name"!
//============================================================================

#include <iostream>
#include <Cat.h>

int main() {
	std::cout << "How to use Libraries from related projects\n" << std::endl; // prints Title\n
	std::cout << "------------------------------------------------------------" << std::endl;

	forresil::saySomething();
	forresil::Cat bob;
	bob.speak();

	return 0;
}
