/*
 * JoystickAxis.cpp
 *
 *  Created on: Feb 21, 2017
 *      Author: first
 */

#include <Custom/AxisTrigger.h>
#include "WPILib.h"
using namespace frc;

// This is our constructor, we're going to need to set up our m_controller and m_hand fields here
AxisTrigger::AxisTrigger(GenericHID* controller, int buttonNumber){
    m_controller = controller;
    m_buttonNumber = buttonNumber;
}


bool AxisTrigger::Get()
{
    return m_controller->GetRawAxis(m_buttonNumber) >=.75;
}

