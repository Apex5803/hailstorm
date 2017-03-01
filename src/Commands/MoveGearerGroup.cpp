/*
 * MoveGearerGroup.cpp
 *
 *  Created on: Feb 28, 2017
 *      Author: first
 */

#include <Commands/MoveGearerGroup.h>
#include "MoveGearer.h"
#include "MoveGearerReverse.h"
#include "SecureGear.h"
#include "UnsecureGear.h"

MoveGearerGroup::MoveGearerGroup() {
	// TODO Auto-generated constructor stub
	if(Robot::oi->getXBoxController()->GetBumper(GenericHID::kLeftHand))
	{
		AddSequential(new MoveGearer(false));
		printf("collecting gear \n");
	}

	else if(Robot::oi->getXBoxController()->GetTriggerAxis(GenericHID::kLeftHand) >=.75)
	{
		printf("scoring gear \n");
		AddSequential(new UnsecureGear(), 1);
		AddSequential(new MoveGearerReverse());
	}

	if(Robot::oi->getXBoxController()->GetPOV(0) == 0){
		printf("unsecuring gear \n");
		AddSequential(new UnsecureGear());
	}

	else if(Robot::oi->getXBoxController()->GetPOV(0) == 180){
		printf("securing gear \n");
		AddSequential(new SecureGear());
	}

}

