// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.
#include <Custom/AxisTrigger.h>
#include "OI.h"

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "SmartDashboard/SmartDashboard.h"
#include "Commands/Autonomous_Commands/OneGearAuto.h"
#include "Commands/MoveFeeder.h"
#include "Commands/MoveBallCollector.h"
#include "Commands/MoveMagiKarpet.h"
#include "Commands/TankDrive.h"
#include "Commands/MoveShooter.h"
#include "Commands/Climb.h"
#include "Commands/GearerCommands/UnsecureGear.h"
#include "Commands/GearerCommands/SecureGear.h"
#include "Commands/GearerCommands/CollectGear.h"
#include "Commands/GearerCommands/UnsecureAndScoreGear.h"
#include "Commands/GearerCommands/RetractGearer.h"
#include "stdio.h"
#include "Commands/Autonomous_Commands/EncoderGearAuto.h"

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

OI::OI() {
    // Process operator interface input here.
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
    xBoxController.reset(new XboxController(2));
    
    joystickR.reset(new Joystick(1));
    
    joystickL.reset(new Joystick(0));

    // Collector
    ballCollectorForward.reset(new JoystickButton(xBoxController.get(), 1));
    ballCollectorForward->WhileHeld(new MoveBallCollector());

    // This is the bumper--we want to collect when pressed and secure when released
    gearerBumper.reset(new JoystickButton(xBoxController.get(), 5));
    gearerBumper->WhileHeld(new CollectGear());
    gearerBumper->WhenReleased(new RetractGearer());

    // This is the trigger--we want to score when held and secure when released
    gearerTrigger.reset(new AxisTrigger(xBoxController.get(), 2)); // 2 is the trigger axis corresponding to the left trigger, see https://github.com/wpilibsuite/allwpilib/blob/master/wpilibc/athena/src/XboxController.cpp
    gearerTrigger->WhileActive(new UnsecureAndScoreGear());
    gearerTrigger->WhenInactive(new RetractGearer());

    // Secure the gear when the down button on the controller is pressed
    securerButton.reset(new POVTrigger(xBoxController.get(), 0, 180));
    securerButton->WhenActive(new SecureGear());

    // Unsecure gear when the up button on the dpad is pressed
    unsecurerButton.reset (new POVTrigger (xBoxController.get(), 0, 0));
    unsecurerButton->WhenActive(new UnsecureGear());

	magikarpetButton.reset(new JoystickButton(xBoxController.get(), 2));
	magikarpetButton->WhileHeld(new MoveMagiKarpet());

	feederButton.reset(new JoystickButton(xBoxController.get(), 2));
	feederButton->WhileHeld(new MoveFeeder());

	magikarpetreverseButton.reset(new JoystickButton(xBoxController.get(), 3));
	magikarpetreverseButton->WhileHeld(new MoveMagiKarpet());

	feederreverseButton.reset(new JoystickButton(xBoxController.get(), 3));
	feederreverseButton->WhileHeld(new MoveFeeder());

	shooterButton.reset(new JoystickButton(xBoxController.get(), 6));
	//shooterButton->WhileHeld(new MoveShooter(Preferences::GetInstance()->GetDouble("Shooter Speed", 9200.0)));
	shooterButton->WhileHeld(new MoveShooter(8950));

	climbButton.reset(new JoystickButton(xBoxController.get(), 4));
	climbButton->WhileHeld(new Climb());

	// SmartDashboard Buttons
	SmartDashboard::PutData("Autonomous Command", new DriveForwardEncoders());

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS


   SmartDashboard::PutData("TankDrive", new TankDrive());
   SmartDashboard::PutData("MoveBallCollector", new MoveBallCollector());
   SmartDashboard::PutData("MoveMagiKarpet", new MoveMagiKarpet());
   SmartDashboard::PutData("MoveFeeder", new MoveFeeder());
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
