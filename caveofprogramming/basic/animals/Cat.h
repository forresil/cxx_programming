/*
 * Cat.h
 *
 *  Created on: 19.05.2019
 *      Author: forba
 */

#ifndef CAT_H_
#define CAT_H_

#include <iostream>
namespace forresil
{

void saySomething();

class Cat
{
public:
	Cat();
	void speak();
	virtual ~Cat();
};

} /* namespace forresil */

#endif /* CAT_H_ */
