/*
 * TurnGyro.cpp
 *
 *  Created on: Apr 13, 2017
 *      Author: Apex5803
 */

#include <Commands/Autonomous_Commands/TurnGyro.h>

TurnGyro::TurnGyro(double degree, double base_speed) : Command(){
	// TODO Auto-generated constructor stub
	Requires(Robot::drive.get());
	m_target_deg = degree;
	m_initial_yaw = 0.;
	m_base_speed = abs(base_speed);
}

void TurnGyro::Initialize()
{
	m_initial_yaw = Robot::drive->GetYaw();
}

void TurnGyro::Execute()
{
	float yaw = Robot::drive->GetYaw();
	float yaw_error = (m_target_deg + m_initial_yaw) - yaw;

	SmartDashboard::PutNumber("Yaw", yaw);
	SmartDashboard::PutNumber("Yaw Error", yaw_error);

	float left_speed = 0.;
	float right_speed = 0.;

	if(m_target_deg > 0.)
	{
		left_speed = -(m_base_speed + yaw_error * KP);
		right_speed = -(m_base_speed + yaw_error * KP);
	}
	else
	{
		left_speed = m_base_speed + (yaw_error * KP);
		right_speed = m_base_speed + (yaw_error * KP);
	}

	SmartDashboard::PutNumber("Left speed calculated", left_speed);
	SmartDashboard::PutNumber("Right speed calculated", right_speed);

	Robot::drive->MyDrive(left_speed, right_speed);

	std::cout << "Yaw error: " << yaw_error;
	printf("Gyro did a thing (couldn't think of anything else to add here)");
}

bool TurnGyro::IsFinished()
{
	float yaw = Robot::drive->GetYaw();
	float yaw_error = (m_target_deg + m_initial_yaw) - yaw;
	return abs(yaw_error) <= TOLERANCE_DEG;
}

void TurnGyro::End()
{
	Robot::drive->Stop();
}

void TurnGyro::Interrupted()
{
	Robot::drive->Stop();
}
