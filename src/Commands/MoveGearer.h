/*
 * MoveGearer.h
 *
 *  Created on: Feb 4, 2017
 *      Author: first
 */

#ifndef SRC_COMMANDS_MOVEGEARER_H_
#define SRC_COMMANDS_MOVEGEARER_H_
#include "Commands/Subsystem.h"
#include "../Robot.h"
#include "WPILib.h"

class MoveGearer: public Command {
public:
	MoveGearer(bool pushedButton);
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
private:
	bool pushedButton;

};

#endif /* SRC_COMMANDS_MOVEGEARER_H_ */
