/// @file Observer.h
/// @brief This file contains the declaration of the Observer class which defines an interface for observing enemy kills.

#pragma once

#include "CoreMinimal.h"

/// @class Observer
/// @brief A class that defines an interface for observing enemy kills.
class ZELDA_API Observer
{
public:
	/// @brief Default constructor.
	Observer();

	/// @brief Destructor.
	virtual ~Observer();

	/// @brief Called when an enemy is killed.
	/// @param KilledActor The actor that was killed.
	virtual void OnEnemyKilled(AActor* KilledActor) = 0;
};