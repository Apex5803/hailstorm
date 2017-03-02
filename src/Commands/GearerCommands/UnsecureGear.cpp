/*
 * UnsecureGear.cpp
 *
 *  Created on: Feb 28, 2017
 *      Author: first
 */

#include <Commands/GearerCommands/UnsecureGear.h>

UnsecureGear::UnsecureGear() {
	// TODO Auto-generated constructor stub
	Requires(Robot::gearer.get());

}

void UnsecureGear::Initialize(){

}
void UnsecureGear::Execute(){
	Robot::gearer->UnSecure();
}
bool UnsecureGear::IsFinished(){
	return false;
}
void UnsecureGear::End(){

}
void UnsecureGear::Interrupted(){
	End();
}
