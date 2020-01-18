/*
 * Person.cpp
 *
 *  Created on: 27.04.2019
 *      Author: forba
 */

#include "Person.h"

#include <iostream>
#include <sstream>

string Person::toString()
{
	stringstream ss;
	ss << "Name: " << name << " ; age: " << age;
	return ss.str();
}

void Person::memInfo(){
	cout << "Memory Location of " << this->name << " is: " << this << endl;
	cout << "Size of objet " << this->name << " in Bytes: " << sizeof(this) << endl;
}
