// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class ZELDA_API Observer
{
public:
	Observer();
	~Observer();

	virtual void OnEnemyKilled(AActor* KilledActor) = 0;
};
