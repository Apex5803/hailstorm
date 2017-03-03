#include "DriveDistance.h"
#include "Robot.h"

DriveDistance::DriveDistance(float distance, float max_speed) {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
	Requires(Robot::drive.get());
	m_max_speed = max_speed;

	// Formula to get ticks is (distance / wheel circumference) * ticks per rotation
	// Since we are going straight, we don't need to do crazy wheelbase offset
	// calculations (ask Evan about what that means, also look up what a differential in a car is/does)
	m_ticks_to_target = (distance / (Robot::drive->WHEEL_DIAMETER * (22. / 7))) * Robot::drive->TICKS_PER_ROTATION;
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
	float right_encoder_value = Robot::drive->GetRightEncoder();
	float left_encoder_value = Robot::drive->GetLeftEncoder();
	float right_speed = (m_ticks_to_target - right_encoder_value) * KP;
	float left_speed = (m_ticks_to_target - left_encoder_value) * KP;

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
	if (right_encoder_value > left_encoder_value)
	{
		m_right_sag -= SAG_AGGRESSIVENESS;
	}

	if (left_encoder_value > right_encoder_value)
	{
		m_right_sag += SAG_AGGRESSIVENESS;
	}

	Robot::drive->MyDrive(left_speed + m_left_sag, right_speed + m_right_sag);
}

// Make this return true when this Command no longer needs to run execute()
bool DriveDistance::IsFinished()
{
	return abs(Robot::drive->GetLeftEncoder() - m_ticks_to_target) <= ERROR_TICKS &&
			abs(Robot::drive->GetRightEncoder() - m_ticks_to_target) <= ERROR_TICKS;
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
