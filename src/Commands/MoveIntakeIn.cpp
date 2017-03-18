/*
 * MoveIntakeIn.cpp
 *
 *  Created on: Mar 18, 2017
 *      Author: Apex5803
 */

#include <Commands/MoveIntakeIn.h>

MoveIntakeIn::MoveIntakeIn() {
	// TODO Auto-generated constructor stub
	Requires(Robot::ballCollector.get());


}

void MoveIntakeIn::Initialize(){

}

void MoveIntakeIn::Execute(){
	Robot::ballCollector->In();
}

bool MoveIntakeIn::IsFinished(){
	return false;
}

void MoveIntakeIn::End(){
	Robot::ballCollector->Off();
	Robot::ballCollector->MotorOff();
}

void MoveIntakeIn::Interrupted(){
	End();
}
