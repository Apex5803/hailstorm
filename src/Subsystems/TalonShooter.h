/*
 * TalonShooter.h
 *
 *  Created on: Feb 15, 2017
 *      Author: first
 */

#ifndef SRC_SUBSYSTEMS_TALONSHOOTER_H_
#define SRC_SUBSYSTEMS_TALONSHOOTER_H_

#include "Commands/Subsystem.h"
#include "WPILib.h"
#include "CANTalon.h"

class TalonShooter {
public:

	std::shared_ptr<CANTalon> shooterWheelPrimary;
	std::shared_ptr<CANTalon> shooterWheelBooster;
	std::shared_ptr<Encoder> shooterEncoderPrimary;
	std::shared_ptr<Encoder> shooterEncoderBooster;

	TalonShooter();
	void SetRPM(double rpm);

	//runs shooter wheels
	void ShootManual();

	//turns shooter off
	void Off();
};

#endif /* SRC_SUBSYSTEMS_TALONSHOOTER_H_ */
