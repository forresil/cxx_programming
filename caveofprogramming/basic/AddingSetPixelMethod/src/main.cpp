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

#include <SDL_events.h>
#include <iostream>

#include "Screen.h"

using forresil::Screen;

using namespace std;

int main(int argc, char *argv[])
{
	cout << "SDL Creating the Screen Class\n--------------\n" << endl; // prints Title\n

	Screen screen;

	// Init the screen
	if (screen.init() == false)
	{
		cout << "Error initializing SDL." << endl;
	}

	// Control variables for main loop
	bool quit = false;

	// main loop
	while (!quit)
	{
		// Update particles

		// Draw particles
		for (int y = 0; y < Screen::SCREEN_HEIGHT; ++y) {
			for (int x = 0; x < Screen::SCREEN_WIDTH; ++x) {
				screen.setPixel(x, y, 128, 0, 255);
			}
		}
		screen.setPixel(400, 300, 255, 255, 255);

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
