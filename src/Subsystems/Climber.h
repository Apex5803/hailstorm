/*
 * Climber.h
 *
 *  Created on: Mar 14, 2017
 *      Author: Apex5803
 */

#ifndef SRC_SUBSYSTEMS_CLIMBER_H_
#define SRC_SUBSYSTEMS_CLIMBER_H_
#include "Commands/Subsystem.h"
#include "WPILib.h"


class Climber: public Subsystem {

private:
	std::shared_ptr<SpeedController> climber;
public:
	Climber();

	void InitDefaultCommand();

	void ClimbUp();

	void StopClimbing();
};

#endif /* SRC_SUBSYSTEMS_CLIMBER_H_ */
