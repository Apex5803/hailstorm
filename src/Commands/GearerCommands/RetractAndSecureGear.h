/*
 * RetractAndSecureGear.h
 *
 *  Created on: Mar 1, 2017
 *      Author: Lydia
 */

#ifndef SRC_COMMANDS_GEARERCOMMANDS_RETRACTANDSECUREGEAR_H_
#define SRC_COMMANDS_GEARERCOMMANDS_RETRACTANDSECUREGEAR_H_

#include "Commands/Subsystem.h"
#include "../../Robot.h"
#include "WPILib.h"
#include "Commands/CommandGroup.h"
#include "RetractGearer.h"
#include "SecureGear.h"

class RetractAndSecureGear: public CommandGroup {
public:
	RetractAndSecureGear();
};

#endif /* SRC_COMMANDS_GEARERCOMMANDS_RETRACTANDSECUREGEAR_H_ */
