/*
 * VisionProcessing.cpp
 *
 *  Created on: Feb 12, 2017
 *      Author: Eli Girod
 */

#include <Vision/VisionProcessing.h>
#include <Vision/VisionDataResult.h>
#include <math.h> //we need math!
#include <iostream>

VisionDataResult VisionProcessing::GetRawData() {

	table = NetworkTable::GetTable("GRIP/myContoursReport");

	//read values into a local array
	arr = table->GetNumberArray("area", llvm::ArrayRef<double>());
	x = table->GetNumberArray("centerX", llvm::ArrayRef<double>());
	y = table->GetNumberArray("centerY", llvm::ArrayRef<double>());


	//look for targets with a minimum area (or this can be done in GRIP filtering)
	largest = 0; //initialize largest target
	largestX = 0;
	largestY = 0;
	secondLargest = 0; //initialize 2nd largest target --> we may not have to use this right now
	secondLargestX = 0;
	secondLargestY = 0;
	yDistance = 0; //declare a large number


	for (unsigned int i=0; i < arr.size(); i++){

		if(arr[i]> largest) //find the largest array, record the size and X Y Position
			{
				largest=arr[i];
				largestX = x[i];
				largestY = y[i];
			}
		if((arr[i]> secondLargest) & (arr[i] < largest)) //if the current area is bigger than existing second largest but smaller than the largest, record it
			{
				secondLargest = arr[i];
				secondLargestX = x[i];
				secondLargestY = y[i];
			}

		yDistance = abs(largestY - secondLargestY); //get the absolute value of the distance between the Y points
		}

	//Return the position of the largest target
	return VisionDataResult(largest, largestX, largestY);
}

std::tuple<double,double> VisionProcessing::GetScaledData(double Xpixels, double Ypixels){

	//Heading here is from -1 to 1 where 0 is the center of the frame (no position adjustment)
    double heading=0; //initialize set point to center of the frame
    double pitch=0;
	//The heading formula is H = (Px - Xresolution/2)/(Xresolution/2)

    //Set the camera image resolution
	//Positions in the camera are pixels relative to the resolution of the camera. (0,0) is the upper left camera
	double Xresolution = 320;
	double Yresolution = 160;

	//convert pixels to heading
	heading = (Xpixels - Xresolution/2)/(Xresolution/2);
	pitch 	= (Ypixels - Yresolution/2)/(Yresolution/2);

	return std::make_tuple(heading,pitch);

}

//VisionDataResult VisionProcessing::~GetNewData() { //Do we need this destructor??
	// TODO Auto-generated destructor stub
//}

