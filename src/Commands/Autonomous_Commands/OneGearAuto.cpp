// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


<<<<<<< HEAD:src/Commands/Autonomous_Commands/OneGearAuto.cpp
#include <Commands/Autonomous_Commands/OneGearAuto.h>
#include "../TankDrive.h"
#include "../MoveGearerAuto.h"
=======
#include "AutonomousCommand.h"
//#include <../Vision/VisionProcessing.h>
//#include <../Vision/VisionDataResult.h>
>>>>>>> f5184157922a1753cfbb198b264f71ed4445287c:src/Commands/AutonomousCommand.cpp

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTOR

OneGearAuto::OneGearAuto() {
        // Use requires() here to declare subsystem dependencies
    // eg. requires(Robot::chassis.get());
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	AddSequential(new TankDrive(-.5), 2.2);
	printf("0. Moved backwards slowly \n");
	AddSequential(new TankDrive(0), 2.0);
	printf("5. Stopped \n");
	AddParallel(new MoveGearerAuto(), 3);
	printf ("10. Ran Gearer");
	AddSequential(new TankDrive(.5), 1);
	printf("15. Moved forward while moving the gear! \n");
	AddSequential(new TankDrive(0), 2);
	printf("20. Stopped! \n");


	printf("Potato ");
}
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTOR

<<<<<<< HEAD:src/Commands/Autonomous_Commands/OneGearAuto.cpp
=======
// Called just before this Command runs the first time
void AutonomousCommand::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void AutonomousCommand::Execute() {

	//I assume we need to put the vision code here


}

// Make this return true when this Command no longer needs to run execute()
bool AutonomousCommand::IsFinished() {
    return false;
}

// Called once after isFinished returns true
void AutonomousCommand::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutonomousCommand::Interrupted() {

}
>>>>>>> f5184157922a1753cfbb198b264f71ed4445287c:src/Commands/AutonomousCommand.cpp
