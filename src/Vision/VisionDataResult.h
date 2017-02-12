/*
 * VisionDataResult.h
 *
 *  Created on: Feb 11, 2017
 *      Author: first
 */

#ifndef SRC_VISIONDATARESULT_H_
#define SRC_VISIONDATARESULT_H_

class VisionDataResult {
public:
	VisionDataResult(double area, double x, double y);
	double GetArea() const;
	double GetX() const;
	double GetY() const;

private:
	double area;
	double x;
	double y;
};

#endif /* SRC_VISIONDATARESULT_H_ */
