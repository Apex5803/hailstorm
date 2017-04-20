/*
 * GearandBalls.cpp
 *
 *  Created on: Apr 20, 2017
 *      Author: Apex5803
 */

#include <Commands/Autonomous_Commands/GearandBalls.h>


GearandBalls::GearandBalls() {
	// TODO Auto-generated constructor stub
	AddSequential(new TankDrive(-.6), 2);
	AddSequential(new TankDrive(0), .2);
	AddParallel(new MoveGearerAuto(), 1);
	AddSequential(new TankDrive(.5), 1.3);
	AddSequential(new TankDrive(.5, -.5), .3);
	AddSequential(new TankDrive(.6), 3);
	AddSequential(new TankDrive(-0.6), 0.2);
	AddSequential(new TankDrive(0), 0.2);

	AddParallel(new MoveShooter(8950.), 7);
	//printf ("Shooter started         /n ");
	AddSequential (new FeederOut(), 0.5);
	//printf ("Feeder reversed       /n ");
	AddParallel(new MoveMagiKarpetIn(), 6.5);
	//printf ("MagiKarpet moved in      /n ");
	AddParallel (new MoveIntakeIn(), 6.5);
	//printf ("BallCollector Moved     /n ");
	AddSequential(new FeederIn(), 6.5);
	//printf ("Feeder ran in     /n ");
	//AddSequential (new TankDrive(-.4, -.8), 1.1);
	//printf ("Drove Backwards     /n ");
	//AddSequential (new TankDrive(-.5), 2.3);

}

