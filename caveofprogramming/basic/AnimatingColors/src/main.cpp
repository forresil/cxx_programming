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

#include <SDL_main.h>
#include <iostream>
#include <math.h>

#include "Screen.h"

using forresil::Screen;

using namespace std;

////////////////////////////////////////////////////////////////////////////////
/// MAIN
////////////////////////////////////////////////////////////////////////////////
int main(int argc, char *argv[])
{
	cout << "SDL Animating Colors\n--------------\n" << endl; // prints Title\n

	Screen screen;

	// Init the screen
	if (screen.init() == false)
	{
		cout << "Error initializing SDL." << endl;
	}

	// main loop
	while (true)
	{
		// Update particles

		// Draw particles
		int elapsed = SDL_GetTicks();
		unsigned char green =
				(unsigned char) ((1 + sin(elapsed * 0.0001)) * 128);
		unsigned char red = (unsigned char) ((1 + sin(elapsed * 0.0002)) * 128);
		unsigned char blue = (unsigned char) ((1 + sin(elapsed * 0.0003)) * 128);

		for (int y = 0; y < Screen::SCREEN_HEIGHT; y++)
		{
			for (int x = 0; x < Screen::SCREEN_WIDTH; x++)
			{
				screen.setPixel(x, y, red, green, blue);
			}
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
