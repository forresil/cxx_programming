//============================================================================
// Name        : TwosComplement.cpp
// Author      : forresil
// Version     :
// Copyright   : C++ Tutorial for Complete Beginers (Udemy)
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

using namespace std;

int main() {
	cout << "Twos Complement" << endl; // prints Title

	char value = 127;

	cout << (int)value << endl;

	value++;

	cout << (int)value << endl;

	return 0;
}


/**
 * Unsigned Binary System
 * ----------------------
 * 111 = 7 = (2^3) -1
 * 1111 1111 = (2^8) -1 = 255
 *
 * 000 = 0
 * 001 = 1
 * 010 = 2
 * 011 = 3
 * 100 = 4
 * 101 = 5
 * 110 = 6
 * 111 = 7
 *
 *
 * Signed Binary System (Rubbish System!!)
 * ---------------------
 * 000 = 0
 * 000 = 0
 * 001 = 1
 * 010 = 2
 * 011 = 3
 * 100 = -0
 * 101 = -1
 * 110 = -2
 * 111 = -3
 *
 * 001 (1) +
 * 101 (-1)=
 * 110 (-2) -> Wrong answer!!
 *
 *
 * One's Complement
 * ------------------
 * 000 = 0
 * 000 = 0
 * 001 = 1
 * 010 = 2
 * 011 = 3
 * 100 = -3
 * 101 = -2
 * 110 = -1
 * 111 = -0  (zero got two representations, we lost one place!)
 *
 * 001 (1)+
 * 110 (-1) =
 * 111 (-0 = 0) -> right answer!!
 *
 * 0011 (3) +
 * 0101 (-2) =
 * 1000 => if got an overflow, than add it to right: 0001 --> (right answer!, but complicated)
 *
 *
 * Two's complement
 * ------------------
 * 000 = 0
 * 001 = 1
 * 010 = 2
 * 011 = 3
 * 100 = -4
 * 101 = -3
 * 110 = -2
 * 111 = -1
 *
 * 0010 (2)+
 * 0110 (-2) =
 * 1000 -> Discard overflow bit -> 000 (right answer!) (easier to implement!)
 *
 * 010 (2)+
 * 101 (-3) =
 * 111 (-1) -> (right answer!)
 *
 */
