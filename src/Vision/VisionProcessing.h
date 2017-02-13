/*
 * VisionProcessing.h
 *
 *  Created on: Feb 12, 2017
 *      Author: first
 */

#ifndef SRC_VISION_VISIONPROCESSING_H_
#define SRC_VISION_VISIONPROCESSING_H_
#include <WPILib.h>
#include <Vision/VisionDataResult.h>
#include <iostream>

class VisionProcessing {
public:
	VisionDataResult GetNewData();

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
