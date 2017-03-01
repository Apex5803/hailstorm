/*
 * MoveGearerGroup.h
 *
 *  Created on: Feb 28, 2017
 *      Author: first
 */

#ifndef SRC_COMMANDS_MOVEGEARERGROUP_H_
#define SRC_COMMANDS_MOVEGEARERGROUP_H_
#include "Commands/Subsystem.h"
#include "../Robot.h"
#include "WPILib.h"
#include "Commands/CommandGroup.h"

class MoveGearerGroup: public CommandGroup {
public:
	MoveGearerGroup();
};

#endif /* SRC_COMMANDS_MOVEGEARERGROUP_H_ */
