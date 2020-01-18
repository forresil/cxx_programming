/*
 * FractalCreator.h
 *
 *  Created on: 07.09.2019
 *      Author: forba
 */

#ifndef FRACTALCREATOR_H_
#define FRACTALCREATOR_H_
#include <memory>
#include <string>

#include "Bitmap.h"
#include "Zoom.h"
#include "ZoomList.h"
#include "RGB.h"

using std::unique_ptr;
namespace forresil {

class FractalCreator {
private:
	int m_width;
	int m_height;
	unique_ptr<int[]> m_histogram;
	unique_ptr<int[]> m_fractal;
	Bitmap m_bitmap;
	ZoomList m_zoomList;
	int m_total{0};

	std::vector<int> m_ranges;
	std::vector<RGB> m_colors;
	std::vector<int> m_rangeTotals;

	bool m_bGotFirstRange{false};


private:

	void calculateIteration();
	void calculateTotalIterations();
	void calculateRangeTotals();
	void drawFractal();
	void writeBitmap(std::string name);

public:
	FractalCreator(int width, int height);
	virtual ~FractalCreator();
	void addRange(double rangeEnd, const RGB& rgb);
	void addZoom(const Zoom& zoom);
	void run(std::string name);
};

} /* namespace forresil */

#endif /* FRACTALCREATOR_H_ */
