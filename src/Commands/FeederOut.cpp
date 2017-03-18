/*
 * FeederOut.cpp
 *
 *  Created on: Mar 17, 2017
 *      Author: Apex5803
 */

#include <Commands/FeederOut.h>

FeederOut::FeederOut() {
	// TODO Auto-generated constructor stub
	 Requires(Robot::feeder.get());
}

void FeederOut::Initialize(){

}

void FeederOut::Execute(){
	Robot::feeder->ReturnBall();

}

bool FeederOut::IsFinished() {
	return false;
}

void FeederOut::End(){
	Robot::feeder->Off();
}

void FeederOut::Interrupted(){
	Robot::feeder->Off();
}
