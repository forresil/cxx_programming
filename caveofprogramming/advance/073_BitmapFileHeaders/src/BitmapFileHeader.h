/*
 * BitmapFileHeader.h
 *
 *  Created on: 06.09.2019
 *      Author: forba
 */

#ifndef BITMAPFILEHEADER_H_
#define BITMAPFILEHEADER_H_

#include <cstdint>

namespace forresil {
#pragma pack(2)
struct BitmapFileHeader {
	char header[2] { 'B', 'M' };
	std::int32_t fileSize;
	std::int32_t reserved { 0 };
	std::int32_t dataOffset;

};
}

#endif /* BITMAPFILEHEADER_H_ */
