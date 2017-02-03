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
//		Update particles
//		Draw Particles
		for(int y=0;y < Screen::SCREEN_HEIGHT; y++){
			for(int x=0; x < Screen::SCREEN_WIDTH; x++){
				screen.setPixel(x,y,128,0,255);
			}
		}

		screen.setPixel(400, 300, 255, 255, 255);

		// Draw the screen
		screen.update();

//		Check for messages/events
		if(screen.processEvents() == false ){
			break;
		}
	}

	screen.close();

	return 0;
}
