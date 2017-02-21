/*
 * DriveWithEncoder.cpp
 *
 *  Created on: Feb 20, 2017
 *      Author: first
 */

#include <Commands/DriveWithEncoder.h>
#include "RobotMap.h"

DriveWithEncoder::DriveWithEncoder(bool isAuto) : Command() {
	// TODO Auto-generated constructor stub
	Requires(Robot::drive.get());
	this->isAuto = isAuto;
	encoder_L = RobotMap::driveTraindBaseEncoderL;
	encoder_R = RobotMap::driveTraindBaseEncoderR;
}

void DriveWithEncoder::Initialize(){

}

void DriveWithEncoder::Execute(){
	/*if()
	{

	}*/
}

bool DriveWithEncoder::IsFinished(){
	return false;
}

void DriveWithEncoder::End(){

}

void DriveWithEncoder::Interrupted(){

}
