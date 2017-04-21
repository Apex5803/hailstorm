/*
 * GearAndBallsRed.h
 *
 *  Created on: Apr 21, 2017
 *      Author: Apex5803
 */

#ifndef SRC_COMMANDS_AUTONOMOUS_COMMANDS_GEARANDBALLSRED_H_
#define SRC_COMMANDS_AUTONOMOUS_COMMANDS_GEARANDBALLSRED_H_

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

class GearAndBallsRed : public CommandGroup {
public:
	GearAndBallsRed();


private:
};

#endif /* SRC_COMMANDS_AUTONOMOUS_COMMANDS_GEARANDBALLSRED_H_ */
