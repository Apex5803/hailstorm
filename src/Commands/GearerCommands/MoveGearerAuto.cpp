/*
 * MoveGearerAuto.cpp
 *
 *  Created on: Feb 21, 2017
 *      Author: first
 */

#include <Commands/GearerCommands/MoveGearerAuto.h>
#include <stdio.h>

MoveGearerAuto::MoveGearerAuto(): Command() {
	Requires(Robot::gearer.get());
}

void MoveGearerAuto::Initialize(){

}

void MoveGearerAuto::Execute(){
	Robot::gearer->Extend();
	Robot::gearer->Out();

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
