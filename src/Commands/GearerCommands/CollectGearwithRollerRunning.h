/*
 * CollectGearwithRollerRunning.h
 *
 *  Created on: Apr 15, 2017
 *      Author: Apex5803
 */

#ifndef SRC_COMMANDS_GEARERCOMMANDS_COLLECTGEARWITHROLLERRUNNING_H_
#define SRC_COMMANDS_GEARERCOMMANDS_COLLECTGEARWITHROLLERRUNNING_H_

#include "WPILib.h"
#include "../../Robot.h"
#include "Commands/Subsystem.h"

class CollectGearwithRollerRunning: public CommandGroup {
public:
	CollectGearwithRollerRunning();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();

private:

};

#endif /* SRC_COMMANDS_GEARERCOMMANDS_COLLECTGEARWITHROLLERRUNNING_H_ */
