/*
 * MoveGearer.cpp
 *
 *  Created on: Feb 4, 2017
 *      Author: first
 */

#include <Commands/MoveGearer.h>

MoveGearer::MoveGearer(bool p_pushedButton): Command() {
	// TODO Auto-generated constructor stub
	pushedButton = p_pushedButton;
	Requires(Robot::gearer.get());

}

void MoveGearer::Initialize(){

}

void MoveGearer::Execute(){
bool pressing = Robot::oi->getXBoxController()->GetBumper(frc::GenericHID::kLeftHand);
	if(pressing && !pushedButton)
		{
			Robot::gearer->In();
			Robot::gearer->Extend();
			printf("Bumper was pressed \n");
			pushedButton = true;
		}

	else if(pressing && pushedButton){
		Robot::gearer->In();
		Robot::gearer->Extend();
		pushedButton = true;
		}

		else if(pushedButton && !pressing)
		{
			Robot::gearer->Off();
			Robot::gearer->Retract();
			printf("Bumper wasn't pressed \n");
			pushedButton = false;
		}

		else
		{
		printf("Abandon hope all ye that enter here \n");
		}


	//Robot::gearer->In();
}

bool MoveGearer::IsFinished(){
	return false;
}

void MoveGearer::End(){

}

void MoveGearer::Interrupted(){

}
