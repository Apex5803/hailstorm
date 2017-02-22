/*
 * MoveFeederAuto.cpp
 *
 *  Created on: Feb 21, 2017
 *      Author: first
 */

#include <Commands/FeederIn.h>

FeederIn::FeederIn() {
	// TODO Auto-generated constructor stub

}

void FeederIn::Initialize() {

}

void FeederIn::Execute() {

Robot::feeder->FeedBall();



}

bool FeederIn::IsFinished(){
	return false;
}

void FeederIn::End(){
	Robot::feeder->Off();
}

void FeederIn::Interrupted(){
	Robot::feeder->Off();
}
