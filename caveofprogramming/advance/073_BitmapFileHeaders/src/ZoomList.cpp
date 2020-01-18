/*
 * ZoomList.cpp
 *
 *  Created on: 07.09.2019
 *      Author: forba
 */

#include "ZoomList.h"
//#include <iostream>

namespace forresil {

ZoomList::ZoomList(int width, int height) :
		m_width(width), m_height(height) {
	// TODO Auto-generated constructor stub

}

void ZoomList::add(const Zoom &zoom) {
	zooms.push_back(zoom);

	m_xCenter = (zoom.x - m_width/2) * m_scale;
	m_yCenter = -(zoom.y - m_height/2) * m_scale;

	m_scale*=zoom.scale;

//	std::cout << m_xCenter << ", " << m_yCenter << ", " << m_scale << std::endl;
}

std::pair<double, double> ZoomList::doZoom(int x, int y) {
	double xFractal = (x - m_width/2) * m_scale + m_xCenter;
	double yFractal = (y - m_height/2) * m_scale + m_yCenter;
	return std::pair<double, double>(xFractal, yFractal);
}

} /* namespace forresil */
