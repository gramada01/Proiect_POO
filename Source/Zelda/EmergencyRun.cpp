/// @file EmergencyRun.cpp
/// @brief This file contains the implementation of the EmergencyRun class methods.

#include "EmergencyRun.h"
#include <Math/MathFwd.h>
#include <stdlib.h>

/// @brief Performs a step in the emergency run.
/// Chooses a random direction and speed amplifier for the step and then does the step.
/// @param deltaTime The time elapsed since the last step.
void EmergencyRun::doStep(float deltaTime) const
{
	if (_currentStep == 0)
		return;

	FVector2D movementDirection;

	srand(time(NULL));

	int plusOrMinus = rand() % 2;
	if (plusOrMinus == 0)
		movementDirection.X = rand() % 3;
	else
		movementDirection.X = -rand() % 3;

	plusOrMinus = rand() % 2;
	if (plusOrMinus == 0)
		movementDirection.Y = rand() % 3;
	else
		movementDirection.Y = -rand() % 3;

	auto distanceToMove = movementDirection * _speed * deltaTime;
	auto currentLocation = _pawn->GetActorLocation();
	auto newLocation = currentLocation + FVector(distanceToMove.X, 0.0f, distanceToMove.Y);
	_pawn->SetActorLocation(newLocation);
	--_currentStep;
}