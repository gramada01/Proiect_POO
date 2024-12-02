// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemy.h"

#include "PlayerCharacter.h"
#include "EmergencyRun.h"

#include "Maui.generated.h"


UCLASS()
class ZELDA_API AMaui : public AEnemy
{
	GENERATED_BODY()

public:
	
	AMaui();

	void attack() override;
	
};
