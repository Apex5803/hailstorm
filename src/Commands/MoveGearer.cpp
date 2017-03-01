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
		Robot::gearer->In();
		Robot::gearer->Extend();
}

bool MoveGearer::IsFinished(){
	return false;
}

void MoveGearer::End(){
	Robot::gearer->Retract();
	Robot::gearer->Off();
}

void MoveGearer::Interrupted(){
	End();
}
