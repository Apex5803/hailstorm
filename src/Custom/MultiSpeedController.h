/*
 * MultiSpeedController.h
 *
 *  Created on: Jan 28, 2017
 *      Author: first
 */

#ifndef SRC_CUSTOM_MULTISPEEDCONTROLLER_H_
#define SRC_CUSTOM_MULTISPEEDCONTROLLER_H_
#include "WPILib.h"
#include <VictorSP.h>

class MultiSpeedController: public SpeedController {
private:
	std::vector<std::shared_ptr<SpeedController>> speedControllers;
	double currentSpeed;
	bool isInverted;
	int *motor_ports;
	int num_motors;

public:
	MultiSpeedController(int motor_ports[], int size);
	~MultiSpeedController();
	void InitMotors();
	void Set(double speed) override;
	double Get() const override;
	void SetInverted(bool isInverted) override;
	void Disable() override;
	bool GetInverted() const override;
	void StopMotor() override;
	void PIDWrite(double output) override;
};

#endif /* SRC_CUSTOM_MULTISPEEDCONTROLLER_H_ */
