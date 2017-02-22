/*
 * MoveShooterAuto.cpp
 *
 *  Created on: Feb 21, 2017
 *      Author: first
 */

#include <Commands/MoveShooterAuto.h>

MoveShooterAuto::MoveShooterAuto(double newSP) {
	// TODO Auto-generated constructor stub
	TalonSetPoint = newSP;
}
void MoveShooterAuto::Initialize(){

}

void MoveShooterAuto::Execute(){
	//Robot::shooter->ShootManual();
	Robot::talonShooter->SetRPM(TalonSetPoint);

}


bool MoveShooterAuto::IsFinished(){
	return false;
}

void MoveShooterAuto::End(){

}


void MoveShooterAuto::SetSetPoint(double setPoint){
	TalonSetPoint = setPoint;
}

void MoveShooterAuto::Interrupted(){

}




