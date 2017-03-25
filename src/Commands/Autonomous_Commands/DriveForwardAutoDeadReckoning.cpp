/*
 * DriveForwardAuto.cpp
 *
 *  Created on: Mar 3, 2017
 *      Author: Apex5803
 */

#include <Commands/Autonomous_Commands/DriveForwardAutoDeadReckoning.h>
#include "../TankDrive.h"
DriveForwardAutoDeadReckoning::DriveForwardAutoDeadReckoning() {
	// TODO Auto-generated constructor stub
	AddSequential(new TankDrive(-.5), 3.5);
	printf("Drove in direction of gearer dead reckoning n/ ");

	AddSequential(new TankDrive(0.0), 2.0);
	printf("Guaranteed Stop");

}



