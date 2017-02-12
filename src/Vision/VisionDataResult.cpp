/*
 * VisionDataResult.cpp
 *
 *  Created on: Feb 11, 2017
 *      Author: Lydia and Eli (mostly Lydia)
 *
 */

#include <Vision/VisionDataResult.h>

VisionDataResult::VisionDataResult(double area, double x, double y) {
    this->area = area;
    this->x = x;
    this->y = y;
}

double VisionDataResult::GetArea() const{
	return area;
}
double VisionDataResult::GetX() const{
	return x;
}
double VisionDataResult::GetY() const{
	return y;
}

