/*
 * Cat.h
 *
 *  Created on: 26.04.2019
 *      Author: forba
 */

#ifndef CAT_H_
#define CAT_H_

class Cat
{
public:
	static int catNr;
	Cat();
	virtual ~Cat();
	void speak();

private:
	bool happy = true;
};

#endif /* CAT_H_ */
