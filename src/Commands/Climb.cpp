/*
 * Climb.cpp
 *
 *  Created on: Feb 20, 2017
 *      Author: first
 */

#include <Commands/Climb.h>
#include "Subsystems/Pneumatics.h"

Climb::Climb() : Command() {
	// TODO Auto-generated constructor stub
	Requires(Robot::climber.get());
	Requires(Robot::pneumatics.get());
}

void Climb::Initialize()
{

}

void Climb::Execute()
{
	//TODO:  Consider adding current limiting later, Robot::pdp->GetCurrent(INTAKE_ROLLER) < INTAKE_ROLLER_CURRENT_LIMIT
	Robot::climber->ClimbUp();
	RobotMap::compressor->Stop();
}

bool Climb::IsFinished()
{
	return false;
}

void Climb::End()
{
	Robot::climber->StopClimbing();
	RobotMap::compressor->Start();
}

void Climb::Interrupted()
{
	End();
}

