/*
 * RGB.h
 *
 *  Created on: 07.09.2019
 *      Author: forba
 */

#ifndef RGB_H_
#define RGB_H_

namespace forresil {

struct RGB {
	double r;
	double g;
	double b;

	RGB(double r, double g, double b);
};

RGB operator-(const RGB& first, const RGB& second);

} /* namespace forresil */

#endif /* RGB_H_ */
