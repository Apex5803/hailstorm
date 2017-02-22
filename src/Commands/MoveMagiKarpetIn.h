/*
 * MoveMagiKarpetAuto.h
 *
 *  Created on: Feb 21, 2017
 *      Author: first
 */

#ifndef SRC_COMMANDS_MOVEMAGIKARPETIN_H_
#define SRC_COMMANDS_MOVEMAGIKARPETIN_H_
#include "Commands/Subsystem.h"
#include "../Robot.h"


class MoveMagiKarpetIn: public Command {
public:
	MoveMagiKarpetIn();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif /* SRC_COMMANDS_MOVEMAGIKARPETIN_H_ */
