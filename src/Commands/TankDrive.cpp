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

		//Robot::drive->MyDrive(Robot::oi->getDriveController(), 2, Robot::oi->getDriveController(), 1, false);

		//THE NEXT LINE HERE RUNS TANKDRIVE EVEN THOUGH WE DELETED IT. WUT?
		Robot::drive->MyDrive(Robot::oi->getJoystickL()->GetRawAxis(1), -Robot::oi->getJoystickR()->GetRawAxis(1));
		//std::cout << "Currently in TankDrive" << "/n";

		//THIS IS WHERE ALL THE PROBLEMS ARE. THIS IS THE ONLY WAY WE HAVE GOTTEN ARCADEDRIVE TO BE HAPPY. HAVE NOT DEPLOYED TO ROBOT
		Robot::drive->drive->ArcadeDrive(Robot::oi->getDriveController()->GetStickForPort(3), 1, Robot::oi->getDriveController()->GetStickForPort(3), 4, true);
		//Robot::drive->MyDrive(Robot::oi->getDriveController(), 1, Robot::oi->getDriveController(), 4, false);
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
