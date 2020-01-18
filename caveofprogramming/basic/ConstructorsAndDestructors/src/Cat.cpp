/*
 * Cat.cpp
 *
 *  Created on: 26.04.2019
 *      Author: forba
 */
#include <iostream>
#include "Cat.h"

using namespace std;

// Initialize static member of Class Cat
int Cat::catNr = 0;

Cat::Cat()
{
	// Initialize Cat Instance
	catNr++;
	cout << "Cat " << catNr << " created!" << endl;
	this->happy = true;

}

Cat::~Cat()
{
	// Cat will be destroyed when owner (main()) is terminated!
	cout << "Cat " << catNr << " destroyed!" << endl;
	catNr--;
}

void Cat::speak()
{
	if (happy)
	{
		cout << "Meouwww..." << endl;

	}
	else
	{
		cout << "Ssssss..." << endl;

	}
}
