/// @file Ghoul.h
/// @brief This file contains the declaration of the AGhoul class which represents a ghoul enemy in the game.

#pragma once

#include "CoreMinimal.h"
#include "Enemy.h"
#include "Ghoul.generated.h"

/// @class AGhoul
/// @brief A class that represents a ghoul enemy in the game.
UCLASS()
class ZELDA_API AGhoul : public AEnemy
{
	GENERATED_BODY()
public:
	/// @brief Default constructor.
	AGhoul();

	/// @brief Attacks the player.
	void attack() override;
};