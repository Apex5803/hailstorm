/*
 * AutoTurnTest.cpp
 *
 *  Created on: Apr 13, 2017
 *      Author: Apex5803
 */

#include <Commands/Autonomous_Commands/AutoTurnTest.h>
#include <Commands/Autonomous_Commands/TurnGyro.h>
AutoTurnTest::AutoTurnTest() {
	// TODO Auto-generated constructor stub
	printf ("turned 90 degrees /n ");
	AddSequential (new TurnGyro(90, .5), 10);
}

