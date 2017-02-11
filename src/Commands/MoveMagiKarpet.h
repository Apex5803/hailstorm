/*
 * MoveMagiKarpet.h
 *
 *  Created on: Feb 4, 2017
 *      Author: first
 */

#ifndef SRC_COMMANDS_MOVEMAGIKARPET_H_
#define SRC_COMMANDS_MOVEMAGIKARPET_H_
#include "Commands/Subsystem.h"
#include "../Robot.h"

class MoveMagiKarpet: public Command {
public:
	MoveMagiKarpet();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();

private:
	unsigned int m_button_count;
	bool m_released_button;
};

#endif /* SRC_COMMANDS_MOVEMAGIKARPET_H_ */
