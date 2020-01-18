/*
 * Cat.cpp
 *
 *  Created on: 26.04.2019
 *      Author: forba
 */
#include <iostream>
#include "Cat.h"

using namespace std;

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

void Cat::makeHappy()
{
	this->happy = true;
}

void Cat::makeSad()
{
	this->happy = false;
}
