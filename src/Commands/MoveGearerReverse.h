/*
 * MoveGearerReverse.h
 *
 *  Created on: Feb 28, 2017
 *      Author: first
 */

#ifndef SRC_COMMANDS_MOVEGEARERREVERSE_H_
#define SRC_COMMANDS_MOVEGEARERREVERSE_H_
#include "Commands/Subsystem.h"
#include "../Robot.h"
#include "WPILib.h"

class MoveGearerReverse: public Command {
public:
	MoveGearerReverse();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif /* SRC_COMMANDS_MOVEGEARERREVERSE_H_ */
