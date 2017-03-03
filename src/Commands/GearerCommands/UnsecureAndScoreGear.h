/*
 * UnsecureAndScoreGear.h
 *
 *  Created on: Mar 1, 2017
 *      Author: first
 */

#ifndef SRC_COMMANDS_GEARERCOMMANDS_UNSECUREANDSCOREGEAR_H_
#define SRC_COMMANDS_GEARERCOMMANDS_UNSECUREANDSCOREGEAR_H_

#include "Commands/Subsystem.h"
#include "../../Robot.h"
#include "WPILib.h"
#include "Commands/CommandGroup.h"
#include "ScoreGear.h"
#include "UnsecureGear.h"

class UnsecureAndScoreGear: public CommandGroup {
public:
	UnsecureAndScoreGear();
};

#endif /* SRC_COMMANDS_GEARERCOMMANDS_UNSECUREANDSCOREGEAR_H_ */
