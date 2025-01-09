// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"

#include "Engine/TimerHandle.h"
#include <iostream>
#include "MyHUD.h"

#include "MyGameMode.generated.h"

/**
 * 
 */
UCLASS()
class ZELDA_API AMyGameMode : public AGameModeBase
{
	GENERATED_BODY()
private:
	int PlayerKills;
	class AMyHUD* MyHUD;

public:
	AMyGameMode()
	{
		HUDClass = AMyHUD::StaticClass();
	}
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float LoseResetTime = 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float WinResetTime = 1.0f;

	FTimerHandle ResetGameTimer;

	
	void ResetLevel(bool IsWin);
	void OnResetGameTimerTimeOut();
	virtual void BeginPlay() override;
	void EndPlay(const EEndPlayReason::Type EndPlayReason);
	void SetKills(int k);

	void SaveGame();
	void LoadGame();
	
};
