/*
 * Person.h
 *
 *  Created on: 26.04.2019
 *      Author: forba
 */

#ifndef PERSON_H_
#define PERSON_H_
#include <iostream>
#include <string>

using namespace std;

class Person
{
private:
	string name;
	int age;

public:
	Person();
	Person(string newName) {name = newName; age = 0;} ;
	Person(string newName, int newAge) {name = newName; age = newAge;} ;
	string toString();
};

#endif /* PERSON_H_ */
