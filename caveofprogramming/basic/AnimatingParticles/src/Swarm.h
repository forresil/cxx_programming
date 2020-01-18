/*
 * Swarm.h
 *
 *  Created on: 18.05.2019
 *      Author: forba
 */

#ifndef SWARM_H_
#define SWARM_H_

#include "Particle.h"

namespace forresil
{

class Swarm
{

public:
	const static int NPARTICLES = 5000;

private:
	Particle * m_pParticles;

public:
	Swarm();
	virtual ~Swarm();
	void update();

	const Particle * const getParticles()
	{
		return m_pParticles;
	}
	;

};

} /* namespace forresil */

#endif /* SWARM_H_ */
