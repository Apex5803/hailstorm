/*
 * MoveGearer.cpp
 *
 *  Created on: Feb 4, 2017
 *      Author: first
 */

#include <Commands/MoveGearer.h>
#include <stdio.h>

MoveGearer::MoveGearer(bool isAuto): Command() {
	// TODO Auto-generated constructor stub
	Requires(Robot::gearer.get());
	this->isAuto = isAuto;
}

void MoveGearer::Initialize(){

}

void MoveGearer::Execute(){
	//printf("MoveGearer executing \n");

	/*if(!isAuto && Robot::oi->getXBoxController()->GetBumper(GenericHID::kLeftHand)){
			Robot::gearer->In();
			Robot::gearer->Extend();
			printf("left bumper pressed \n");
			//Robot::gearer->UnSecure();
	}*/

	if(Robot::oi->getXBoxController()->GetBumper(GenericHID::kLeftHand))
	{
		Robot::gearer->In();
		Robot::gearer->Extend();
	}

	else if(Robot::oi->getXBoxController()->GetTriggerAxis(GenericHID::kLeftHand) >=.75)
	{
		//Robot::gearer->UnSecure();
		Robot::gearer->Out();
		Robot::gearer->Extend();
	}
	else
	{
		Robot::gearer->Off();
		Robot::gearer->Retract();
	}

	if(Robot::oi->getXBoxController()->GetPOV(0) == 0){
		Robot::gearer->UnSecure();
	}
	if(Robot::oi->getXBoxController()->GetPOV(0) == 180){
		Robot::gearer->Secure();
	}
	/*if(!isAuto && Robot::oi->getXBoxController()->GetTriggerAxis(GenericHID::kLeftHand) >=.75){
		Robot::gearer->Out();
		Robot::gearer->Extend();
		printf("left trigger pressed \n");
	}

	if(isAuto)
	{
		Robot::gearer->Out();
		Robot::gearer->Extend();
	}*/

}

bool MoveGearer::IsFinished(){
	return false;
}

void MoveGearer::End(){
	Robot::gearer->Retract();
	Robot::gearer->Off();
	//printf("finishing MoveGearer \n");
	//Robot::gearer->Secure();
}

void MoveGearer::Interrupted(){
	End();
}
