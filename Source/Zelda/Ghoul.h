// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemy.h"
#include "Ghoul.generated.h"


UCLASS()
class ZELDA_API AGhoul : public AEnemy
{
	GENERATED_BODY()
public:
	AGhoul();

	void attack() override;
};
