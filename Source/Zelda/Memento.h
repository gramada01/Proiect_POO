// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Memento.generated.h"

/**
 * 
 */
UCLASS()
class ZELDA_API UMemento : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY()
	FVector PlayerPosition;

	UPROPERTY()
	int PlayerKills;
};
