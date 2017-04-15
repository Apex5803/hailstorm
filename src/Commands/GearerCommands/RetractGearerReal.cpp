/*
 * RetractGearerReal.cpp
 *
 *  Created on: Apr 15, 2017
 *      Author: Apex5803
 */

#include <Commands/GearerCommands/RetractGearerReal.h>

RetractGearerReal::RetractGearerReal() {
	// TODO Auto-generated constructor stub
	AddSequential(new RetractGearer(), .1);
	AddParallel(new CollectGearwithRollerRunning(), 1.);



}

