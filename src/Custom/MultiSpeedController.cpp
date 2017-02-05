/*
 * MultiSpeedController.cpp
 *
 *  Created on: Jan 28, 2017
 *      Author: first
 */

#include <Custom/MultiSpeedController.h>
#include "WPILib.h"

MultiSpeedController::MultiSpeedController(int motor_ports[], int size) {
	// TODO Auto-generated constructor stub
	this->currentSpeed = .0;
	this->isInverted = false;
	this->num_motors = size;
	this->motor_ports = new int[size];
	for (int i = 0; i < num_motors; i++){
		this->motor_ports[i] = motor_ports[i];
	}

}

 MultiSpeedController::~MultiSpeedController(){
	delete[] this->motor_ports;
}


void MultiSpeedController::InitMotors(){
	for(int i = 0; i < num_motors; i++){
				std::shared_ptr<SpeedController> new_motor;
				new_motor.reset(new VictorSP(motor_ports[i]));
				this->speedControllers.emplace_back(new_motor);
			}
}

void MultiSpeedController::Set(double speed){
	for(unsigned int i = 0; i < this->speedControllers.size(); i++){
			this->speedControllers[i]->Set(speed);
	}

	this->currentSpeed = speed;
}

double MultiSpeedController::Get() const{
	return currentSpeed;
}

void MultiSpeedController::SetInverted (bool isInverted){
	for(unsigned int i = 0; i < this->speedControllers.size(); i++)
	{
		this->speedControllers[i]->SetInverted(isInverted);
	}
	this-> isInverted = isInverted;
}

void MultiSpeedController::PIDWrite(double output){
	for(unsigned int i = 0; i < this->speedControllers.size(); i++)
	{
		this->speedControllers[i]->PIDWrite(output);
	}
}

void MultiSpeedController::Disable(){
	for(unsigned int i = 0; i < this->speedControllers.size(); i++){
		this->speedControllers[i]->Disable();
	}
}

bool MultiSpeedController::GetInverted() const{
	return isInverted;
}

void MultiSpeedController::StopMotor(){
	for(unsigned int i = 0; i < this->speedControllers.size(); i++){
			this->speedControllers[i]->StopMotor();
		}
}
