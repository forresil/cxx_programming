/*
 * ring.h
 *
 *  Created on: 21.07.2019
 *      Author: forba
 */

#ifndef RING_H_
#define RING_H_
#include <iostream>

using namespace std;

template<class T>
class ring {
public:
	//Nested Class iterator
	class iterator1 {
	public:
		void print() {
			cout << "Hello from iterator1 => " << T() << endl;
		}
	};

	//Nested Class iterator2
	class iterator2;

};

// Implementation of nested class iterartion2
template<class T>
class ring<T>::iterator2 {
public:
	void print(){
		cout << "Hello from iterator2 => " << T() << endl;
	}
};

#endif /* RING_H_ */
