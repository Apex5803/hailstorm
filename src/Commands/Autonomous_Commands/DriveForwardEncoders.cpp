/*
 * DriveForwardEncoders.cpp
 *
 *  Created on: Mar 3, 2017
 *      Author: Apex5803
 */

#include <Commands/Autonomous_Commands/DriveForwardEncoders.h>
#include "Commands/Autonomous_Commands/DriveDistance.h"

DriveForwardEncoders::DriveForwardEncoders() {
	// TODO Auto-generated constructor stub
	AddSequential(new DriveDistance(-50., .5), 7);
	printf("Drove in direction of gear n/ ");

	AddSequential(new DriveDistance(0., 0.), 2);
	printf("Guaranteed Stop");
}

DriveForwardEncoders::~DriveForwardEncoders() {
	// TODO Auto-generated destructor stub
}

