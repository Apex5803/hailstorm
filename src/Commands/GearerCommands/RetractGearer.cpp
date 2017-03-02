/*
 * RetractGearer.cpp
 *
 *  Created on: Mar 1, 2017
 *      Author: Lydia
 */

#include <Commands/GearerCommands/RetractGearer.h>

RetractGearer::RetractGearer() {
	// TODO Auto-generated constructor stub

}

void RetractGearer::Initialize(){

}
void RetractGearer::Execute(){
	Robot::gearer->Retract();
	Robot::gearer->Off();
}
bool RetractGearer::IsFinished(){
	return false;
}
void RetractGearer::End(){

}
void RetractGearer::Interrupted(){
	End();
}
