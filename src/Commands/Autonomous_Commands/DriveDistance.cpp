#include "DriveDistance.h"
#include "Robot.h"
#include "SmartDashboard/SmartDashboard.h"

DriveDistance::DriveDistance(float distance, float max_speed) {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
	Requires(Robot::drive.get());
	m_max_speed = max_speed;

	// Formula to get ticks is (distance / wheel circumference) * ticks per rotation
	// Since we are going straight, we don't need to do crazy wheelbase offset
	// calculations (ask Evan about what that means, also look up what a differential in a car is/does)
	auto ticks_to_target = (distance / (Robot::drive->WHEEL_DIAMETER * (22. / 7))) * Robot::drive->TICKS_PER_ROTATION;

	// To go straight, one encoder must be going the wrong way
	if (distance > 0)
	{
		// Going forward
		m_right_target = ticks_to_target;
		m_left_target = -ticks_to_target;
	}
	else
	{
		// Going Backward
		m_right_target = -ticks_to_target;
		m_left_target = ticks_to_target;
	}
}

// Called just before this Command runs the first time
void DriveDistance::Initialize()
{
	// reset the encoders so that we are getting real distances!
	Robot::drive->ResetEncoders();
}

// Called repeatedly when this Command is scheduled to run
void DriveDistance::Execute()
{
	// Calculate how far off we are on both sides and get a speed as a result
	// Note, one encoder is going to be negative because of the nature of the robot!
	float right_encoder_value = Robot::drive->GetRightEncoder();
	float left_encoder_value = Robot::drive->GetLeftEncoder();
	float right_speed = (m_right_target - right_encoder_value) * KP;
	float left_speed = (m_left_target - left_encoder_value) * KP;

	if (abs(right_speed) > m_max_speed)
	{
		right_speed = right_speed < 0 ? -m_max_speed : m_max_speed;
	}

	if (abs(left_speed) > m_max_speed)
	{
		left_speed = left_speed < 0 ? -m_max_speed : m_max_speed;
	}

	// See if there is any side that is going too fast and slow it down a bit
	// NOTE: I am only doing the right side because we want the robot to not perpetually slow down
	// Note: Directionality matters if we are going backwards!
	if (right_encoder_value > left_encoder_value)
	{
		m_right_sag = right_speed < 0 ? SAG_AGGRESSIVENESS + m_right_sag : SAG_AGGRESSIVENESS - m_right_sag;
	}

	if (left_encoder_value > right_encoder_value)
	{
		m_right_sag = right_speed < 0 ? SAG_AGGRESSIVENESS - m_right_sag : SAG_AGGRESSIVENESS + m_right_sag;
	}

	SmartDashboard::PutNumber("lspeed", left_speed);
	SmartDashboard::PutNumber("rspeed", right_speed);
	Robot::drive->MyDrive(left_speed + m_left_sag, right_speed + m_right_sag);
}

// Make this return true when this Command no longer needs to run execute()
bool DriveDistance::IsFinished()
{
	return abs(Robot::drive->GetLeftEncoder() - m_left_target) <= ERROR_TICKS &&
			abs(Robot::drive->GetRightEncoder() - m_right_target) <= ERROR_TICKS;
}

// Called once after isFinished returns true
void DriveDistance::End()
{
	Robot::drive->Stop();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void DriveDistance::Interrupted()
{
	Robot::drive->Stop();
}
