/// @file MyGameMode.h
/// @brief This file contains the declaration of the AMyGameMode class which manages the game mode logic.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Engine/TimerHandle.h"
#include <iostream>
#include "MyHUD.h"
#include "MyGameMode.generated.h"

/// @class AMyGameMode
/// @brief A class that manages the game mode logic.
UCLASS()
class ZELDA_API AMyGameMode : public AGameModeBase
{
	GENERATED_BODY()
private:
	/// The number of player kills.
	int PlayerKills;

	/// The HUD instance.
	class AMyHUD* MyHUD;

public:
	/// @brief Default constructor.
	AMyGameMode()
	{
		HUDClass = AMyHUD::StaticClass();
	}

	/// The time to reset the game after losing.
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float LoseResetTime = 1.0f;

	/// The time to reset the game after winning.
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float WinResetTime = 1.0f;

	/// Timer handle for resetting the game.
	FTimerHandle ResetGameTimer;

	/// @brief Resets the level.
	/// @param IsWin Indicates whether the reset is due to a win.
	void ResetLevel(bool IsWin);

	/// @brief Called when the reset game timer times out.
	void OnResetGameTimerTimeOut();

	/// @brief Called when the game starts.
	virtual void BeginPlay() override;

	/// @brief Called when the game ends.
	/// @param EndPlayReason The reason the game ended.
	void EndPlay(const EEndPlayReason::Type EndPlayReason);

	/// @brief Sets the number of player kills.
	/// @param k The number of kills to set.
	void SetKills(int k);

	/// @brief Saves the game state.
	void SaveGame();

	/// @brief Loads the game state.
	void LoadGame();
};