#ifndef DriveDistance_H
#define DriveDistance_H

#include "WPILib.h"

class DriveDistance : public Command
{
private:
	/**
	 * This is the multiplier to determine how hard we should be driving.
	 * This is the P term in our PID
	 * For the love of god and all that is holy, keep this small. *Eric glares seriously*
	 */
	const float KP = .008;

	/**
	 * This value will be the weight we add to a side that is going too fast/slow.
	 */
	const float SAG_AGGRESSIVENESS = .005;

	/**
	 * This value is how close you want to get to your end goal before giving up
	 */
	const int ERROR_TICKS = 10;

	/*
	 * This value is a constant to see how slow we need to go before we can stop. Units are in ticks/sec
	 */
	const double MAX_STOPPING_VELOCITY = 5.;

	/**
	 * A number between 0 and .9 for the speed of the bot
	 */
	float m_max_speed;

	/**
	 * This is our endpoint to see how far we need to go
	 * Note: we need two so the robot can also drive backwards
	 */
	int m_right_target;
	int m_left_target;

	/**
	 * These values are the extra compensations that we add outside of the PID so that we ensure that we are actually driving straight
	 * If these weren't here, the robot would slowly drift to one side.
	 */
	float m_right_sag = 0.;
	float m_left_sag = 0.;

public:
	DriveDistance(float distance, float max_speed);
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // DriveDistance_H
