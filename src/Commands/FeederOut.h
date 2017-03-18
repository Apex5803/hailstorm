/*
 * FeederOut.h
 *
 *  Created on: Mar 17, 2017
 *      Author: Apex5803
 */

#ifndef SRC_COMMANDS_FEEDEROUT_H_
#define SRC_COMMANDS_FEEDEROUT_H_
#include "Commands/Subsystem.h"
#include "../Robot.h"


class FeederOut: public Command {
public:
	FeederOut();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif /* SRC_COMMANDS_FEEDEROUT_H_ */
