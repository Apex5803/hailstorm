/*
 * SecureGear.h
 *
 *  Created on: Feb 27, 2017
 *      Author: first
 */

#ifndef SRC_COMMANDS_SECUREGEAR_H_
#define SRC_COMMANDS_SECUREGEAR_H_
#include "Commands/Subsystem.h"
#include "../Robot.h"
#include "WPILib.h"

class SecureGear: public Command {
public:
	SecureGear();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif /* SRC_COMMANDS_SECUREGEAR_H_ */
