/// @file MyHUD.h
/// @brief This file contains the declaration of the AMyHUD class which manages the HUD display.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "MyHUD.generated.h"

/// @class AMyHUD
/// @brief A class that manages the HUD display.
UCLASS()
class ZELDA_API AMyHUD : public AHUD
{
	GENERATED_BODY()
private:
	/// The number of player kills.
	int PlayerKills;

public:
	/// @brief Draws the HUD.
	virtual void DrawHUD() override;

	/// @brief Sets the number of player kills.
	/// @param Kills The number of kills to set.
	void SetPlayerKills(int Kills);
};