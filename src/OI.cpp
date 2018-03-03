/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "OI.h"

#include <WPILib.h>

OI::OI(): leftJoystick(new Joystick(1)),
rightJoystick(new Joystick(2)),
armJoystick(new Joystick(3))
{
	// Process operator interface input here.
}
OI::~OI() {
	delete leftJoystick;
	delete rightJoystick;
	delete armJoystick;
}
Joystick * OI::getJoystickLeft() {
	return leftJoystick;
}
Joystick * OI::getJoystickRight() {
	return rightJoystick;
}
Joystick * OI::getJoystickArm() {
	return armJoystick;
}
