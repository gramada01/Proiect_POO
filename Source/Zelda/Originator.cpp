/// @file Originator.cpp
/// @brief This file contains the implementation of the UOriginator class methods.

#include "Originator.h"
#include "GameFramework/Pawn.h"

/// @brief Creates a memento of the current game state.
/// @param PlayerPawn The player pawn whose state is to be saved.
/// @param PlayerKills The number of player kills to be saved.
/// @return A memento containing the saved state.
UMemento* UOriginator::CreateMemento(APawn* PlayerPawn, int PlayerKills)
{
	UMemento* Memento = NewObject<UMemento>();
	Memento->PlayerPosition = PlayerPawn->GetActorLocation();
	Memento->PlayerKills = PlayerKills;
	return Memento;
}

/// @brief Restores the game state from a memento.
/// @param Memento The memento containing the saved state.
/// @param PlayerPawn The player pawn whose state is to be restored.
/// @param PlayerKills The number of player kills to be restored.
void UOriginator::RestoreFromMemento(UMemento* Memento, APawn* PlayerPawn, int& PlayerKills)
{
	PlayerPawn->SetActorLocation(Memento->PlayerPosition);
	PlayerKills = Memento->PlayerKills;
}