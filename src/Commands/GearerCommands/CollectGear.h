/*
 * CollectGear.h
 *
 *  Created on: Mar 1, 2017
 *      Author: Lydia
 */

#ifndef SRC_COMMANDS_GEARERCOMMANDS_COLLECTGEAR_H_
#define SRC_COMMANDS_GEARERCOMMANDS_COLLECTGEAR_H_
#include "Commands/Subsystem.h"
#include "../../Robot.h"
#include "WPILib.h"

class CollectGear: public Command {
public:
	CollectGear();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif /* SRC_COMMANDS_GEARERCOMMANDS_COLLECTGEAR_H_ */
