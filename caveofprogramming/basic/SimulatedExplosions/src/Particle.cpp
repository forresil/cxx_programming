/*
 * Particle.cpp
 *
 *  Created on: 18.05.2019
 *      Author: forba
 */

#include "Particle.h"
#include <stdlib.h>
#include <math.h>
namespace forresil
{

Particle::Particle() :
		m_x(0), m_y(0)
{
//	m_x = ((2.0 * (double) rand()) / RAND_MAX) - 1;
//	m_y = ((2.0 * (double) rand()) / RAND_MAX) - 1;

//	m_xspeed = 0.01/*speed*/ * (((2.0 * rand()) / RAND_MAX) - 1);
//	m_yspeed = 0.01/*speed*/ * (((2.0 * rand()) / RAND_MAX) - 1);

	m_direction = (2 * M_PI * rand()) / RAND_MAX;
	m_speed = (0.001 * rand()) / RAND_MAX;

}

Particle::~Particle()
{
	// TODO Auto-generated destructor stub
}

void Particle::update()
{
	double xspeed = m_speed * cos(m_direction);
	double yspeed = m_speed * sin(m_direction);

	m_x += xspeed;
	m_y += yspeed;

//	m_x += m_xspeed;
//	m_y += m_yspeed;
//
//	if (m_x < -1.0 || m_x >= 1.0) // to simulate gas explosion comment this!
//	{
//		m_xspeed = -m_xspeed;
//	}
//	if (m_y < -1.0 || m_y >= 1.0) // to simulate gas explosion comment this!
//	{
//		m_yspeed = -m_yspeed;
//	}
}

} /* namespace forresil */
