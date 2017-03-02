/*
 * UnsecureAndScoreGear.cpp
 *
 *  Created on: Mar 1, 2017
 *      Author: Lydia
 */

#include <Commands/GearerCommands/UnsecureAndScoreGear.h>

UnsecureAndScoreGear::UnsecureAndScoreGear() {
	// TODO Auto-generated constructor stub
    if(m_isUnsecured == false){
    	AddSequential(new UnsecureGear(), 1);
    }

    AddSequential(new ScoreGear());
}

