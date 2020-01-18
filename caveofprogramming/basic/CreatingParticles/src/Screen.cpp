/*
 * Screen.cpp
 *
 *  Created on: 13.05.2019
 *      Author: forba
 */

#include "Screen.h"

#include <SDL_pixels.h>
#include <SDL_render.h>
#include <SDL_stdinc.h>
#include <SDL_video.h>
#include <cstring>

namespace forresil
{
/**
 * @brief Screen Constructor
 * @details Initialize the window, renderer, texture and buffer members for this
 * instance.
 */
Screen::Screen() :
		m_window(NULL), m_renderer(NULL), m_texture(NULL), m_buffer(NULL)
{
	// TODO Auto-generated constructor stub

}

/**
 * @brief Updates the actual screen instance with pixel color, texture, render, etc..
 */
void Screen::update()
{
	//update
	SDL_UpdateTexture(m_texture, NULL, m_buffer, SCREEN_WIDTH * sizeof(Uint32));
	SDL_RenderClear(m_renderer);
	SDL_RenderCopy(m_renderer, m_texture, NULL, NULL);
	SDL_RenderPresent(m_renderer);
}

/**
 * @brief Init the screen
 * @return true if everything is ok, false if an error occurs.
 */
bool Screen::init()
{
	// Init SDL Engine
	if (SDL_Init(SDL_INIT_VIDEO) < 0)
	{
		return false;
	}

	// Create and show a Window
	m_window = SDL_CreateWindow("Particle Fire Explosion",
	SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH,
			SCREEN_HEIGHT, SDL_WINDOW_SHOWN);

	if (m_window == NULL)
	{
		SDL_Quit();
		return false;
	}

	m_renderer = SDL_CreateRenderer(m_window, -1, SDL_RENDERER_PRESENTVSYNC);
	if (m_renderer == NULL)
	{
		SDL_DestroyWindow(m_window);
		SDL_Quit();
		return false;
	}

	m_texture = SDL_CreateTexture(m_renderer, SDL_PIXELFORMAT_RGBA8888,
			SDL_TEXTUREACCESS_STATIC, SCREEN_WIDTH, SCREEN_HEIGHT);
	if (m_texture == NULL)
	{
		SDL_DestroyRenderer(m_renderer);
		SDL_DestroyWindow(m_window);
		SDL_Quit();
		return false;
	}

	// allocate some memory for the pixels values
	m_buffer = new Uint32[SCREEN_WIDTH * SCREEN_HEIGHT];

	//fill buffer with zero values (here 0xFF = 255 = color white)
	memset(m_buffer, 0, SCREEN_WIDTH * SCREEN_HEIGHT * sizeof(Uint32));

	// Draw the screen
	update();
	return true;
}

/**
 * @brief Check for messages/events.
 * @return true if no event is registered, false if user closes the window.
 */
bool Screen::processEvents()
{
	SDL_Event event;
	while (SDL_PollEvent(&event))
	{
		// return false if user closes the window
		if (event.type == SDL_QUIT)
		{
			return false;
		}
	}
	// return true if no event happens
	return true;
}

void Screen::setPixel(int x, int y, Uint8 red, Uint8 green, Uint8 blue)
{
	// refuse wrong parameters
	if (x < 0 || x >= SCREEN_WIDTH || y < 0 || y >= SCREEN_HEIGHT)
	{
		return;
	}

	Uint32 color = 0;

	color += red;
	color <<= 8;
	color += green;
	color <<= 8;
	color += blue;
	color <<= 8;
	color += 0xFF;

	m_buffer[(y * SCREEN_WIDTH) + x] = color;
}

/**
 * @brief Free memory and tide off
 */
void Screen::close()
{
	// Clean up and exit
	delete[] m_buffer;
	SDL_DestroyRenderer(m_renderer);
	SDL_DestroyTexture(m_texture);
	SDL_DestroyWindow(m_window);
	SDL_Quit();

}

} /* namespace forresil */

