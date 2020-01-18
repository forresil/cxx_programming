//============================================================================
// Name        : SDL-Basic.cpp
// Author      : forresil
// Version     :
// Copyright   : C++ Tutorial for Complete Beginners (Udemy)
// Description : Hello World in C++, Ansi-style
//
// To Compile:
// ------------
// In Project > Properties > C/C++ Build > Settings >
// 1) > GCC C++ Compiler > Includes
// Include paths (-I): "...SDL2-2.0.9\i686-w64-mingw32\include\SDL2"
//
// 2) > MinGW C++ Linker > Libraries >
// libraries (-l): mingw32, SDL2main, libSDL2
// Library search path (-L): "...SDL2-2.0.9\i686-w64-mingw32\lib"
//
// 3) Make sure that "...SDL2-2.0.9\i686-w64-mingw32\bin\SDL.dll"
// is in the same directory as the executable.
//
// See: http://lazyfoo.net/SDL_tutorials/lesson01/windows/eclipse/index.php
//============================================================================

#include <iostream>
#include <SDL.h>

using namespace std;

int main(int argc, char *argv[])
{
	//CONSTANTS
	const int SCREEN_WIDTH = 800;
	const int SCREEN_HEIGHT = 600;

	cout << "SDL Test\n--------------\n" << endl; // prints Title\n

	// Init SDL Engine
	if (SDL_Init(SDL_INIT_VIDEO) < 0)
	{
		cout << "SDL init failed." << endl;
		return 1;
	}

	cout << "SDL Init succeded" << endl;

	// Create and show a Window
	SDL_Window *window = SDL_CreateWindow("Particle Fire Explosion",
	SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH,
			SCREEN_HEIGHT, SDL_WINDOW_SHOWN);

	if (window == NULL)
	{
		SDL_Quit();
		return 2;
	}

	// Control variables for main loop
	bool quit = false;
	SDL_Event event;

	// main loop
	while (!quit)
	{
		// Update particles
		// Draw particles
		// Check for messages/events

		while (SDL_PollEvent(&event))
		{
			if (event.type == SDL_QUIT)
			{
				quit = true;
			}
		}
	}

	// Clean up and exit
	SDL_DestroyWindow(window);
	SDL_Quit();

	return 0;
}
