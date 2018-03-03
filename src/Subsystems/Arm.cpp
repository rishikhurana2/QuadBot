/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "Arm.h"
#include "../RobotMap.h"
#include "../Commands/ArmMove.h"

Arm::Arm() : Subsystem("Arm"),
armTalon(new TalonSRX(3))
{}

Arm::~Arm()
{
	delete armTalon;
	armTalon = nullptr;
}

void Arm::InitDefaultCommand() {
	SetDefaultCommand(new ArmMove());
	// Set the default command for a subsystem here.
	// SetDefaultCommand(new MySpecialCommand());
}
void Arm::moveArm(double armValue) {
	armTalon->Set(ControlMode::PercentOutput, armValue);
}
// Put methods for controlling this subsystem
// here. Call these from Commands.
