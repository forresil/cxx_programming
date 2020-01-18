/*
 * Animals.h
 *
 *  Created on: 11.05.2019
 *      Author: forba
 */

#ifndef ANIMALS_H_
#define ANIMALS_H_

#include <iostream>

using namespace std;



namespace jwp
{

const string CATNAME="Tiddles";
class Cat
{
public:
	Cat();
	virtual ~Cat();
	void speak();
};

} /* namespace jwp */

#endif /* ANIMALS_H_ */
