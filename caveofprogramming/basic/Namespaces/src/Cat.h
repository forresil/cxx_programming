/*
 * Cat.h
 *
 *  Created on: 11.05.2019
 *      Author: forba
 */

#ifndef CAT_H_
#define CAT_H_

#include <iostream>
using namespace std;

namespace cats{

const string CATNAME = "Freddy";
class Cat
{
public:
	Cat();
	virtual ~Cat();
	void speak();
};
}
#endif /* CAT_H_ */
