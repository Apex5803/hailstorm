/*
 * MoveShooter.cpp
 *
 *  Created on: Feb 11, 2017
 *      Author: first
 */

#include <Commands/MoveShooter.h>\

MoveShooter::MoveShooter() {
	// TODO Auto-generated constructor stub
	//Requires(Robot::shooter.get());
	//Requires(Robot::talonShooter.get());
	TalonSetPoint = 0;
}

void MoveShooter::Initialize(){

}

void MoveShooter::Execute(){
	//::talonShooter->ShootManual();
	//Robot::talonShooter->SetRPM(TalonSetPoint);
	Robot::talonShooter->SetRPM(12000);
}


bool MoveShooter::IsFinished(){
	return false;
}

void MoveShooter::End(){
	Robot::talonShooter->Off();

	//TalonSetPoint = 0.0;
	//Robot::talonShooter->SetRPM(0.0);
}


void MoveShooter::SetSetPoint(double setPoint){
	TalonSetPoint = setPoint;
}

void MoveShooter::Interrupted(){
	End();
}
