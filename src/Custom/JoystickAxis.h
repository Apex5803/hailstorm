/*
 * JoystickAxis.h
 *
 *  Created on: Feb 21, 2017
 *      Author: first
 */

#ifndef SRC_CUSTOM_JOYSTICKAXIS_H_
#define SRC_CUSTOM_JOYSTICKAXIS_H_
#include "WPILib.h"
#include <Joystick.h>

class JoystickAxis: public Button {
public:
	JoystickAxis(GenericHID* joystick, int axisNumber);
	virtual ~JoystickAxis() = default;
	virtual bool Get();

private:
	GenericHID*m_joystick;
	int m_axisNumber;

};

#endif /* SRC_CUSTOM_JOYSTICKAXIS_H_ */
