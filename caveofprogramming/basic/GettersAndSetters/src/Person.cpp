/*
 * Person.cpp
 *
 *  Created on: 26.04.2019
 *      Author: forba
 */

#include "Person.h"

Person::Person()
{
	// TODO Auto-generated constructor stub
	name = "N/A";

}
/**
 * Prints the actual name of THIS Person
 * @return
 */
string Person::toString()
{
	return "Person's name is: " + name;
}

/**
 * Sets the name of THIS Person
 * @param name
 */
void Person::setName(const string& name)
{
	this->name = name;
}

const string& Person::getName() const
{
	return name;
}
