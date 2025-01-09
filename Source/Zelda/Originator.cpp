// Fill out your copyright notice in the Description page of Project Settings.


#include "Originator.h"
#include "GameFramework/Pawn.h"

UMemento* UOriginator::CreateMemento(APawn* PlayerPawn, int PlayerKills)
{
	UMemento* Memento = NewObject<UMemento>();
	Memento->PlayerPosition = PlayerPawn->GetActorLocation();
	Memento->PlayerKills = PlayerKills;
	return Memento;
}

void UOriginator::RestoreFromMemento(UMemento* Memento, APawn* PlayerPawn, int& PlayerKills)
{
	PlayerPawn->SetActorLocation(Memento->PlayerPosition);
	PlayerKills = Memento->PlayerKills;
}