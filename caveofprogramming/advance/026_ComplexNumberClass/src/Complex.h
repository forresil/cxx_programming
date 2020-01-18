/*
 * Complex.h
 *
 *  Created on: 16.06.2019
 *      Author: forba
 */

#ifndef COMPLEX_H_
#define COMPLEX_H_

#include <iostream>
using namespace std;

namespace forresil
{

class Complex
{
private: // Attributes
	double real;
	double imaginary;

public:  //Constructors
	Complex(); /// Default Constructor
	Complex(double real, double imaginary); /// Parameterized Constructor
	Complex(const Complex &other); /// Copy Constructor
	const Complex &operator=(const Complex &other);  /// Operator= Overload

public:  //Functions
	/// double real Getter
	double getReal() const /* this function doesn't change the object!*/
	{
		return real;
	}

	/// double imaginary Getter
	double getImaginary() const /* this function leaves the object unaltered!*/
	{
		return imaginary;
	}
};

ostream &operator<<(ostream &out, const Complex &c);

} /* namespace forresil */

#endif /* COMPLEX_H_ */
