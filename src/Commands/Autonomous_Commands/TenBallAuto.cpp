/*90\\
 * TenBallAuto.cpp
 *
 *  Created on: Feb 21, 2017
 *      Author: first
 */

#include <Commands/Autonomous_Commands/TenBallAuto.h>
#include <RobotMap.h>
#include <Commands/MoveShooterAuto.h>
#include <Commands/MoveMagiKarpetIn.h>
#include <Commands/FeederIn.h>
#include <Custom/UserSettings.h>
#include <stdio.h>

TenBallAuto::TenBallAuto() {
	// TODO Auto-generated constructor stub
 UserSettings settings;

std::cout << "Shooter Setpoint:" << settings.GetUserShooterSpeed() << "\n";
AddSequential(new MoveShooterAuto(settings.GetUserShooterSpeed()), 2);
AddParallel(new MoveMagiKarpetIn(), 6);
AddParallel(new FeederIn(), 6);

}

