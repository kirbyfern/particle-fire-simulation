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

private:
	double m_speed;
	double m_direction;

private:
	void init();

public:
	Particle();
	virtual ~Particle();
	void update(int interval);
};

} /* namespace slashgeegee */

#endif /* PARTICLE_H_ */
