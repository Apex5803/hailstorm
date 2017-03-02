/*
 * JoystickAxis.h
 *
 *  Created on: Feb 21, 2017
 *      Author: first
 */

#ifndef SRC_CUSTOM_AXISTRIGGER_H_
#define SRC_CUSTOM_AXISTRIGGER_H_
#include <WPILib.h>

class AxisTrigger: public Trigger {
public:
	AxisTrigger(GenericHID* controller, int axisNumber);
	virtual ~AxisTrigger() = default;
	virtual bool Get();

private:
	GenericHID* m_controller; // This is a pointer to the controller the trigger is on
	int m_buttonNumber; // This tells us whether to look for the left trigger or right trigger

};

#endif /* SRC_CUSTOM_AXISTRIGGER_H_ */
