/*
 * Person.cpp
 *
 *  Created on: 26.04.2019
 *      Author: forba
 */
#include <iostream>
#include <string>
#include <sstream>
#include "Person.h"

using namespace std;

Person::Person()
{
	this->name = "undefined";
	this->age = 0;

}

string Person::toString()
{
	stringstream out;
	out <<  "Name: " << this->name << " ; age: " << this->age;
	return out.str();
}
