/*
 * Swarm.cpp
 *
 *  Created on: 18.05.2019
 *      Author: forba
 */

#include "Swarm.h"

namespace forresil
{

Swarm::Swarm(): lastTime(0)
{
	m_pParticles = new Particle[NPARTICLES];
}

Swarm::~Swarm()
{
	delete[] m_pParticles;
}

void Swarm::update(int elapsed)
{
	int interval = elapsed - lastTime;

	for (int i = 0; i < Swarm::NPARTICLES; ++i) {
		m_pParticles[i].update(interval);
	}

	lastTime = elapsed;
}

} /* namespace forresil */
