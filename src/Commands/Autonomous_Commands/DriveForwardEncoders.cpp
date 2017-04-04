/*
 * DriveForwardEncoders.cpp
 *
 *  Created on: Mar 3, 2017
 *      Author: Apex5803
 */

#include <Commands/Autonomous_Commands/DriveForwardEncoders.h>
#include "Commands/Autonomous_Commands/DriveDistance.h"
#include "Commands/TankDrive.h"

DriveForwardEncoders::DriveForwardEncoders() {
	// TODO Auto-generated constructor stub
	AddSequential(new DriveDistance(-100., .5), 7);

	AddSequential(new TankDrive(0., 0.), 2);
}

DriveForwardEncoders::~DriveForwardEncoders() {
	// TODO Auto-generated destructor stub
}

