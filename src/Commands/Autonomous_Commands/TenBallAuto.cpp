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
#include <Commands/MoveIntakeIn.h>
#include <Commands/TankDrive.h>

TenBallAuto::TenBallAuto() {
	// TODO Auto-generated constructor stub
 UserSettings settings;

std::cout << "Shooter Setpoint:" << settings.GetUserShooterSpeed() << "\n";
AddParallel(new MoveShooter(settings.GetUserShooterSpeed()), 10);
printf ("Shooter started         /n");
AddSequential (new FeederOut(), 1);
printf ("Feeder reversed       /n");
AddParallel(new MoveMagiKarpetIn(), 7);
printf ("MagiKarpet moved in      /n");
AddParallel (new MoveIntakeIn(), 7);
printf ("BallCollector Moved     /n");
AddSequential(new FeederIn(), 7);
printf ("Feeder ran in     /n");
AddSequential (new TankDrive(-.6), 3.2);
printf ("Drove Backwards     /n");

}

