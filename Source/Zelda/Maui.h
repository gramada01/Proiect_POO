/// @file Maui.h
/// @brief This file contains the declaration of the AMaui class which represents a Maui enemy in the game.

#pragma once

#include "CoreMinimal.h"
#include "Enemy.h"
#include "PlayerCharacter.h"
#include "EmergencyRun.h"
#include "Maui.generated.h"

/// @class AMaui
/// @brief A class that represents a Maui enemy in the game.
UCLASS()
class ZELDA_API AMaui : public AEnemy
{
	GENERATED_BODY()

public:
	/// @brief Default constructor.
	AMaui();

	/// @brief Attacks the player.
	void attack() override;
};