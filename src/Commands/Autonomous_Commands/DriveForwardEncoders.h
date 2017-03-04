/*
 * DriveForwardEncoders.h
 *
 *  Created on: Mar 3, 2017
 *      Author: Apex5803
 */

#ifndef SRC_COMMANDS_AUTONOMOUS_COMMANDS_DRIVEFORWARDENCODERS_H_
#define SRC_COMMANDS_AUTONOMOUS_COMMANDS_DRIVEFORWARDENCODERS_H_

#include "Commands/Subsystem.h"
#include "../../Robot.h"
#include "WPILib.h"
#include "Commands/CommandGroup.h"


class DriveForwardEncoders: public CommandGroup {
public:
	DriveForwardEncoders();
	virtual ~DriveForwardEncoders();
};

#endif /* SRC_COMMANDS_AUTONOMOUS_COMMANDS_DRIVEFORWARDENCODERS_H_ */
