//============================================================================
// Name        : StringStreams.cpp
// Author      : forresil
// Version     :
// Copyright   : C++ Tutorial for Complete Beginers (Udemy)
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <sstream>  // Needed for stringstream

using namespace std;

int main()
{

	string name = "Bob";
	int age = 32;

	stringstream ss;
	ss << "Name is: " << name << "; Age is: " << age;
	string info = ss.str();
	cout << info << endl;

	return 0;
}
