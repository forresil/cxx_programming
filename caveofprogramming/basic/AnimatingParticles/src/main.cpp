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

#include <math.h>
#include <stdlib.h>
#include <SDL_timer.h>
#include <time.h>
#include <iostream>

#include "Particle.h"
#include "Screen.h"
#include "Swarm.h"

using forresil::Particle;
using forresil::Screen;
using forresil::Swarm;

using namespace std;

////////////////////////////////////////////////////////////////////////////////
/// MAIN
////////////////////////////////////////////////////////////////////////////////
int main(int argc, char *argv[])
{
	cout << "SDL Animating Colors\n--------------\n" << endl; // prints Title\n

	srand(time(NULL));

	Screen screen;

	// Init the screen
	if (screen.init() == false)
	{
		cout << "Error initializing SDL." << endl;
	}

	Swarm swarm;

	// main loop
	while (true)
	{
		// Update particles

		// Draw particles
		int elapsed = SDL_GetTicks();

		screen.clear();
		swarm.update();

		unsigned char green =
				(unsigned char) ((1 + sin(elapsed * 0.0001)) * 128);
		unsigned char red = (unsigned char) ((1 + sin(elapsed * 0.0002)) * 128);
		unsigned char blue = (unsigned char) ((1 + sin(elapsed * 0.0003)) * 128);

		const Particle * const pParticles = swarm.getParticles();

		for (int i = 0; i < Swarm::NPARTICLES; ++i)
		{
			Particle particle = pParticles[i];
			int x = (particle.m_x + 1) * Screen::SCREEN_WIDTH / 2;
			int y = (particle.m_y + 1) * Screen::SCREEN_HEIGHT / 2;

			screen.setPixel(x, y, red, green, blue);
		}

		// Draw the screen
		screen.update();

		// Check for messages/events
		if (screen.processEvents() == false)
		{
			break;
		}

	}

	screen.close();

	return 0;
}
