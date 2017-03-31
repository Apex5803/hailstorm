/*
 * ReverseTenBallAuto.cpp
 *
 *  Created on: Mar 18, 2017
 *      Author: Apex5803
 */

#include <Commands/ReverseTenBallAuto.h>
#include <RobotMap.h>
#include <Commands/MoveShooter.h>
#include <Commands/MoveMagiKarpetIn.h>
#include <Commands/FeederIn.h>
#include <Commands/FeederOut.h>
#include <Custom/UserSettings.h>
#include <stdio.h>
#include <Commands/MoveIntakeIn.h>
#include <Commands/TankDrive.h>


ReverseTenBallAuto::ReverseTenBallAuto() {
	// TODO Auto-generated constructor stub
	UserSettings settings;

std::cout << "Shooter Setpoint:" << settings.GetUserShooterSpeed() << "\n";
AddParallel(new MoveShooter(8950.), 10);
printf ("Shooter started         /n ");
AddSequential (new FeederOut(), 0.5);
printf ("Feeder reversed       /n" );
AddParallel(new MoveMagiKarpetIn(), 7);
printf ("MagiKarpet moved in      /n ");
AddParallel (new MoveIntakeIn(), 7);
printf ("BallCollector Moved     /n ");
AddSequential(new FeederIn(), 7);
printf ("Feeder ran in     /n" );
AddSequential (new TankDrive(-.8, -.4), 1.1);
printf ("Drove Backwards     /n ");
AddSequential (new TankDrive(-.5), 2.3);

}

