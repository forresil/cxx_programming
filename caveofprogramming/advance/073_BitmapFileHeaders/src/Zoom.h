/*
 * Zoom.h
 *
 *  Created on: 07.09.2019
 *      Author: forba
 */

#ifndef ZOOM_H_
#define ZOOM_H_

namespace forresil {

struct Zoom {
	int x{0};
	int y{0};
	double scale{0.0};

	Zoom(int x, int y, double scale): x(x), y(y), scale(scale){};
};

} /* namespace forresil */

#endif /* ZOOM_H_ */
