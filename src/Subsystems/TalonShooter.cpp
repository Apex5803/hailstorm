/*
 * TalonShooter.cpp
 *
 *  Created on: Feb 15, 2017
 *      Author: first
 */

#include <Subsystems/TalonShooter.h>
#include "../RobotMap.h"
#include "SmartDashboard/SmartDashboard.h"
#include "LiveWindow/LiveWindow.h"
#include "CANTalon.h"

TalonShooter::TalonShooter() {
	// TODO Auto-generated constructor stub
    shooterWheelPrimary = RobotMap::shootershooterWheelPrimary;
    shooterWheelBooster = RobotMap::shootershooterWheelBooster;

    //select talon's sensor
    shooterWheelBooster->SetFeedbackDevice(CANTalon::QuadEncoder);
    shooterWheelBooster->SetSensorDirection(false);

    shooterWheelBooster->ConfigEncoderCodesPerRev(3);

    shooterWheelPrimary->SetTalonControlMode(CANTalon::kFollowerMode);
    shooterWheelPrimary->Set(shooterWheelBooster->GetDeviceID());

    shooterWheelBooster->SetClosedLoopOutputDirection(false);
    shooterWheelPrimary->SetClosedLoopOutputDirection(true);

    //set the peak and nominal outputs
    shooterWheelPrimary->ConfigNominalOutputVoltage(+0., -0.);
    shooterWheelBooster->ConfigNominalOutputVoltage(+0., -0.);

    shooterWheelPrimary->ConfigPeakOutputVoltage(+12., -12.);
    shooterWheelBooster->ConfigPeakOutputVoltage(+12., -12.);

    shooterWheelPrimary->SetAllowableClosedLoopErr(0);
    shooterWheelBooster->SetAllowableClosedLoopErr(0);

    shooterWheelPrimary->SetVoltageRampRate(36.0);
    shooterWheelBooster->SetVoltageRampRate(36.0);


    shooterWheelPrimary->ClearStickyFaults();
    shooterWheelBooster->ClearStickyFaults();

    //set closed loop gains
    shooterWheelPrimary->SelectProfileSlot(0);
    shooterWheelPrimary->SetF(0.0);
    shooterWheelPrimary->SetP(0.1);
    shooterWheelPrimary->SetI(0.0);
    shooterWheelPrimary->SetD(0.0);

}

void TalonShooter::SetRPM(double rpm){
	shooterWheelBooster->Set(rpm);
	std::cout << rpm << "rpm \n";
	std::cout << shooterWheelBooster->GetSetpoint() << " is setpoint and speed is: " << shooterWheelBooster->GetSpeed() << "\n";
	std::cout << shooterWheelPrimary->GetSetpoint() << " is setpoint of primary \n";
}
