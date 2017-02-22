/*90\\
 * TenBallAuto.cpp
 *
 *  Created on: Feb 21, 2017
 *      Author: first
 */

#include <Commands/TenBallAuto.h>
#include <RobotMap.h>
#include <Commands/MoveShooterAuto.h>
#include <Commands/MoveMagiKarpetIn.h>
#include <Commands/FeederIn.h>
#include <Custom/UserSettings.h>

TenBallAuto::TenBallAuto() {
	// TODO Auto-generated constructor stub
 UserSettings settings;

AddSequential(new MoveShooterAuto(settings.GetUserDriveSpeed()), 2);
AddParallel(new MoveMagiKarpetIn(), 6);
AddParallel(new FeederIn(), 6);

}

