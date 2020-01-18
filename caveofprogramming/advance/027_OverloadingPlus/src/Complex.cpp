/*
 * Complex.cpp
 *
 *  Created on: 16.06.2019
 *      Author: S. Forrer
 */

#include "Complex.h"

namespace forresil
{

/**
 * @brief Default Constructor
 */
Complex::Complex() :
		real(0), imaginary(0)
{
}

/**
 * @brief Parameterized Constructor
 * @param real - The real part of the complex number
 * @param imaginary - The imaginary part of the complex number
 */
Complex::Complex(double real, double imaginary) :
		real(real), imaginary(imaginary)
{
}

/**
 * @brief Overload Operator =
 * @param other - The other object that is being copied
 * @return A reference to a constant object of "Complex"-Type
 */
const Complex& Complex::operator =(const Complex& other)
{
	real = other.real;
	imaginary = other.imaginary;
	return *this;
}

/**
 * @brief Copy Constructor
 * @param other - The other object that is being used to initialize this one!
 */
Complex::Complex(const Complex& other)
{
	cout << this << " calls Copy Constructor of " << &other << endl;
	cout << "Size of Class: " << &other - this << " " << sizeof(this) << endl;
	real = other.real;
	imaginary = other.imaginary;
}

/**
 * @brief Overload Operator "<<"
 * @details This function appends the attributes from a constant "Complex"-Type
 * object to the "ostream" instance of the system in a formatted manner.
 * @note Using here the constant - don't altering - Getters of class "Complex"
 * we avoid having to declare this function as "friend" --> Encapsulation fulfilled!
 * @param out - reference to Output-Stream of "ostream"-type to which the text
 * will be appended.
 * @param c - reference to constant object of "Complex"-type from which we extract
 * the parameters to be appended to the output-stream of "ostream"-type.
 * @return - reference to altered "ostream"-type object.
 */
ostream& operator <<(ostream& out, const Complex& c)
{
	// Using here the constant Getters of class "Complex" we avoid declaring this
	// function as "friend".
	out << "(" << c.getReal() << ", " << c.getImaginary() << ")";
	return out;
}

/**
 * @brief Overload Operator "+"
 * @details This function adds two objects of type "Complex" together.
 * @param c1 - Complex number 1
 * @param c2 - Complex number 2
 * @return A new Complex number object with the sum of both parameters
 */
Complex operator +(const Complex& c1, const Complex c2)
{
	return Complex(c1.getReal() + c2.getReal(),
			c1.getImaginary() + c2.getImaginary());
}

/**
 * @brief Overload Opeartor "+"
 * @details This function ads a double to a complex number.
 * @param c - Complex number
 * @param d - double number
 * @return - A new Complex number object with the sum of both parameters
 */
Complex operator +(const Complex& c, const double d)
{
	return Complex(c.getReal() + d, c.getImaginary() + 0);
}

/**
 * @brief Overload Operator "+"
 * @details This function ads a complex number to a double
 * @param d - double number
 * @param c - complex number
 * @return - A new complex number object with the sum of both parameters
 */
Complex operator +(const double d, const Complex& c)
{
	return Complex(c.getReal() + d, c.getImaginary() + 0);
}

} /* namespace forresil */
