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
	void speak();
	void makeSad();
	void makeHappy();

private:
	bool happy = true; //can only be done in C++11

};

#endif /* CAT_H_ */
