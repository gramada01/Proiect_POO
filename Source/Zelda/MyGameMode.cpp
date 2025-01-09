// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameMode.h"
#include "Kismet/GameplayStatics.h"
#include "Originator.h"
#include "Caretaker.h"

void AMyGameMode::ResetLevel(bool IsWin)
{
	float ResetTime = LoseResetTime;
	if (!IsWin)
	{
		UE_LOG(LogTemp, Warning, TEXT("Resetting level"));
		GetWorldTimerManager().SetTimer(ResetGameTimer, this, &AMyGameMode::OnResetGameTimerTimeOut, 1.0f, false, ResetTime);
	}
	
}

void AMyGameMode::OnResetGameTimerTimeOut()
{
	UE_LOG(LogTemp, Warning, TEXT("Resetting level"));
	UGameplayStatics::OpenLevel(GetWorld(), FName("MainLevel"));
}

void AMyGameMode::BeginPlay()
{
	Super::BeginPlay();
	LoadGame();

	MyHUD = Cast<AMyHUD>(UGameplayStatics::GetPlayerController(this, 0)->GetHUD());
	PlayerKills = 0;
}

void AMyGameMode::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	SaveGame();
	Super::EndPlay(EndPlayReason);
}

void AMyGameMode::SetKills(int k)
{
	PlayerKills = k;
	if (MyHUD)
	{
		MyHUD->SetPlayerKills(PlayerKills);
	}
}

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