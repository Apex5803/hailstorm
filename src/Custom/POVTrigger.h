/*
 * POVTrigger.h
 *
 *  Created on: Mar 16, 2017
 *      Author: Apex5803
 */

#ifndef SRC_CUSTOM_POVTRIGGER_H_
#define SRC_CUSTOM_POVTRIGGER_H_
#include <WPILib.h>


class POVTrigger: public Trigger {
public:
	POVTrigger(GenericHID* controller, int PovID, int axisNumber);
	virtual bool Get();


private:
	GenericHID* m_controller;
	int m_PovID;
	int m_PovAngle;

};

#endif /* SRC_CUSTOM_POVTRIGGER_H_ */
