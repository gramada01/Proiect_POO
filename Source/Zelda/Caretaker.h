// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Memento.h"
#include "Caretaker.generated.h"

/**
 * 
 */
UCLASS()
class ZELDA_API UCaretaker : public UObject
{
	GENERATED_BODY()
public:
	void SaveMemento(UMemento* Memento);
	UMemento* LoadMemento();

	UPROPERTY()
	UMemento* SavedMemento;
};
