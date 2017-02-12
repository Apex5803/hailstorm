/*
 * MoveBallCollector.cpp
 *
 *  Created on: Feb 11, 2017
 *      Author: first
 */

#include <Commands/MoveBallCollector.h>

MoveBallCollector::MoveBallCollector() {
	// TODO Auto-generated constructor stub
	Requires(Robot::ballCollector.get());

}

void MoveBallCollector::Initialize(){
	Robot::ballCollector->Up();
}

void MoveBallCollector::Execute(){
	/*if(Robot::oi->getXBoxController()->GetAButton() == true &&
			Robot::pdp->GetCurrent(INTAKE_ROLLER) < INTAKE_ROLLER_CURRENT_LIMIT ) {
		Robot::ballCollector->In();
	}
	else
	{
		Robot::ballCollector->MotorOff();
	}*/
	Robot::ballCollector->In();
}

bool MoveBallCollector::IsFinished(){
	return false;
}

void MoveBallCollector::End(){
	Robot::ballCollector->MotorOff();
}

void MoveBallCollector::Interrupted(){

}
