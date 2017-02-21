/*
 * DriveWithEncoder.cpp
 *
 *  Created on: Feb 20, 2017
 *      Author: first
 */

#include <Commands/DriveWithEncoder.h>

DriveWithEncoder::DriveWithEncoder(bool isAuto) : Command() {
	// TODO Auto-generated constructor stub
	Requires(Robot::drive.get());
	this->isAuto = isAuto;
}

void DriveWithEncoder::Initialize(){

}

void DriveWithEncoder::Execute(){

}

bool DriveWithEncoder::IsFinished(){
	return false;
}

void DriveWithEncoder::End(){

}

void DriveWithEncoder::Interrupted(){

}
