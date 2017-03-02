/*
 * RetractGearer.h
 *
 *  Created on: Mar 1, 2017
 *      Author: Lydia
 */

#ifndef SRC_COMMANDS_GEARERCOMMANDS_RETRACTGEARER_H_
#define SRC_COMMANDS_GEARERCOMMANDS_RETRACTGEARER_H_
#include "Commands/Subsystem.h"
#include "../../Robot.h"
#include "WPILib.h"

class RetractGearer: public Command {
public:
	RetractGearer();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif /* SRC_COMMANDS_GEARERCOMMANDS_RETRACTGEARER_H_ */
