/*
 * Swarm.cpp
 *
 *  Created on: Feb 3, 2017
 *      Author: Kirby James
 */

#include "Swarm.h"

namespace slashgeegee {

Swarm::Swarm() {
	m_pParticles = new Particle[NPARTICLES];

}

Swarm::~Swarm() {
	delete[] m_pParticles;
}

} /* namespace slashgeegee */
