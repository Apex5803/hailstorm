/*
 * VisionProcessing.h
 *
 *  Created on: Feb 12, 2017
 *      Author: first
 */

#ifndef SRC_VISION_VISIONPROCESSING_H_
#define SRC_VISION_VISIONPROCESSING_H_

class VisionProcessing {
public:
	VisionProcessing(){
		table = NetworkTable::GetTable("GRIP/myContoursReport");
	}

	std::shared_ptr<NetworkTable> table;

private:
	std::vector<double> arr;
	std::vector<double> x;
	std::vector<double> y;
};

#endif /* SRC_VISION_VISIONPROCESSING_H_ */
