/*
 * Pneumatics.cpp
 *
 *  Created on: Feb 16, 2017
 *      Author: first
 */

#include <Subsystems/Pneumatics.h>
#include "../RobotMap.h"
Pneumatics::Pneumatics() : Subsystem("Pneumatics"){

	compressor = RobotMap::compressor;

}

void Pneumatics::InitDefaultCommand(){



}

void Off(){
	RobotMap::compressor->Stop();
}
