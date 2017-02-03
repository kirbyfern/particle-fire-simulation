/*
 * Particle.h
 *
 *  Created on: Feb 3, 2017
 *      Author: Kirby James
 */

#ifndef PARTICLE_H_
#define PARTICLE_H_

namespace slashgeegee {

struct Particle {
	double m_x;
	double m_y;
public:
	Particle();
	virtual ~Particle();
};

} /* namespace slashgeegee */

#endif /* PARTICLE_H_ */
