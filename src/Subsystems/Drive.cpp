#include "Drive.h"

#include "../RobotMap.h"



#include "../Commands/TankDrive.h"



Drive::Drive() : Subsystem("Drive") {

    //dBaseEncoderL = RobotMap::driveTraindBaseEncoderL;
    //dBaseEncoderR = RobotMap::driveTraindBaseEncoderR;
    dBaseL1 = RobotMap::driveTraindBaseL1;
    dBaseL2 = RobotMap::driveTraindBaseL2;
    dBaseR1 = RobotMap::driveTraindBaseR1;
    dBaseR2 = RobotMap::driveTraindBaseR2;
    //dBaseGyro = RobotMap::driveTraindBaseGyro;



    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS

	// Initialize the robot drive. The constructor is documented at

	// http://first.wpi.edu/FRC/roborio/release/docs/cpp/classRobotDrive.html#a47180c144fcca9e7550f7cb906c8b79a

	drive = new RobotDrive(

		    dBaseL1,

		    dBaseL2,

		    dBaseR1,

		    dBaseR2);




	drive->SetSafetyEnabled(false);

}



void Drive::InitDefaultCommand() {

    // Set the default command for a subsystem here.

    // SetDefaultCommand(new MySpecialCommand());



        SetDefaultCommand(new TankDrive());

}



void Drive::MyDrive(float left, float right)

{

	drive->TankDrive(left, right);

}



void Drive::MyDrive(Joystick * leftStick, Joystick * rightStick)

{

	drive->TankDrive(leftStick->GetY(),rightStick->GetY());

}



// Put methods for controlling this subsystem

// here. Call these from Commands.
