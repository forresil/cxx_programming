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

/**
 * @brief Class Complex defines all operations on complex numbers
 */
class Complex
{
private:
	// Attributes
	double real;
	double imaginary;

public:
	//Constructors
	Complex(); /// Default Constructor
	Complex(double real, double imaginary); /// Parameterized Constructor
	Complex(const Complex &other); /// Copy Constructor
	const Complex &operator=(const Complex &other);  /// Operator= Overload

public:
	//Functions
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

	/// Operator == Overload
	bool operator==(const Complex &other) const;

	/// Operator != Overload
	bool operator!=(const Complex &other) const;

};

// Free standing functions
/// Operator << Overload
ostream &operator<<(ostream &out, const forresil::Complex &c);

/// Operator + Overload
forresil::Complex operator+(const forresil::Complex &c1, const forresil::Complex c2);
forresil::Complex operator+(const forresil::Complex &c, const double d);
forresil::Complex operator+(const double d, const forresil::Complex &c);

} /* namespace forresil */

#endif /* COMPLEX_H_ */
