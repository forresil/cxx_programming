/*
 * Person.h
 *
 *  Created on: 26.04.2019
 *      Author: forba
 */

#ifndef PERSON_H_
#define PERSON_H_
#include <iostream>

using std::__cxx11::string;

class Person
{
private:
	string name;
public:
	Person();
	string toString();
	void setName(const string& name);
	const string& getName() const;
};

#endif /* PERSON_H_ */
