/*
 * CollectGearwithRollerRunning.cpp
 *
 *  Created on: Apr 15, 2017
 *      Author: Apex5803
 */

#include <Commands/GearerCommands/CollectGearwithRollerRunning.h>

CollectGearwithRollerRunning::CollectGearwithRollerRunning() {
	// TODO Auto-generated constructor stub
	Requires(Robot::gearer.get());
}

void CollectGearwithRollerRunning::Initialize()
{

}

void CollectGearwithRollerRunning::Execute()
{
	Robot::gearer->In();
}

bool CollectGearwithRollerRunning::IsFinished()
{
	return false;
}

void CollectGearwithRollerRunning::End()
{
	Robot::gearer->Off();
}

void CollectGearwithRollerRunning::Interrupted()
{
	End();
}
