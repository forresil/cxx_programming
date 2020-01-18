/*
 * Bitmap.h
 *
 *  Created on: 06.09.2019
 *      Author: forba
 */

#ifndef BITMAP_H_
#define BITMAP_H_
#include <memory>
#include <string>

namespace forresil {

class Bitmap {
private:
	std::int32_t m_width { 0 };
	std::int32_t m_height { 0 };
	std::unique_ptr<uint8_t[]> m_pPixel { nullptr };

public:
	Bitmap(std::int32_t width, std::int32_t height);
	bool write(std::string filename);
	void setPixel(int x, int y, uint8_t red, uint8_t green, uint8_t blue);
	virtual ~Bitmap();
};

} /* namespace forresil */

#endif /* BITMAP_H_ */
