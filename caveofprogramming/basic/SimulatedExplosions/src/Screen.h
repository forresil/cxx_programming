/*
 * Screen.h
 *
 *  Created on: 13.05.2019
 *      Author: forba
 */

#ifndef SCREEN_H_
#define SCREEN_H_
#include <SDL.h>

namespace forresil
{

class Screen
{
public:
//CONSTANTS
	const static int SCREEN_WIDTH = 800; // static: needed only once for the class
	const static int SCREEN_HEIGHT = 600;

private:
	SDL_Window *m_window; // this variables have the m_ prefix to indicate they're instance (member) variables!
	SDL_Renderer *m_renderer;
	SDL_Texture *m_texture;
	Uint32 *m_buffer;


public:
	Screen();
	bool init();
	void setPixel(int x, int y, Uint8 red, Uint8 green, Uint8 blue);
	void update();
	bool processEvents();
	void close();
	void clear();
};

} /* namespace forresil */

#endif /* SCREEN_H_ */
