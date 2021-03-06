/*
 * MoveShooter.cpp
 *
 *  Created on: Feb 11, 2017
 *      Author: first
 */

#include <Commands/MoveShooter.h>
#include <Custom/UserSettings.h>

MoveShooter::MoveShooter(double SetPoint) {
	// TODO Auto-generated constructor stub
	//Requires(Robot::shooter.get());
	Requires(Robot::talonShooter.get());
	Requires(Robot::pneumatics.get());
	TalonSetPoint = SetPoint;
}

void MoveShooter::Initialize(){

}

void MoveShooter::Execute(){
	//::talonShooter->ShootManual();
	Robot::talonShooter->SetRPM(TalonSetPoint);
	//Robot::talonShooter->SetRPM(Preferences::GetInstance()->GetDouble("Shooter Speed", 9200.0));
	//Robot::talonShooter->SetRPM(9500);
	Robot::pneumatics->Stop();
}


bool MoveShooter::IsFinished(){
	return false;
}

void MoveShooter::End(){
	Robot::talonShooter->Off();
	Robot::pneumatics->Start();
	//TalonSetPoint = 0.0;
	//Robot::talonShooter->SetRPM(0.0);
}


void MoveShooter::SetSetPoint(double setPoint){
	TalonSetPoint = setPoint;
}

void MoveShooter::Interrupted(){
	End();
}
