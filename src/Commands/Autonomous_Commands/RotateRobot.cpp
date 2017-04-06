#include "RotateRobot.h"
#include "Robot.h"

RotateRobot::RotateRobot(float degrees, float max_speed)
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
	Requires(Robot::drive.get());

	// Note, we get this distance by getting the arc length to travel X degrees about the center of the robot
	// This equation is 2 * pi * radius * (degrees / 360)
	// radius is half of the wheelbase of the robot
	auto target_distance = 2 * (22. / 7) * (Robot::drive->BASE_WIDTH / 2.) * (degrees / 360.);
	auto ticks_to_target = (target_distance / (Robot::drive->WHEEL_DIAMETER * (22. / 7))) * Robot::drive->TICKS_PER_ROTATION;
	if (degrees < 0)
	{
		// turn left
		m_left_target = ticks_to_target;
		m_right_target = ticks_to_target;
	}
	else
	{
		//turn right
		m_right_target = -ticks_to_target;
		m_left_target = -ticks_to_target;
	}

	m_max_speed = max_speed;

	SmartDashboard::PutNumber("left target", m_left_target);
	SmartDashboard::PutNumber("right target", m_right_target);
}

// Called just before this Command runs the first time
void RotateRobot::Initialize()
{
	// Reset the encoders so we are getting true distances
	Robot::drive->ResetEncoders();
}

// Called repeatedly when this Command is scheduled to run
void RotateRobot::Execute()
{
	// Calculate how far off we are on both sides and get a speed as a result
	// Note, one encoder is going to be negative because of the nature of the robot!
	// NOTE: This is what we want here because directionality is important.
	// If the robot continues to rotate at high speed, reverse the negative sign in the constructor (or i did some math wrong)
	// WARNING Excessive robot break-dancing will result in tangled cables!
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

	// You could add sag here, but I am way too lazy to add that right now.

	Robot::drive->MyDrive(left_speed, right_speed);

	SmartDashboard::PutNumber("right encoder", right_encoder_value);
	SmartDashboard::PutNumber("left encoder", left_encoder_value);
	SmartDashboard::PutNumber("right speed rr", right_speed);
	SmartDashboard::PutNumber("left speed rr", left_speed);
}

// Make this return true when this Command no longer needs to run execute()
bool RotateRobot::IsFinished()
{
	return abs(Robot::drive->GetLeftEncoder() - m_left_target) <= ERROR_TICKS &&
				abs(Robot::drive->GetRightEncoder() - m_right_target) <= ERROR_TICKS &&
				abs(Robot::drive->GetRightEncoderSpeed()) <= MAX_STOPPING_VELOCITY &&
				abs(Robot::drive->GetLeftEncoderSpeed()) <= MAX_STOPPING_VELOCITY;
}

// Called once after isFinished returns true
void RotateRobot::End()
{
	Robot::drive->Stop();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void RotateRobot::Interrupted()
{
	Robot::drive->Stop();
}
