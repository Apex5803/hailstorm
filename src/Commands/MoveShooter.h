/*
 * MoveShooter.h
 *
 *  Created on: Feb 11, 2017
 *      Author: first
 */

#ifndef SRC_COMMANDS_MOVESHOOTER_H_
#define SRC_COMMANDS_MOVESHOOTER_H_
#include "Commands/Subsystem.h"
#include "../Robot.h"

class MoveShooter: public Command {
private:
	double TalonSetPoint;

public:
	MoveShooter(double SetPoint);
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
	void SetSetPoint(double);
};

#endif /* SRC_COMMANDS_MOVESHOOTER_H_ */
