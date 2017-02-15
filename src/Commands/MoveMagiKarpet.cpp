/*
 * MoveMagiKarpet.cpp
 *
 *  Created on: Feb 4, 2017
 *      Author: first
 */

#include <Commands/MoveMagiKarpet.h>

MoveMagiKarpet::MoveMagiKarpet(): Command() {
	// TODO Auto-generated constructor stub
	Requires(Robot::magiKarpet.get());
	this-> m_button_count = 0;
	m_released_button = true;
}

void MoveMagiKarpet::Initialize(){

}

void MoveMagiKarpet::Execute(){
			Robot::magiKarpet->In();


	/*
	if (m_released_button)
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
		Robot::magiKarpet->In();
	}
	else
	{
		Robot::magiKarpet->Off();
	}
*/

}

bool MoveMagiKarpet::IsFinished(){
	return false;
}

void MoveMagiKarpet::End(){
	Robot::magiKarpet->Off();
}

void MoveMagiKarpet::Interrupted(){
	Robot::magiKarpet->Off();
}
