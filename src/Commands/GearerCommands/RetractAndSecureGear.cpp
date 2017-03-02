/*
 * RetractAndSecureGear.cpp
 *
 *  Created on: Mar 1, 2017
 *      Author: Lydia
 */

#include <Commands/GearerCommands/RetractAndSecureGear.h>

RetractAndSecureGear::RetractAndSecureGear() {
	// TODO Auto-generated constructor stub
    AddSequential(new RetractGearer(), 1);
    AddSequential(new SecureGear());
}

