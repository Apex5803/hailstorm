/*
 * MoveGearer.cpp
 *
 *  Created on: Feb 4, 2017
 *      Author: first
 */

#include <Commands/MoveGearer.h>

MoveGearer::MoveGearer(bool isAuto): Command() {
	// TODO Auto-generated constructor stub
	Requires(Robot::gearer.get());
	this->isAuto = isAuto;
}

void MoveGearer::Initialize(){

}

void MoveGearer::Execute(){


	if(Robot::oi->getXBoxController()->GetBumper(GenericHID::kLeftHand)){
			Robot::gearer->In();
			Robot::gearer->Extend();
			//Robot::gearer->UnSecure();
	}

	if(Robot::oi->getXBoxController()->GetTriggerAxis(GenericHID::kLeftHand) >=.75){
		Robot::gearer->Out();
		Robot::gearer->Extend();
	}

	if(isAuto)
	{
		Robot::gearer->Out();
		Robot::gearer->Extend();
	}

}

bool MoveGearer::IsFinished(){
	return false;
}

void MoveGearer::End(){
	Robot::gearer->Retract();
	Robot::gearer->Off();

	//Robot::gearer->Secure();
}

void MoveGearer::Interrupted(){
	End();

}
