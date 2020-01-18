/*
 * Mandelbrot.h
 *
 *  Created on: 06.09.2019
 *      Author: forba
 */

#ifndef MANDELBROT_H_
#define MANDELBROT_H_

namespace forresil {

class Mandelbrot {
public:
	static const int MAX_ITERATIONS = 1000;  //defines the quality of the image.
public:
	Mandelbrot();
	virtual ~Mandelbrot();
	static int getIterations(double x, double y);
};

} /* namespace forresil */

#endif /* MANDELBROT_H_ */
