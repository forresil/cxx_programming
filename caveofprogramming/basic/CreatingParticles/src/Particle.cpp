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
}

Particle::~Particle()
{
	// TODO Auto-generated destructor stub
}

} /* namespace forresil */
