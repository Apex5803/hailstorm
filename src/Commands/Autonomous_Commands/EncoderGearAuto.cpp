/*
 * EncoderGearAuto.cpp
 *
 *  Created on: Mar 2, 2017
 *      Author: first
 */

#include <Commands/Autonomous_Commands/EncoderGearAuto.h>
#include "Commands/Autonomous_Commands/DriveDistance.h"
#include "Commands/GearerCommands/MoveGearerAuto.h"

EncoderGearAuto::EncoderGearAuto() {
	// TODO Auto-generated constructor stub
	printf("Encoder Gear Auto \n");
	AddSequential(new DriveDistance(57., -.4));
	printf("0. Moved backwards slowly \n");
	AddSequential(new DriveDistance(0., 0.));
	printf("5. Stopped \n");
	AddParallel(new MoveGearerAuto(), 3);
	printf ("10. Ran Gearer");
	AddSequential(new DriveDistance(15., .4));
	printf("15. Moved forward while moving the gear! \n");
	AddSequential(new DriveDistance(0., 0.));
	printf("20. Stopped! \n");

}

