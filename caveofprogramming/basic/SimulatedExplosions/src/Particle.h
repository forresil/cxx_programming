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

// This class was converted to struct to make all variables public by default!
struct Particle
{
	double m_x;
	double m_y;

    //Cartesian coordinates
//	double m_xspeed;
//	double m_yspeed;

	//Polar coordinates
	double m_speed;
	double m_direction;

public:
	Particle();
	virtual ~Particle();

	void update();
};

} /* namespace forresil */

#endif /* PARTICLE_H_ */
