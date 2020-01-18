/*
 * Mandelbrot.cpp
 *
 *  Created on: 06.09.2019
 *      Author: forba
 */

#include <complex>

#include "Mandelbrot.h"

using namespace std;

namespace forresil {

Mandelbrot::Mandelbrot() {
	// TODO Auto-generated constructor stub

}

Mandelbrot::~Mandelbrot() {
	// TODO Auto-generated destructor stub
}

int Mandelbrot::getIterations(double x, double y) {

	complex<double> z = 0;  // overloaded assignment operator, set both numbers.
	complex<double> c(x,y);

	int iterations = 0;

	while(iterations < MAX_ITERATIONS){
		z = z*z + c;

		if(abs(z) > 2){
			break;
		}

		iterations++;
	}

	return iterations;
}

} /* namespace forresil */
