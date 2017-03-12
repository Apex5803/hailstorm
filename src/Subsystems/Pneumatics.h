/*
 * Pneumatics.h
 *
 *  Created on: Feb 16, 2017
 *      Author: first
 */

#ifndef SRC_SUBSYSTEMS_PNEUMATICS_H_
#define SRC_SUBSYSTEMS_PNEUMATICS_H_
#include "Commands/Subsystem.h"
#include "WPILib.h"

class Pneumatics: public Subsystem {

private:
	std::shared_ptr<Compressor> compressor;


public:

	Pneumatics();

	// Initializes the default command for the compressor
	void InitDefaultCommand();
	void Stop();
	void Start();
};

#endif /* SRC_SUBSYSTEMS_PNEUMATICS_H_ */
