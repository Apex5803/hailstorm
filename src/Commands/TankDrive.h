/*
 * TankDrive.h
 *
 *  Created on: Feb 4, 2017
 *      Author: first
 */

#ifndef SRC_COMMANDS_TANKDRIVE_H_
#define SRC_COMMANDS_TANKDRIVE_H_
#include "Commands/Subsystem.h"
#include "../Robot.h"

class TankDrive:public Command {
public:
	//initializes new instance of TankDrive class. This is teleop constructor that'll
	//have conditions of speed
	TankDrive();

	//running this command will start robot driving  at provided speed
	TankDrive(double);

	//method calls to run once this command runs
	virtual void Initialize();

	//method that'll actually take inputs and move drivetrain at 15Hz refresh
	virtual void Execute();

	//method determines if drivetrain command has actually completed.
	//in teleop, we should never complete this command, but in Auto, we
	//would like to end early and move on w/ script
	virtual bool IsFinished();

	//method called once when it's declared "finished". WE DO NOTHING HERE!!
	virtual void End();

	//method gets called when another instance of command is called and we need to let it go
	virtual void Interrupted();

private:
	//variable is hold determining if command is operating in auto mode
	bool isAutonomous;

	//initial speed that robot will move in auto mode
	float speed;
};

#endif /* SRC_COMMANDS_TANKDRIVE_H_ */
