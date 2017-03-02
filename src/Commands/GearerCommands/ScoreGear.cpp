/*
 * ScoreGear.cpp
 *
 *  Created on: Mar 1, 2017
 *      Author: Lydia
 */

#include <Commands/GearerCommands/ScoreGear.h>
#include <ctime>
#include <iostream>
#include <iomanip>
#include <chrono>
ScoreGear::ScoreGear() {
	// TODO Auto-generated constructor stub
	Requires(Robot::gearer.get());

	// Initialize start time on construction
     m_start = std::chrono::system_clock::now();
     m_waiting = false;
}

void ScoreGear::Initialize(){

}

void ScoreGear::Execute(){
/*
    if (m_waiting == false)
    {

	m_start = std::chrono::system_clock::now();
    m_waiting = true;

    Robot::gearer->UnSecure();
    } else
    {

      std::chrono::milliseconds diff(500); // wait 500 ms (half a second) before scoring the gear--this is our threshold.
	  std::chrono::system_clock::time_point end = std::chrono::system_clock::now();

	  // Check if elapsed time (end - m_start) is past our threshold of 500 ms.
	  if(std::chrono::duration_cast<std::chrono::milliseconds>(end - m_start).count() > std::chrono::duration_cast<std::chrono::milliseconds>(diff).count()){
		Robot::gearer->Extend();
		Robot::gearer->Out();
    }
}
*/
	Robot::gearer->Extend();
	Robot::gearer->Out();


}

bool ScoreGear::IsFinished(){
	return false;
}

void ScoreGear::End(){
    Robot::gearer->Off();
}

void ScoreGear::Interrupted(){
	End();
}
