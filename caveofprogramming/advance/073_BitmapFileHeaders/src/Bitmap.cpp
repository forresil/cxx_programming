/*
 * Bitmap.cpp
 *
 *  Created on: 06.09.2019
 *      Author: forba
 */

#include "Bitmap.h"

#include <iostream>
#include <fstream>
#include "BitmapFileHeader.h"
#include "BitmapInfoHeader.h"

//using std::ofstream;

using namespace forresil;

namespace forresil {

Bitmap::Bitmap(std::int32_t width, std::int32_t height) :
		m_width(width), m_height(height), m_pPixel(
				new uint8_t[width * height * 3] { }) {
	// TODO Auto-generated constructor stub

}

bool Bitmap::write(std::string filename) {
	BitmapFileHeader fileHeader;
	BitmapInfoHeader infoHeader;

	fileHeader.fileSize = sizeof(BitmapFileHeader) + sizeof(BitmapInfoHeader)
			+ m_width * m_height * 3; // 3 = number of colors!
	fileHeader.dataOffset = sizeof(BitmapFileHeader) + sizeof(BitmapInfoHeader);

	infoHeader.width = m_width;
	infoHeader.height = m_height;

	std::ofstream file;
	file.open(filename, std::ios::out | std::ios::binary);
	if (!file) {
		return false;
	}

	file.write((char*) &fileHeader, sizeof(fileHeader));
	file.write((char*) &infoHeader, sizeof(infoHeader));
	file.write((char*) m_pPixel.get(), m_width * m_height * 3);

	file.close();
	if (!file) {
		return false;
	}

	return true;
}

void Bitmap::setPixel(int x, int y, uint8_t red, uint8_t green, uint8_t blue) {
	uint8_t *pPixel = m_pPixel.get();
	pPixel += (y * 3) * m_width + (x * 3);
	pPixel[0] = blue;
	pPixel[1] = green;
	pPixel[2] = red;
}

Bitmap::~Bitmap() {
	// TODO Auto-generated destructor stub
}

} /* namespace forresil */
