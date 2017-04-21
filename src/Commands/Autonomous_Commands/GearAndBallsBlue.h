/*
 * GearandBalls.h
 *
 *  Created on: Apr 20, 2017
 *      Author: Apex5803
 */

#ifndef SRC_COMMANDS_AUTONOMOUS_COMMANDS_GEARANDBALLSBLUE_H_
#define SRC_COMMANDS_AUTONOMOUS_COMMANDS_GEARANDBALLSBLUE_H_


#include "Commands/Subsystem.h"
#include "../../Robot.h"
#include "WPILib.h"
#include "Commands/CommandGroup.h"
#include "../TankDrive.h"
#include <Commands/GearerCommands/MoveGearerAuto.h>
#include <Commands/MoveIntakeIn.h>
#include <Commands/MoveShooter.h>
#include <Commands/MoveMagiKarpetIn.h>
#include <Commands/FeederIn.h>
#include <Commands/FeederOut.h>

class GearAndBallsBlue : public CommandGroup {
public:
	GearAndBallsBlue();



private:


};

#endif /* SRC_COMMANDS_AUTONOMOUS_COMMANDS_GEARANDBALLSBLUE_H_ */
