//============================================================================
// Name        : SDL.cpp
// Author      : Kirby James
// Version     : 0.1.0
// Description : Simply Utilizing SDL in C++, Ansi-style
//============================================================================

#include <iostream>
#include <SDL.h>
#include "Screen.h"
using namespace std;
using namespace slashgeegee;

int main() {

//	const int SCREEN_WIDTH = 800;
//	const int SCREEN_HEIGHT= 600;

	Screen screen;

	if (screen.init() == false) {
		cout << "Initializing SDL failed..." << endl;
	}
	bool quit = false;



	while (true) {
		/* Update particles
		 * Draw Particles
		 * Check for messages/events
		 */

		if(screen.processEvents() == false ){
			break;
		}
	}

	screen.close();

	return 0;
}
