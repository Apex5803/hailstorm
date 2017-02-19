/*
 * StopGearer.h
 *
 *  Created on: Feb 18, 2017
 *      Author: first
 */

/*#ifndef SRC_COMMANDS_STOPGEARER_H_
#define SRC_COMMANDS_STOPGEARER_H_
#include "WPILib.h"

class StopGearer: public TimedCommand {
public:
	StopGearer(double timeout);
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();

};

#endif /* SRC_COMMANDS_STOPGEARER_H_ */
