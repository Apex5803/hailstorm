// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.

#include "Gearer.h"
#include "../RobotMap.h"
#include "WPILib.h"

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS

Gearer::Gearer() : Subsystem("Gearer") {
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
    gearRoller = RobotMap::gearergearRoller;
    gearSolenoid1 = RobotMap::gearergearSolenoid1;
    gearSecurer = RobotMap::gearergearSecurer;
    m_isSecured = false; // We always start out with the securer up
}

void Gearer::InitDefaultCommand() {
    // Set the default command for a subsystem here.
    // SetDefaultCommand(new MySpecialCommand());
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
}

void Gearer::Extend(){
   gearSolenoid1->Set(DoubleSolenoid::Value::kForward);
}

void Gearer::Retract(){
	 gearSolenoid1->Set(DoubleSolenoid::Value::kReverse);
}

void Gearer::Off(){
	gearRoller->Set(0.);
}

void Gearer::In(){
	gearRoller->Set(-1);
}

void Gearer::ContinuousRollers()
{
	//gearRoller->Set();
}

void Gearer::Out(){
	gearRoller->Set(1);
}
void Gearer::Secure(){
	gearSecurer->Set(DoubleSolenoid::Value::kReverse);
	m_isSecured = true;
}

void Gearer::UnSecure(){
	gearSecurer->Set(DoubleSolenoid::Value::kForward);
	m_isSecured = false;
}

bool Gearer::GetIsSecured() const {
	return m_isSecured;
}

// These are all methods for components that don't exist yet
/*
bool Gearer::GetHasGear() const{
	return gearDetect->Get();
}
*/


