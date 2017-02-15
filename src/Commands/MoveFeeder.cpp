/*
 * MoveFeeder.cpp
 *
 *  Created on: Feb 8, 2017
 *      Author: first
 */

#include <Commands/MoveFeeder.h>

MoveFeeder::MoveFeeder(): Command() {
	// TODO Auto-generated constructor stub
	Requires(Robot::feeder.get());
	this-> m_button_count = 0;
	m_released_button = true;
}

void MoveFeeder::Initialize() {

}

void MoveFeeder::Execute() {
bool pressing = Robot::oi->getXBoxController()->GetBButton();
	if (m_released_button && pressing)
		{
			m_button_count++;
			m_released_button = false;
		}

		else
		{
		m_released_button = true;
		}

		if (m_button_count % 2 == 1)
		{
			Robot::feeder->FeedBall();
			printf("B Button was pressed");
		}
		else
		{
			Robot::feeder->Off();
			printf("B Button wasn't pressed");
		}

}

bool MoveFeeder::IsFinished(){
	return false;
}

void MoveFeeder::End(){
	Robot::feeder->Off();
}

void MoveFeeder::Interrupted(){

}
