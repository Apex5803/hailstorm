/*
 * JoystickAxis.cpp
 *
 *  Created on: Feb 21, 2017
 *      Author: first
 */

#include <Custom/JoystickAxis.h>
#include "WPILib.h"
using namespace frc;

JoystickAxis::JoystickAxis(GenericHID* joystick, int axisNumber):
	m_joystick(joystick), m_axisNumber(axisNumber){}

bool JoystickAxis::Get()
{
	return m_joystick->GetRawAxis(m_axisNumber);
}

