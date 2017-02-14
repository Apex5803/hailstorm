// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "OI.h"

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "SmartDashboard/SmartDashboard.h"
#include "Commands/AutonomousCommand.h"
#include "Commands/MoveFeeder.h"
#include "Commands/MoveGearer.h"
#include "Commands/MoveBallCollector.h"
#include "Commands/MoveMagiKarpet.h"
#include "Commands/TankDrive.h"
#include "Commands/MoveShooter.h"

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

OI::OI() {
    // Process operator interface input here.
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
    xBoxController.reset(new XboxController(2));
    
    joystickR.reset(new Joystick(1));
    
    joystickL.reset(new Joystick(0));



    ballCollectorForward.reset(new JoystickButton(xBoxController.get(), 1));
    ballCollectorForward->WhileHeld(new MoveBallCollector());

    gearerButtonReverse.reset(new JoystickButton(xBoxController.get(), 4));
    gearerButtonReverse->WhileHeld(new MoveGearer());
    gearerButtonForward.reset(new JoystickButton(xBoxController.get(), 5));
	gearerButtonForward->WhileHeld(new MoveGearer());

	magikarpetButton.reset(new JoystickButton(xBoxController.get(), 2));
	magikarpetButton->WhileHeld(new MoveMagiKarpet());
	feederButton.reset(new JoystickButton(xBoxController.get(), 2));
	feederButton->WhileHeld(new MoveFeeder());

	shooterButton.reset(new JoystickButton(xBoxController.get(), 6));
	shooterButton->WhileHeld(new MoveShooter());
    
	// SmartDashboard Buttons



	SmartDashboard::PutData("Autonomous Command", new AutonomousCommand());

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS


   SmartDashboard::PutData("TankDrive", new TankDrive());
   SmartDashboard::PutData("MoveBallCollector", new MoveBallCollector());
   SmartDashboard::PutData("MoveMagiKarpet", new MoveMagiKarpet());
   SmartDashboard::PutData("MoveFeeder", new MoveFeeder());
   SmartDashboard::PutData("MoveGearer", new MoveGearer());

}

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS

std::shared_ptr<Joystick> OI::getJoystickL() {
   return joystickL;
}

std::shared_ptr<Joystick> OI::getJoystickR() {
   return joystickR;
}

std::shared_ptr<XboxController> OI::getXBoxController() {
   return xBoxController;
}


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS
