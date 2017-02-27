/*
 * UserSettings.cpp
 *
 *  Created on: Feb 21, 2017
 *      Author: first
 */

#include <Custom/UserSettings.h>
#include <WPILib.h>

UserSettings::UserSettings() {
	// TODO Auto-generated constructor stub
    //Dashboard Variables

}

double UserSettings::GetUserShooterSpeed(){
	return Preferences::GetInstance()->GetDouble("Shooter Speed", 1200.0);
}

double UserSettings::GetUserDriveSpeed(){
	return Preferences::GetInstance()->GetDouble("Drive Speed", 1.0);
}

double UserSettings::GetUserHeading(){
	return Preferences::GetInstance()->GetDouble("HeadingSetPoint", 0.0);
}

