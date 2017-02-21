/*
 * Climb.h
 *
 *  Created on: Feb 20, 2017
 *      Author: first
 */

#ifndef SRC_COMMANDS_CLIMB_H_
#define SRC_COMMANDS_CLIMB_H_
#include "WPILib.h"
#include "Robot.h"

class Climb : public Command {
public:
	Climb();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif /* SRC_COMMANDS_CLIMB_H_ */
