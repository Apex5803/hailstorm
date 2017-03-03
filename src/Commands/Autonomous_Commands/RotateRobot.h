#ifndef RotateRobot_H
#define RotateRobot_H

#include "WPILib.h"

class RotateRobot : public Command
{
private:
	/**
	 * This is the multiplier to determine how hard we should be driving.
	 * This is the P term in our PID
	 * For the love of god and all that is holy, keep this small. *Eric glares seriously*
	 */
	const float KP = .08;

	/**
	 * This value is how close you want to get to your end goal before giving up
	 */
	const int ERROR_TICKS = 10;

	/**
	 * This is the distance that the two wheels need to go
	 * we need two of them because one is going to be a negative distance
	 */
	int m_right_target;
	int m_left_target;

	/**
	 * A value from 0 -> 1 on how fast you want the robot to turn
	 */
	float m_max_speed;

public:
	/**
	 * Positive degree values go right, negative go left
	 */
	RotateRobot(float degrees, float max_speed);
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // RotateRobot_H
