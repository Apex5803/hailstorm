/*
 * MoveIntakeIn.h
 *
 *  Created on: Mar 18, 2017
 *      Author: Apex5803
 */

#ifndef SRC_COMMANDS_MOVEINTAKEIN_H_
#define SRC_COMMANDS_MOVEINTAKEIN_H_
#include "Commands/Subsystem.h"
#include "../Robot.h"


class MoveIntakeIn: public Command {
public:
	MoveIntakeIn();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif /* SRC_COMMANDS_MOVEINTAKEIN_H_ */
