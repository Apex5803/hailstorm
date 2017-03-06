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
	Requires(Robot::ballCollector.get());
	Requires(Robot::pneumatics.get());
}

void Climb::Initialize()
{

}

void Climb::Execute()
{
	if(Robot::oi->getXBoxController()->GetYButton()
				//&& Robot::pdp->GetCurrent(INTAKE_ROLLER) < INTAKE_ROLLER_CURRENT_LIMIT
				) {
			Robot::ballCollector->Climb();
			Robot::ballCollector->Down();
		}
	/*
		else
		{
			Robot::ballCollector->MotorOff();
		}
		*/
	RobotMap::compressor->Stop();
}

bool Climb::IsFinished()
{
	return false;
}

void Climb::End()
{
	Robot::ballCollector->MotorOff();
	RobotMap::compressor->Start();
}

void Climb::Interrupted()
{
	End();
}

