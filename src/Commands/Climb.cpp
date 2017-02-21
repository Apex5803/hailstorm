/*
 * Climb.cpp
 *
 *  Created on: Feb 20, 2017
 *      Author: first
 */

#include <Commands/Climb.h>

Climb::Climb() : Command() {
	// TODO Auto-generated constructor stub
	Requires(Robot::ballCollector.get());
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
}

bool Climb::IsFinished()
{
	return false;
}

void Climb::End()
{
	Robot::ballCollector->MotorOff();
}

void Climb::Interrupted()
{
	End();
}

