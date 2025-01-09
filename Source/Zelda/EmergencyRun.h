/// @file EmergencyRun.h
/// @brief This file contains the declaration of the EmergencyRun class which handles emergency running logic.

#pragma once

#include "CoreMinimal.h"
#include <GameFramework/Pawn.h>
#include <iostream>

/// @class EmergencyRun
/// @brief A class that handles the logic for emergency running.
class ZELDA_API EmergencyRun
{
private:
	/// The speed of the emergency run.
	int _speed;

	/// The pawn that is running.
	mutable APawn* _pawn;

	/// The current step of the run.
	mutable int _currentStep = 0;

	/// The total number of steps for the run.
	int _steps;

public:
	/// @brief Default constructor.
	EmergencyRun() : EmergencyRun(nullptr, 0, 0) {};

	/// @brief Parameterized constructor.
	/// @param pawn The pawn that is running.
	/// @param speed The speed of the run.
	/// @param steps The total number of steps for the run.
	EmergencyRun(APawn* pawn, int speed, int steps) : _pawn{ pawn }, _speed{ speed }, _steps{ steps } {};

	/// @brief Performs a step in the emergency run.
	/// @param deltaTime The time elapsed since the last step.
	void doStep(float deltaTime) const;

	/// @brief Gets the speed of the run.
	/// @return The speed of the run.
	int getSpeed() const { return _speed; };

	/// @brief Starts the emergency run.
	void startRunning() const { _currentStep = _steps; }

	/// @brief Checks if the run is currently in progress.
	/// @return True if the run is in progress, false otherwise.
	bool isRunning() const { return _currentStep != 0; };
};