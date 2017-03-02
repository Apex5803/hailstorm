/*
 * UnsecureGear.h
 *
 *  Created on: Feb 28, 2017
 *      Author: first
 */

#ifndef SRC_COMMANDS_GEARERCOMMANDS_UNSECUREGEAR_H_
#define SRC_COMMANDS_GEARERCOMMANDS_UNSECUREGEAR_H_
#include "Commands/Subsystem.h"
#include "../../Robot.h"
#include "WPILib.h"

/* This command secures the gear on execute.*/
class UnsecureGear: public Command {
public:
	UnsecureGear();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif /* SRC_COMMANDS_GEARERCOMMANDS_UNSECUREGEAR_H_ */
