/*
 * Climber.cpp
 *
 *  Created on: Mar 14, 2017
 *      Author: Apex5803
 */

#include <Subsystems/Climber.h>
#include "../RobotMap.h"
#include "CANTalon.h"
Climber::Climber() : Subsystem("Climber"){
	// TODO Auto-generated constructor stub

	climber = RobotMap::climber;


}

void Climber::InitDefaultCommand() {

}

void Climber::ClimbUp() {

	climber->Set(1.0);

}

void Climber::StopClimbing() {

	climber->Set(0.0);

}
