//============================================================================
// Name        : SDL.cpp
// Author      : Kirby James
// Version     : 0.1.0
// Description : Simply Utilizing SDL in C++, Ansi-style
//============================================================================

#include <iostream>
#include <SDL.h>
using namespace std;

int main() {

	const int SCREEN_WIDTH = 800;
	const int SCREEN_HEIGHT= 600;

	if(SDL_Init(SDL_INIT_VIDEO) < 0){
		cout << "SDL init failed. " << endl;
		return 1;
	}

	/* Creates/Opens a Windows */
	SDL_Window *window = SDL_CreateWindow("Particle Fire Explosion",
			SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);

	if(window == NULL){
		SDL_Quit();
		return 2;
	}

	bool quit = false;

	SDL_Event event;

	while(!quit){
		/* Update particles
		 * Draw Particles
		 * Check for messages/events
		 */

		while(SDL_PollEvent(&event)) {
			if(event.type == SDL_QUIT){
				quit = true;
			}
		}
	}

	SDL_DestroyWindow(window);
	SDL_Quit();
	return 0;
}
