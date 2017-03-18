/*
 * POVTrigger.cpp
 *
 *  Created on: Mar 16, 2017
 *      Author: Apex5803
 */

#include <Custom/POVTrigger.h>

POVTrigger::POVTrigger(GenericHID* controller, int PovID, int axisNumber ) {
	// TODO Auto-generated constructor stub
    m_controller = controller;
    m_PovID = PovID;
    m_PovAngle = axisNumber;
}

bool POVTrigger::Get(){
	return m_controller->GetPOV(m_PovID) == m_PovAngle;
}
