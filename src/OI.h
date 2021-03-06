// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#ifndef OI_H
#define OI_H

#include "WPILib.h"
#include "Custom/AxisTrigger.h"
#include "Custom/POVTrigger.h"
class OI {
private:
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	std::shared_ptr<XboxController> xBoxController;
	std::shared_ptr<Joystick> joystickR;
	std::shared_ptr<Joystick> joystickL;
	std::shared_ptr<JoystickButton> ballCollectorReverse;
	std::shared_ptr<JoystickButton> ballCollectorForward;
	std::shared_ptr<JoystickButton> magikarpetButton;
	std::shared_ptr<JoystickButton> feederButton;
	std::shared_ptr<JoystickButton> shooterButton;
	std::shared_ptr<JoystickButton> feederreverseButton;
	std::shared_ptr<JoystickButton> magikarpetreverseButton;
	std::shared_ptr<JoystickButton> climbButton;
	std::shared_ptr<AxisTrigger> gearerTrigger;
	std::shared_ptr<JoystickButton> gearerBumper;
	std::shared_ptr<POVTrigger> securerButton;
	std::shared_ptr<POVTrigger> unsecurerButton;

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
public:
	OI();

	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=PROTOTYPES

	std::shared_ptr<Joystick> getJoystickL();
	std::shared_ptr<Joystick> getJoystickR();
	std::shared_ptr<XboxController> getXBoxController();

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=PROTOTYPES
};

#endif
