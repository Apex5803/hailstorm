/*
 * MoveBallCollector.h
 *
 *  Created on: Feb 11, 2017
 *      Author: first
 */

#ifndef SRC_COMMANDS_MOVEBALLCOLLECTOR_H_
#define SRC_COMMANDS_MOVEBALLCOLLECTOR_H_
#include "Commands/Subsystem.h"
#include "../Robot.h"

class MoveBallCollector: public Command {
public:
	MoveBallCollector();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif /* SRC_COMMANDS_MOVEBALLCOLLECTOR_H_ */
