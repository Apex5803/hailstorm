/*
 * CollectGear.cpp
 *
 *  Created on: Mar 1, 2017
 *      Author: Lydia
 */

#include <Commands/GearerCommands/CollectGear.h>

CollectGear::CollectGear() {
	// TODO Auto-generated constructor stub

}

void CollectGear::Initialize(){

}
void CollectGear::Execute(){
	Robot::gearer->Extend();
	Robot::gearer->In();
}
bool CollectGear::IsFinished(){
	return false;
}
void CollectGear::End(){

}
void CollectGear::Interrupted(){
	End();
}
