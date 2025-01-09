/// @file MyGameMode.cpp
/// @brief This file contains the implementation of the AMyGameMode class methods.

#include "MyGameMode.h"
#include "Kismet/GameplayStatics.h"
#include "Originator.h"
#include "Caretaker.h"

/// @brief Resets the level.
/// @param IsWin Indicates whether the reset is due to a win.
void AMyGameMode::ResetLevel(bool IsWin)
{
	float ResetTime = LoseResetTime;
	if (!IsWin)
	{
		UE_LOG(LogTemp, Warning, TEXT("Resetting level"));
		GetWorldTimerManager().SetTimer(ResetGameTimer, this, &AMyGameMode::OnResetGameTimerTimeOut, 1.0f, false, ResetTime);
	}
}

/// @brief Called when the reset game timer times out.
void AMyGameMode::OnResetGameTimerTimeOut()
{
	UE_LOG(LogTemp, Warning, TEXT("Resetting level"));
	UGameplayStatics::OpenLevel(GetWorld(), FName("MainLevel"));
}

/// @brief Called when the game starts.
void AMyGameMode::BeginPlay()
{
	Super::BeginPlay();
	LoadGame();

	MyHUD = Cast<AMyHUD>(UGameplayStatics::GetPlayerController(this, 0)->GetHUD());
	PlayerKills = 0;
}

/// @brief Called when the game ends.
/// @param EndPlayReason The reason the game ended.
void AMyGameMode::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	SaveGame();
	Super::EndPlay(EndPlayReason);
}

/// @brief Sets the number of player kills.
/// @param k The number of kills to set.
void AMyGameMode::SetKills(int k)
{
	PlayerKills = k;
	if (MyHUD)
	{
		MyHUD->SetPlayerKills(PlayerKills);
	}
}

/// @brief Saves the game state.
/// This method creates a memento of the current game state and saves it using the caretaker.
void AMyGameMode::SaveGame()
{
	APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(this, 0);
	if (PlayerPawn)
	{
		UOriginator* Originator = NewObject<UOriginator>();
		UCaretaker* Caretaker = NewObject<UCaretaker>();
		UMemento* Memento = Originator->CreateMemento(PlayerPawn, PlayerKills);
		Caretaker->SaveMemento(Memento);
	}
}

/// @brief Loads the game state.
/// This method loads the saved game state from the caretaker and restores it using the originator.
void AMyGameMode::LoadGame()
{
	APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(this, 0);
	if (PlayerPawn)
	{
		UOriginator* Originator = NewObject<UOriginator>();
		UCaretaker* Caretaker = NewObject<UCaretaker>();
		UMemento* Memento = Caretaker->LoadMemento();
		if (Memento)
		{
			Originator->RestoreFromMemento(Memento, PlayerPawn, PlayerKills);
		}
	}
}