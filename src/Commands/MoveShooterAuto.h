/*
 * MoveShooterAuto.h
 *
 *  Created on: Feb 21, 2017
 *      Author: first
 */

#ifndef SRC_COMMANDS_MOVESHOOTERAUTO_H_
#define SRC_COMMANDS_MOVESHOOTERAUTO_H_
#include "Commands/Subsystem.h"
#include "../Robot.h"

class MoveShooterAuto: public Command {
private:
	double TalonSetPoint;

public:

	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
	void SetSetPoint(double);





	MoveShooterAuto(double);
	//virtual ~MoveShooterAuto();
};

#endif /* SRC_COMMANDS_MOVESHOOTERAUTO_H_ */
