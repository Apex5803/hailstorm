/*
 * DriveWithEncoder.h
 *
 *  Created on: Feb 20, 2017
 *      Author: first
 */

#ifndef SRC_COMMANDS_DRIVEWITHENCODER_H_
#define SRC_COMMANDS_DRIVEWITHENCODER_H_
#include "Commands/Subsystem.h"
#include "../Robot.h"
#include "WPILib.h"


class DriveWithEncoder: public Command {
public:
	DriveWithEncoder(bool isAuto);
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
private:
	bool isAuto;
	std::shared_ptr<Encoder> encoder_L;
	std::shared_ptr<Encoder> encoder_R;
};

#endif /* SRC_COMMANDS_DRIVEWITHENCODER_H_ */
