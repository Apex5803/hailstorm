/*
 * RetractGearerReal.h
 *
 *  Created on: Apr 15, 2017
 *      Author: Apex5803
 */

#ifndef SRC_COMMANDS_GEARERCOMMANDS_RETRACTGEARERREAL_H_
#define SRC_COMMANDS_GEARERCOMMANDS_RETRACTGEARERREAL_H_

#include "Commands/Subsystem.h"
#include "../../Robot.h"
#include "WPILib.h"
#include "Commands/CommandGroup.h"
#include "RetractGearer.h"
#include "CollectGearwithRollerRunning.h"
class RetractGearerReal: public CommandGroup {
public:
	RetractGearerReal();
};

#endif /* SRC_COMMANDS_GEARERCOMMANDS_RETRACTGEARERREAL_H_ */
