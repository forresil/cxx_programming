/*
 * Particle.cpp
 *
 *  Created on: 18.05.2019
 *      Author: forba
 */

#include "Particle.h"
#include <stdlib.h>
namespace forresil
{

Particle::Particle()
{
	m_x = ((2.0 * (double) rand()) / RAND_MAX) - 1;
	m_y = ((2.0 * (double) rand()) / RAND_MAX) - 1;

	m_xspeed = 0.01/*speed*/ * (((2.0 * rand()) / RAND_MAX) - 1);
	m_yspeed = 0.01/*speed*/ * (((2.0 * rand()) / RAND_MAX) - 1);

}

Particle::~Particle()
{
	// TODO Auto-generated destructor stub
}

void Particle::update()
{
	m_x += m_xspeed;
	m_y += m_yspeed;

	if (m_x < -1.0 || m_x >= 1.0) // to simulate gas explosion comment this!
	{
		m_xspeed = -m_xspeed;
	}
	if (m_y < -1.0 || m_y >= 1.0) // to simulate gas explosion comment this!
	{
		m_yspeed = -m_yspeed;
	}
}

} /* namespace forresil */
