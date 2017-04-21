/*
 * GearAndBallsRed.cpp
 *
 *  Created on: Apr 21, 2017
 *      Author: Apex5803
 */

#include <Commands/Autonomous_Commands/GearAndBallsRed.h>

GearAndBallsRed::GearAndBallsRed() {
	// TODO Auto-generated constructor stub
	AddSequential(new TankDrive(-.6), 2);
		//printf ("Drove toward gearer  /n");
	AddSequential(new TankDrive(0), .2);
		//printf("Stopped /n");
	AddParallel(new MoveGearerAuto(), 1);
		//printf ("placed gear /n");
	AddSequential(new TankDrive(.5), .7);
		//printf ("Moved toward intake /n");
	AddSequential(new TankDrive(-.75, .75), .85);
		//printf ("turned toward boiler");
	AddSequential(new TankDrive(.6), 3);
		//printf ("Drove toward boiler /n");
	AddSequential(new TankDrive(-0.6), 0.25);
		//printf ("backed up slightly from boiler /n");
	AddSequential(new TankDrive(0), 0.2);
		//printf ("stopped moving before shooting /n");

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
}

