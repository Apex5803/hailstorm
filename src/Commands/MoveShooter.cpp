/*
 * MoveShooter.cpp
 *
 *  Created on: Feb 11, 2017
 *      Author: first
 */

#include <Commands/MoveShooter.h>

MoveShooter::MoveShooter() {
	// TODO Auto-generated constructor stub
	//Requires(Robot::shooter.get());
	//Requires(Robot::talonShooter.get());
}

void MoveShooter::Initialize(){

}

void MoveShooter::Execute(){
	//Robot::shooter->ShootManual();
	Robot::talonShooter->SetRPM(1000);
}

bool MoveShooter::IsFinished(){
	return false;
}

void MoveShooter::End(){
	//Robot::shooter->Off();
	Robot::talonShooter->SetRPM(0);
}

void MoveShooter::Interrupted(){
	End();
}
