// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Memento.h"

#include "Originator.generated.h"

/**
 * 
 */
UCLASS()
class ZELDA_API UOriginator : public UObject
{
	GENERATED_BODY()
public:
	UMemento* CreateMemento(APawn* PlayerPawn, int32 PlayerKills);
	void RestoreFromMemento(UMemento* Memento, APawn* PlayerPawn, int32& PlayerKills);
};
