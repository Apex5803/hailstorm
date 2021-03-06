/*
 * VisionProcessing.h
 *
 *  Created on: Feb 12, 2017
 *      Author: first
 */

#ifndef SRC_VISION_VISIONPROCESSING_H_
#define SRC_VISION_VISIONPROCESSING_H_
#include <WPILib.h>
#include <iostream>

class VisionProcessing {
public:
	VisionProcessing(); //constructor
	std::tuple<double,double,double> GetRawData(); //Get new data from the GRIP vision system NetworkTables.This will return Area, X, and Y Position of the largest contour found
	std::tuple<double,double> GetScaledData(double Xpixels, double Ypixels); //Convert pixels a heading and pitch setpoint (pixels to heading -1 to 1)

private:
	std::vector<double> arr;
	std::vector<double> x;
	std::vector<double> y;

	std::shared_ptr<NetworkTable> table;

	double largest; //initialize largest target
	double largestX;
	double largestY;
	double secondLargest; //initialize 2nd largest target --> we may not have to use this right now
	double secondLargestX;
	double secondLargestY;
	double yDistance; //declare a large number
};

#endif /* SRC_VISION_VISIONPROCESSING_H_ */
