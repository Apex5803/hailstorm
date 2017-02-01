/*
 * MultiSpeedController.h
 *
 *  Created on: Jan 28, 2017
 *      Author: first
 */

#ifndef SRC_CUSTOM_MULTISPEEDCONTROLLER_H_
#define SRC_CUSTOM_MULTISPEEDCONTROLLER_H_
#include "WPILib.h"


class MultiSpeedController: public SpeedController {
private:
	std::vector<std::shared_ptr<SpeedController>> speedControllers;
	double currentSpeed;
	bool isInverted;

public:
	MultiSpeedController(std::shared_ptr<SpeedController> speedControllers[], int size);
	void Set(double speed);
	double Get();
	void SetInverted(bool isInverted);
	void Disable();
	bool GetInverted();
	void StopMotor();
};

#endif /* SRC_CUSTOM_MULTISPEEDCONTROLLER_H_ */
