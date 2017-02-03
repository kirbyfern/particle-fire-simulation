/*
 * Particle.cpp
 *
 *  Created on: Feb 3, 2017
 *      Author: Kirby James
 */

#include "Particle.h"
#include <stdlib.h>

namespace slashgeegee {

Particle::Particle() {
	m_x = ((2.0 * rand())/RAND_MAX) - 1;
	m_y = ((2.0 * rand())/RAND_MAX) - 1;
}

Particle::~Particle() {

}

} /* namespace slashgeegee */
