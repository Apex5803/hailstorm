/*
 * MoveGearerAuto.h
 *
 *  Created on: Feb 21, 2017
 *      Author: first
 */

#ifndef SRC_COMMANDS_MOVEGEARERAUTO_H_
#define SRC_COMMANDS_MOVEGEARERAUTO_H_
#include "WPILib.h"
#include "Commands/Subsystem.h"
#include "../Robot.h"

class MoveGearerAuto: public Command {
public:

	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();



private:

};

#endif /* SRC_COMMANDS_MOVEGEARERAUTO_H_ */
