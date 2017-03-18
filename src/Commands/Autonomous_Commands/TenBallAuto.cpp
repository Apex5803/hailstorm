/*90\\
 * TenBallAuto.cpp
 *
 *  Created on: Feb 21, 2017
 *      Author: first
 */

#include <Commands/Autonomous_Commands/TenBallAuto.h>
#include <RobotMap.h>
#include <Commands/MoveShooter.h>
#include <Commands/MoveMagiKarpetIn.h>
#include <Commands/FeederIn.h>
#include <Commands/FeederOut.h>
#include <Custom/UserSettings.h>
#include <stdio.h>
#include <Commands/MoveBallCollector.h>
#include <Commands/TankDrive.h>

TenBallAuto::TenBallAuto() {
	// TODO Auto-generated constructor stub
 UserSettings settings;

std::cout << "Shooter Setpoint:" << settings.GetUserShooterSpeed() << "\n";
AddParallel(new MoveShooter(settings.GetUserShooterSpeed()), 10);
AddSequential (new FeederOut(), 1);
AddParallel(new MoveMagiKarpetIn(), 7);
AddParallel (new MoveBallCollector(), 7);
AddParallel(new FeederIn(), 7);
AddSequential (new TankDrive(-.8), 5.0);
}

