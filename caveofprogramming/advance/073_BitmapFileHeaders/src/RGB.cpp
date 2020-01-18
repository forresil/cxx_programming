/*
 * RGB.cpp
 *
 *  Created on: 07.09.2019
 *      Author: forba
 */

#include "RGB.h"

namespace forresil {

RGB::RGB(double r, double g, double b): r(r), g(g), b(b) {
	// TODO Auto-generated constructor stub

}

RGB operator-(const RGB& first, const RGB& second){
	return RGB(first.r - second.r, first.g - second.g, first.b - second.b);
}

} /* namespace forresil */
