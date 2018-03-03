/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "DriveTrain.h"
#include "../RobotMap.h"
#include "../Commands/TankDrive.h"

DriveTrain::DriveTrain() : Subsystem("DriveTrain"),
talonLeft(new TalonSRX(1)),
talonRight(new TalonSRX(5)){

}
DriveTrain::~DriveTrain() {
	delete talonLeft;
	delete talonRight;
}
void DriveTrain::InitDefaultCommand() {
	SetDefaultCommand(new TankDrive());
}
void DriveTrain::tankDrive(double leftVal, double rightVal) {
	talonLeft->Set(ControlMode::PercentOutput, leftVal);
	talonRight->Set(ControlMode::PercentOutput, rightVal);
}

// Put methods for controlling this subsystem
// here. Call these from Commands.
