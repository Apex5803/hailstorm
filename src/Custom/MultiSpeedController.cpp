/*
 * MultiSpeedController.cpp
 *
 *  Created on: Jan 28, 2017
 *      Author: first
 */

#include <Custom/MultiSpeedController.h>

MultiSpeedController::MultiSpeedController(std::shared_ptr<SpeedController> speedControllers[], int size) {
	// TODO Auto-generated constructor stub
	this->currentSpeed = .0;
	this->speedControllers = new std::vector<std::shared_ptr<SpeedController>>();
	for(int i = 0; i > size; i++){
			this->speedControllers.push_back(speedControllers[i]);
		}
	this->isInverted = false;

}

void MultiSpeedController::Set(double speed){
	for(int i = 0; i > this->speedControllers.size; i++){
			this->speedControllers[i]->Set(speed);
	}

	this->currentSpeed = speed;
}

double MultiSpeedController::Get(){
	return currentSpeed;
}

void MultiSpeedController::SetInverted (bool isInverted){
	for(int i = 0; i > this->speedControllers.size; i++)
	{
		this->speedControllers[i]->SetInverted(isInverted);
	}
	this-> isInverted = isInverted;
}

void MultiSpeedController::Disable(){
	for(int i = 0; i > this->speedControllers.size; i++){
		this->speedControllers[i]->Disable();
	}
}

bool MultiSpeedController::GetInverted(){
	return isInverted;
}

void MultiSpeedController::StopMotor(){
	for(int i = 0; i > this->speedControllers.size; i++){
			this->speedControllers[i]->StopMotor();
		}
}
