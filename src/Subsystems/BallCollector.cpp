// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.




#include "BallCollector.h"
#include "../RobotMap.h"
#include "WPIlib.h"
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS

BallCollector::BallCollector() : Subsystem("BallCollector") {
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
    intakeRoller = RobotMap::ballCollectorintakeRoller;
    collectorSolenoid1 = RobotMap::ballCollectorcollectorSolenoid1;
    collectorSolenoid2 = RobotMap::ballCollectorcollectorSolenoid2;

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
}

void BallCollector::InitDefaultCommand() {
    // Set the default command for a subsystem here.
    // SetDefaultCommand(new MySpecialCommand());
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
}

void BallCollector::Up(){
	collectorSolenoid1->Set(DoubleSolenoid::Value::kForward);
	collectorSolenoid2->Set(DoubleSolenoid::Value::kForward);
}

void BallCollector::Down(){
	collectorSolenoid1->Set(DoubleSolenoid::Value::kReverse);
	collectorSolenoid2->Set(DoubleSolenoid::Value::kReverse);
}

void BallCollector::Off(){
	collectorSolenoid1->Set(DoubleSolenoid::Value::kOff);
	collectorSolenoid2->Set(DoubleSolenoid::Value::kOff);
}

void BallCollector::In(){
	intakeRoller->Set(-1.);
}



void BallCollector::MotorOff(){
	intakeRoller->Set(0);
}
// Put methods for controlling this subsystem
// here. Call these from Commands.

