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

class JoystickAxis: public Joystick {
public:
	JoystickAxis();
	~JoystickAxis();
	void Set();
	void GetAxis();
private:

};

#endif /* SRC_CUSTOM_JOYSTICKAXIS_H_ */
