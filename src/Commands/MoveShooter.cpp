/*
 * MoveShooter.cpp
 *
 *  Created on: Feb 11, 2017
 *      Author: first
 */

#include <Commands/MoveShooter.h>

MoveShooter::MoveShooter() {
	// TODO Auto-generated constructor stub
	Requires(Robot::shooter.get());
}

void MoveShooter::Initialize(){

}

void MoveShooter::Execute(){
	Robot::shooter->ShootManual();
}

bool MoveShooter::IsFinished(){
	return false;
}

void MoveShooter::End(){
	Robot::shooter->Off();
}

void MoveShooter::Interrupted(){
	Robot::shooter->Off();
}
