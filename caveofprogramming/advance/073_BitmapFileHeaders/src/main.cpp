//============================================================================
// Name        : 073_BitmapFileHeaders.cpp
// Author      : S. Forrer
// Version     :
// Copyright   : This code comes from Udemy C++ Courses
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>

#include "FractalCreator.h"
#include "Zoom.h"
#include "RGB.h"

using namespace std;
using namespace forresil;

int main() {

	cout << "Bitmap File Header\n" << endl; // prints Title\n

	const int width = 800;
	const int height = 600;

	FractalCreator fractalCreator(width, height);

	double rangeEnd = 0.0;
	RGB rgb(0,0,0);
	fractalCreator.addRange(rangeEnd, rgb);  // start range
	fractalCreator.addRange(0.3, RGB(255,0,0));
	fractalCreator.addRange(0.5, RGB(255,255,0));
	fractalCreator.addRange(1.0, RGB(255,255,255));

	fractalCreator.addZoom(Zoom(295, 202, 0.1));
	fractalCreator.addZoom(Zoom(312, 304, 0.1));
	fractalCreator.run("test.bmp");

//	RGB rgb1(4,5,6);
//	RGB rgb2(1,2,3);
//	RGB rgb3 = rgb1 - rgb2;
//	cout << rgb3.r << ", " << rgb3.g << ", " << rgb3.b << endl;

	// make the pixel in the midle bright white
	//bitmap.setPixel(WIDTH / 2, HEIGHT / 2, 255, 255, 255);

	// make all pixels bright red
//	for (int y = 0; y < HEIGHT; y++) {
//		for (int x = 0; x < WIDTH; x++) {
//			bitmap.setPixel(x, y, 255, 0, 0);
//		}
//	}

//	double min = 999999;
//	double max = -999999;

//	m_zoomList.add(Zoom(m_width/2, m_height/2, 4.0/m_width));
//	m_zoomList.add(Zoom(295, m_height - 202, 0.1));
//	m_zoomList.add(Zoom(312, m_height - 304, 0.1));

//	for (int y = 0; y < m_height; y++) {
//		for (int x = 0; x < m_width; x++) {
////			double xFractal = (x - WIDTH / 2 - 200) * 2.0 / HEIGHT;
////			double yFractal = (y - HEIGHT / 2) * 2.0 / HEIGHT;
////			int iterations = Mandelbrot::getIterations(xFractal, yFractal);
//
//			// In C++11
//			pair<double, double> coords = m_zoomList.doZoom(x, y);
//			int iterations = Mandelbrot::getIterations(coords.first, coords.second);
//
//			// In C++17
////			auto[xFractal, yFractal] = zoomList.doZoom(x, y);
////			int iterations = Mandelbrot::getIterations(xFractal, yFractal);
//
//			m_fractal[y * m_width + x] = iterations;
//			if (iterations != Mandelbrot::MAX_ITERATIONS) {
//				m_histogram[iterations]++;
//			}
//
////			uint8_t color = (uint8_t) (256 * (double) iterations
////					/ Mandelbrot::MAX_ITERATIONS);
//
////			if(yFractal < min) min = yFractal;
////			if(yFractal > max) max = yFractal;
//
////			color = color * color * color;
////
////			bitmap.setPixel(x, y, 0, color, 0);
////			if (color < min)
////				min = color;
////			if (color > max)
////				max = color;
//		}
//	}

//	std::cout << std::endl;
//	int count { 0 };
//	for (int i = 0; i < Mandelbrot::MAX_ITERATIONS; i++) {
//		std::cout << histogram[i] << " " << std::flush;
//		count += histogram[i];
//	}
//	std::cout << count << "; " << WIDTH * HEIGHT << std::endl;
//	std::cout << min << ", " << max << std::endl;

//	int total = 0;
//	for (int i = 0; i < Mandelbrot::MAX_ITERATIONS; i++) {
//		total += m_histogram[i];
//	}

//	for (int y = 0; y < m_height; y++) {
//		for (int x = 0; x < m_width; x++) {
//
//			uint8_t red = 0;
//			uint8_t green = 0;
//			uint8_t blue = 0;
//
//			int iterations = m_fractal[y * m_width + x];
////------------------------------------------------------------- NEW
//			if (iterations != Mandelbrot::MAX_ITERATIONS) {
//				double hue = 0.0;
//				for (int i; i <= iterations; i++) {
//					hue += ((double) m_histogram[i]) / total;
//				}
//				green = hue * 255;
////				green = pow(255, hue);
//			}
//
//			m_bitmap.setPixel(x, y, red, green, blue);
//
////-------------------------------------------------------------
//
////				uint8_t color = (uint8_t) (256 * (double) iterations
////						/ Mandelbrot::MAX_ITERATIONS);
////
////				color = color * color * color;
////				bitmap.setPixel(x, y, 0, color, 0);
////				if (color < min)
////					min = color;
////				if (color > max)
////					max = color;
////-------------------------------------------------------------
//		}
//	}

//	m_bitmap.write(filename);

	cout << "Finished!\n" << endl; // prints Title\n
	return 0;
}
