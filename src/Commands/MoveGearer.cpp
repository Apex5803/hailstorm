/*
 * MoveGearer.cpp
 *
 *  Created on: Feb 4, 2017
 *      Author: first
 */

#include <Commands/MoveGearer.h>

MoveGearer::MoveGearer(): Command() {
	// TODO Auto-generated constructor stub
	Requires(Robot::gearer.get());
}

void MoveGearer::Initialize(){

}

void MoveGearer::Execute(){
	if(Robot::oi->getXBoxController()->GetBumper >= .75)
		{
			Robot::gearer->In();
			Robot::gearer->Extend();
		}
		else
		{
			Robot::gearer->Off();
			Robot::gearer->Retract();
		}
}

bool IsFinished(){
	return false;
}

void End(){

}

void Interrupted(){

}
