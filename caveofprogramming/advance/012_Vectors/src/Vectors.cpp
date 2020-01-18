//============================================================================
// Name        : Vectors.cpp
// Author      : S. Forrer
// Version     :
// Copyright   : Udemy Advanced C++, Cave Programing Tutorial
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	cout << "Vectors\n" << endl; // prints Title\n

	// A vector is a template class
	vector<string> strings(5); // (5) pre-size the vector! (doesn't needed)

	// Return size of vector
	cout << "Size of pre-sized vector: " << strings.size() << endl;

	// Write into Vector as if it was an array ([] operator was overloaded!)
	strings[3] = "dog";
	cout << "strings[3]: " << strings[3] << endl;

	// Add extra strings to the vector
	strings.push_back("six");
	strings.push_back("seven");
	strings.push_back("eight");

	cout << "Size of strings after adding six, seven, eight: " << strings.size()
			<< endl;

	// iterate through strings and print strings content using for
	cout << "strings content:" << endl;
	for (unsigned int i = 0; i < strings.size(); i++)
	{
		cout << i << "." << strings[i] << endl;
	}

	// return values using iterators as pointers to the values in strings
	vector<string>::iterator my_it = strings.begin();
	strings[0] = "one";
	strings[1] = "two";
	strings[2] = "three";
	cout << "value of strings.begin(): " << *my_it << endl;
	cout << "value of ++my_it: " << *++my_it << endl;

	// iterate through strings using iterators
	cout << "\nVector elements read by iterator:" << endl;
	for (vector<string>::iterator it = strings.begin(); it != strings.end();
			it++)
	{
		cout << *it << endl;
	}

	return 0;
}
