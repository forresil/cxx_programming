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

#include <stddef.h>
#include <SDL.h>
#include <SDL_events.h>
#include <SDL_pixels.h>
#include <SDL_render.h>
#include <SDL_stdinc.h>
#include <SDL_video.h>
#include <iostream>
#include <cstring>

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

	SDL_Renderer *renderer = SDL_CreateRenderer(window, -1,
			SDL_RENDERER_PRESENTVSYNC);
	if (renderer == NULL)
	{
		cout << "Couldn't create renderer" << endl;
		SDL_DestroyWindow(window);
		SDL_Quit();
		return 3;
	}

	SDL_Texture *texture = SDL_CreateTexture(renderer, SDL_PIXELFORMAT_RGBA8888,
			SDL_TEXTUREACCESS_STATIC, SCREEN_WIDTH, SCREEN_HEIGHT);
	if (texture == NULL)
	{
		cout << "Could not create texture" << endl;
		SDL_DestroyRenderer(renderer);
		SDL_DestroyWindow(window);
		SDL_Quit();
		return 4;
	}

	// allocate some memory for the pixels values
	Uint32 *buffer = new Uint32[SCREEN_WIDTH * SCREEN_HEIGHT];
	//fill buffer with some values (here 0xFF = 255 = color white)
	memset(buffer, 0xFF, SCREEN_WIDTH * SCREEN_HEIGHT * sizeof(Uint32));

	//update
	SDL_UpdateTexture(texture, NULL, buffer, SCREEN_WIDTH * sizeof(Uint32));
	SDL_RenderClear(renderer);
	SDL_RenderCopy(renderer, texture, NULL, NULL);
	SDL_RenderPresent(renderer);

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
	delete[] buffer;
	SDL_DestroyRenderer(renderer);
	SDL_DestroyTexture(texture);
	SDL_DestroyWindow(window);
	SDL_Quit();

	return 0;
}
