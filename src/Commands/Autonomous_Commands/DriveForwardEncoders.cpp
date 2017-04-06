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
	AddSequential(new DriveDistance(-93., .5), 7);
	printf("Drove in direction of gear n/ ");
}

DriveForwardEncoders::~DriveForwardEncoders() {
	// TODO Auto-generated destructor stub
}

