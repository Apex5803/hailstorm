/*
 * MoveGearerReverse.cpp
 *
 *  Created on: Feb 28, 2017
 *      Author: first
 */

#include <Commands/MoveGearerReverse.h>

MoveGearerReverse::MoveGearerReverse() {
	// TODO Auto-generated constructor stub

}

void MoveGearerReverse::Initialize(){

}

void MoveGearerReverse::Execute(){
	Robot::gearer->Out();
	Robot::gearer->Extend();
}

bool MoveGearerReverse::IsFinished(){
	return false;
}

void MoveGearerReverse::End(){
	Robot::gearer->Retract();
	Robot::gearer->Off();
}

void MoveGearerReverse::Interrupted(){
	End();
}
