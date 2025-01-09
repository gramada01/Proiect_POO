/// @file Memento.h
/// @brief This file contains the declaration of the UMemento class which is used to store the state of the game.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Memento.generated.h"

/// @class UMemento
/// @brief A class that represents a memento used to store the state of the game.
UCLASS()
class ZELDA_API UMemento : public UObject
{
	GENERATED_BODY()
public:
	/// The position of the player.
	UPROPERTY()
	FVector PlayerPosition;

	/// The number of kills by the player.
	UPROPERTY()
	int PlayerKills;
};