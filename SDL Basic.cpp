//============================================================================
// Name        : SDL.cpp
// Author      : Kirby James
// Version     : 0.1.0
// Description : Simply Utilizing SDL in C++, Ansi-style
//============================================================================

#include <iostream>
#include <SDL.h>
#include <math.h>
#include "Screen.h"
#include <stdlib.h>
#include <time.h>
#include "Swarm.h"
using namespace std;
using namespace slashgeegee;

int main() {

	srand(time(NULL));

	Screen screen;

	if (screen.init() == false) {
		cout << "Initializing SDL failed..." << endl;
	}

	Swarm swarm;

	while (true) {
		// Update particles
		// Draw particles

		int elapsed = SDL_GetTicks();

		swarm.update(elapsed);

		unsigned char green = (unsigned char) ((1 + sin(elapsed * 0.0001)) * 128);
		unsigned char red = (unsigned char) ((1 + sin(elapsed * 0.0002)) * 128);
		unsigned char blue = (unsigned char) ((1 + sin(elapsed * 0.0003)) * 128);

		const Particle * const pParticles = swarm.getParticles();

		for (int i = 0; i < Swarm::NPARTICLES; i++) {
			Particle particle = pParticles[i];

			int x = (particle.m_x + 1) * Screen::SCREEN_WIDTH / 2;
			int y = particle.m_y * Screen::SCREEN_WIDTH / 2 + Screen::SCREEN_HEIGHT/2;

			screen.setPixel(x, y, red, green , blue);
		}

		screen.boxBlur();


		// Draw the screen
		screen.update();

		// Check for messages/events
		if (screen.processEvents() == false) {
			break;
		}
	}
/* SDL Basic(3113,0x7fffbe5f63c0) malloc: *** error for object 0x106b2c000: pointer being freed was not allocated *** set a breakpoint in malloc_error_break to debug */
	/* Ok if two double pointer released then the error comes up */
/* if screen.close() is present some error about pointer uninitialized */
	screen.close();

	return 0;
}
