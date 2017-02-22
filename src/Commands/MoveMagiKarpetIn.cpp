/*
 * MoveMagiKarpetAuto.cpp
 *
 *  Created on: Feb 21, 2017
 *      Author: first
 */

#include <Commands/MoveMagiKarpetIn.h>

MoveMagiKarpetIn::MoveMagiKarpetIn() {
	// TODO Auto-generated constructor stub

}


void MoveMagiKarpetIn::Initialize(){

}

void MoveMagiKarpetIn::Execute(){

			Robot::magiKarpet->In();


}

bool MoveMagiKarpetIn::IsFinished(){
	return false;
}

void MoveMagiKarpetIn::End(){
	Robot::magiKarpet->Off();
}

void MoveMagiKarpetIn::Interrupted(){
	Robot::magiKarpet->Off();
}

