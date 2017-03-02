/*
 * ScoreGear.h
 *
 *  Created on: Mar 1, 2017
 *      Author: Lydia
 */

#ifndef SRC_COMMANDS_GEARERCOMMANDS_SCOREGEAR_H_
#define SRC_COMMANDS_GEARERCOMMANDS_SCOREGEAR_H_
#include "Commands/Subsystem.h"
#include "../../Robot.h"
#include "WPILib.h"
#include <chrono>

class ScoreGear: public Command {
public:
	ScoreGear();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();

private:
	std::chrono::system_clock::time_point m_start;
	bool m_waiting;
};

#endif /* SRC_COMMANDS_GEARERCOMMANDS_SCOREGEAR_H_ */
