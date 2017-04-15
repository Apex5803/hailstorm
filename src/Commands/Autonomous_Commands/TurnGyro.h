/*
 * TurnGyro.h
 *
 *  Created on: Apr 13, 2017
 *      Author: Apex5803
 */

#ifndef SRC_COMMANDS_AUTONOMOUS_COMMANDS_TURNGYRO_H_
#define SRC_COMMANDS_AUTONOMOUS_COMMANDS_TURNGYRO_H_

#include "Commands/Subsystem.h"
#include "../../Robot.h"
#include "WPILib.h"

class TurnGyro: public Command {
public:
	TurnGyro(double degree, double base_speed);
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();

private:
	float m_target_deg;
	float m_initial_yaw;
	float m_base_speed;
	const float KP = 0.0;
	const float TOLERANCE_DEG = 5;
};

#endif /* SRC_COMMANDS_AUTONOMOUS_COMMANDS_TURNGYRO_H_ */
