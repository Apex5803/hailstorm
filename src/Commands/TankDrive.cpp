/*
 * TankDrive.cpp
 *
 *  Created on: Feb 4, 2017
 *      Author: first
 */

#include <Commands/TankDrive.h>

TankDrive::TankDrive(): Command("TankDrive") {
	// TODO Auto-generated constructor stub
	//Requires(Robot::driveTrain.get());
	Requires(Robot::drive.get());
	isAutonomous = false;
	this->lspeed = 0.;
	this->rspeed = 0.;
}

TankDrive::TankDrive(double speed) : Command("TankDrive"){
	//Requires(Robot::driveTrain.get());
	Requires(Robot::drive.get());
	isAutonomous = true;
	this->lspeed = speed;
	this->rspeed = speed;
}

TankDrive::TankDrive(double lspeed, double rspeed) : Command("TankDrive"){
	//Requires(Robot::driveTrain.get());
	Requires(Robot::drive.get());
	isAutonomous = true;
	this->lspeed = lspeed;
	this->rspeed = rspeed;

}

void TankDrive::Initialize(){

}

void TankDrive::Execute(){
	if (!isAutonomous)
	{
//		Robot::driveTrain->MyDrive(-Robot::oi->getJoystickL()->GetRawAxis(1), Robot::oi->getJoystickR()->GetRawAxis(1));

		Robot::drive->MyDrive(Robot::oi->getJoystickL()->GetRawAxis(1), -Robot::oi->getJoystickR()->GetRawAxis(1));
	}
	else
	{
//		Robot::driveTrain->MyDrive(speed, -speed);
		Robot::drive->MyDrive(lspeed, -rspeed);
	}
}

bool TankDrive::IsFinished(){
	return false;
}

void TankDrive::End(){
	Robot::drive->MyDrive((float)0, (float)0);
}

void TankDrive::Interrupted(){

}
