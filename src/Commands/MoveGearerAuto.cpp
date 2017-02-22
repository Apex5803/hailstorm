/*
 * MoveGearerAuto.cpp
 *
 *  Created on: Feb 21, 2017
 *      Author: first
 */

#include <Commands/MoveGearerAuto.h>
#include <stdio.h>



void MoveGearerAuto::Initialize(){

}

void MoveGearerAuto::Execute(){
	Robot::gearer->Out();
	Robot::gearer->Extend();
}
bool MoveGearerAuto::IsFinished(){
	return false;
}

void MoveGearerAuto::End(){
	Robot::gearer->Retract();
	Robot::gearer->Off();
}

void MoveGearerAuto::Interrupted(){
	End();
}
