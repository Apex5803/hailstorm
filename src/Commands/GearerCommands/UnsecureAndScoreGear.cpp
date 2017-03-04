/*
 * UnsecureAndScoreGear.cpp
 *
 *  Created on: Mar 1, 2017
 *      Author: first
 */

#include <Commands/GearerCommands/UnsecureAndScoreGear.h>

UnsecureAndScoreGear::UnsecureAndScoreGear() {
	// TODO Auto-generated constructor stub
	AddSequential(new UnsecureGear(), .1);
	AddSequential(new ScoreGear());
}

