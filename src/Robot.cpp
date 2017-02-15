// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "Robot.h"
#include <unistd.h>
#include <stdio.h>
#include <Vision/VisionProcessing.h>

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INITIALIZATION
std::shared_ptr<DriveTrain> Robot::driveTrain;
std::shared_ptr<Gearer> Robot::gearer;
std::shared_ptr<BallCollector> Robot::ballCollector;
std::shared_ptr<MagiKarpet> Robot::magiKarpet;
std::shared_ptr<Feeder> Robot::feeder;
std::shared_ptr<Shooter> Robot::shooter;
std::unique_ptr<OI> Robot::oi;
std::shared_ptr<PowerDistributionPanel> Robot::pdp;

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INITIALIZATION

void Robot::RobotInit() {
	RobotMap::init();
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
    driveTrain.reset(new DriveTrain());
    gearer.reset(new Gearer());
    ballCollector.reset(new BallCollector());
    magiKarpet.reset(new MagiKarpet());
    feeder.reset(new Feeder());
    shooter.reset(new Shooter());
    pdp.reset(new PowerDistributionPanel());

    //initialize vision setpoint variables
    rawArea = rawX = rawY = 0;


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
	// This MUST be here. If the OI creates Commands (which it very likely
	// will), constructing it during the construction of CommandBase (from
	// which commands extend), subsystems are not guaranteed to be
	// yet. Thus, their requires() statements may grab null pointers. Bad
	// news. Don't move it.
	oi.reset(new OI());

	// instantiate the command used for the autonomous period
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=AUTONOMOUS
	autonomousCommand.reset(new AutonomousCommand());

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=AUTONOMOUS



  }

/**
 * This function is called when the disabled button is hit.
 * You can use it to reset subsystems before shutting down.
 */
void Robot::DisabledInit(){

}

void Robot::DisabledPeriodic() {
	Scheduler::GetInstance()->Run();
}

void Robot::AutonomousInit() {

	if (autonomousCommand.get() != nullptr)
		autonomousCommand->Start();
}

void Robot::AutonomousPeriodic() {

	//commented out this code, let's use the new functions
	/* Scheduler::GetInstance()->Run();
	auto grip = NetworkTable::GetTable("myContoursTable");
	auto xs = grip->GetNumberArray("targets/areas", llvm::ArrayRef<double>());
	for (auto x : xs){
		std::cout << "Got contour with x-" << x << std::endl;

	*/

	//std::make_tuple<rawArea,rawX,rawY> = VisionProcessing.GetRawData();

	VisionProcessing vp; //construct an instance of our VisionProcessing class

	//Get the raw vision data from our vision processing function
	std::tie(rawArea,rawX,rawY) = vp.GetRawData();

	//display everytime we get a new Area read for debugging purposes.
	std::cout << "Got an Area: " << rawArea << " X pixel: " << rawX << " Y pixel: " << rawY;

	//get scaled data as new setpoints to put into the PID block --> How do we put this into the PID blocks? Where are they?
	std::tie(setpointX,distanceY) = vp.GetScaledData(rawX,rawY);

}

void Robot::TeleopInit() {
	// This makes sure that the autonomous stops running when
	// teleop starts running. If you want the autonomous to
	// continue until interrupted by another command, remove
	// these lines or comment it out.
	if (autonomousCommand.get() != nullptr)
		autonomousCommand->Cancel();
}

void Robot::TeleopPeriodic() {
	Scheduler::GetInstance()->Run();
}

void Robot::TestPeriodic() {
	lw->Run();
}

START_ROBOT_CLASS(Robot);

