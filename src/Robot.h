// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#ifndef _ROBOT_H
#define _ROBOT_H

#include "WPILib.h"
#include "Commands/Command.h"
#include "RobotMap.h"
#include "LiveWindow/LiveWindow.h"

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "Subsystems/BallCollector.h"
#include "Subsystems/Feeder.h"
#include "Subsystems/Gearer.h"
#include "Subsystems/MagiKarpet.h"
#include "Subsystems/Shooter.h"
#include "Subsystems/Drive.h"
#include "Subsystems/TalonShooter.h"
#include "Subsystems/Pneumatics.h"
#include "Subsystems/Climber.h"


#include "Commands/Autonomous_Commands/OneGearAuto.h"
#include "Commands/Autonomous_Commands/TenBallAuto.h"
#include "Commands/Autonomous_Commands/EncoderGearAuto.h"
#include "Commands/Autonomous_Commands/DriveForwardAutoDeadReckoning.h"
#include "Commands/Autonomous_Commands/DriveForwardEncoders.h"
#include "Commands/ReverseTenBallAuto.h"
#include "Commands/Autonomous_Commands/AutoTurnTest.h"
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "OI.h"

// autos
const int AUTO_EN_G_PIN = 1;
const int AUTO_ONE_G_PIN = 0;
const int AUTO_TEN_B_PIN = 2;
const int AUTO_DRVIE_FORWARD_PIN = 4;
const int AUTO_DRIVE_FORWARD_ENC_PIN = 9;
const int AUTO_R_TEN_B_PIN = 3;

class Robot : public IterativeRobot {

private:
	DigitalInput * oneGearAutoPin = new DigitalInput(0); // One gear auto pin 0
	DigitalInput * redTenBallAutoPin = new DigitalInput(2); // Red alliance ten ball auto pin 2
	DigitalInput * encoderGearAutoPin = new DigitalInput(1); // Encoder gear auto pin 1
	DigitalInput * driveForwardAutoDeadReckoningPin = new DigitalInput(4); // Drive forward dead reckoning pin 4
	DigitalInput * driveForwardEncoderPin = new DigitalInput(9); // Drive forward with encoders pin 9
	DigitalInput * blueTenBallAutoPin = new DigitalInput(3); // Blue alliance ten ball auto pin 3
	DigitalInput * autoTurnTestPin = new DigitalInput (5);

	std::string selectedAutonomous = "init";
public:
	Command *autonomousCommand;
	static std::unique_ptr<OI> oi;
	LiveWindow *lw = LiveWindow::GetInstance();
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
    static std::shared_ptr<Gearer> gearer;
    static std::shared_ptr<BallCollector> ballCollector;
    static std::shared_ptr<MagiKarpet> magiKarpet;
    static std::shared_ptr<Feeder> feeder;
    static std::shared_ptr<Shooter> shooter;
    static std::shared_ptr<PowerDistributionPanel> pdp;
    static std::shared_ptr<Drive> drive;
    static std::shared_ptr<TalonShooter> talonShooter;
    static std::shared_ptr<Pneumatics> pneumatics;
    static std::shared_ptr<Climber> climber;


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	virtual void RobotInit();
	virtual void DisabledInit();
	virtual void DisabledPeriodic();
	virtual void AutonomousInit();
	virtual void AutonomousPeriodic();
	virtual void TeleopInit();
	virtual void TeleopPeriodic();
	virtual void TestPeriodic();

	//initialize Vision variables
	double rawArea, rawX, rawY;
	double setpointX, distanceY;
	double headingSetpoint, detectedDistance;
};
#endif
