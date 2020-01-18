/*
 * Swarm.cpp
 *
 *  Created on: 18.05.2019
 *      Author: forba
 */

#include "Swarm.h"

namespace forresil
{

Swarm::Swarm()
{
	m_pParticles = new Particle[NPARTICLES];
}

Swarm::~Swarm()
{
	delete[] m_pParticles;
}

} /* namespace forresil */
