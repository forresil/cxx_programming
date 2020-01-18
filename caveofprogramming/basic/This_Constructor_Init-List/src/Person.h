/*
 * Person.h
 *
 *  Created on: 27.04.2019
 *      Author: forba
 */

#ifndef PERSON_H_
#define PERSON_H_

#include <string>

using namespace std;

class Person
{
public:
	//Constructors
	Person():name(""),age(0){};  //Constructor Initialization List
	Person(string name, int age):name(name),age(age){};
	//Public Methods
	string toString();
	void memInfo();

private:
	string name;
	int age;
};

#endif /* PERSON_H_ */
