/// @file Originator.h
/// @brief This file contains the declaration of the UOriginator class which is responsible for creating and restoring mementos.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Memento.h"
#include "Originator.generated.h"

/// @class UOriginator
/// @brief A class that is responsible for creating and restoring mementos.
UCLASS()
class ZELDA_API UOriginator : public UObject
{
	GENERATED_BODY()
public:
	/// @brief Creates a memento of the current game state.
	/// @param PlayerPawn The player pawn whose state is to be saved.
	/// @param PlayerKills The number of player kills to be saved.
	/// @return A memento containing the saved state.
	UMemento* CreateMemento(APawn* PlayerPawn, int32 PlayerKills);

	/// @brief Restores the game state from a memento.
	/// @param Memento The memento containing the saved state.
	/// @param PlayerPawn The player pawn whose state is to be restored.
	/// @param PlayerKills The number of player kills to be restored.
	void RestoreFromMemento(UMemento* Memento, APawn* PlayerPawn, int32& PlayerKills);
};