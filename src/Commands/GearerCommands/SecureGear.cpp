/*
 * SecureGear.cpp
 *
 *  Created on: Feb 27, 2017
 *      Author: first
 */

#include <Commands/GearerCommands/SecureGear.h>

SecureGear::SecureGear() {
	// TODO Auto-generated constructor stub

}
void SecureGear::Initialize(){

}
void SecureGear::Execute(){
	Robot::gearer->Secure();
}
bool SecureGear::IsFinished(){
	return false;
}
void SecureGear::End(){

}
void SecureGear::Interrupted(){
	End();
}
