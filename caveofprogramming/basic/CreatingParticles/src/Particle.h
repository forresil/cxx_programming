/*
 * Particle.h
 *
 *  Created on: 18.05.2019
 *      Author: forba
 */

#ifndef PARTICLE_H_
#define PARTICLE_H_

namespace forresil
{

struct Particle
{

	double m_x;
	double m_y;

public:
	Particle();
	virtual ~Particle();
};

} /* namespace forresil */

#endif /* PARTICLE_H_ */
