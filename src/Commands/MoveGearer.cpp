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
			Robot::gearer->In();
			Robot::gearer->Extend();


	//Robot::gearer->In();
}

bool MoveGearer::IsFinished(){
	return false;
}

void MoveGearer::End(){
	Robot::gearer->Off();
	Robot::gearer->Retract();

}

void MoveGearer::Interrupted(){
	Robot::gearer->Off();
	Robot::gearer->Retract();

}
