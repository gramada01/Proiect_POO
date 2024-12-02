// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "Components/CapsuleComponent.h"
#include "PaperSpriteComponent.h"
#include "PlayerCharacter.h"
#include "Engine/TimerHandle.h"
#include "Enemy.h"
#include "Maui.h"
#include "Kismet/GameplayStatics.h"
#include "Components/SceneComponent.h"

#include "Spawner.generated.h"

UCLASS()
class ZELDA_API ASpawner : public AActor
{
	GENERATED_BODY()
private:
	FTimerHandle SpawnCooldownTimer;
	int Overlapped = 0;
	

public:	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	UCapsuleComponent* CapsuleComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	UPaperSpriteComponent* SpawnerSprite;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int NumberOfEnemiesToSpawn = 3;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AEnemy> EnemyToSpawn;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	USceneComponent* EnemySpawnPosition;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	bool CanSpawn = false;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	bool IsSpawned = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SpawnCooldownDurationInSeconds = 10.0f;

	// Sets default values for this actor's properties
	ASpawner();

	// Called when the game starts or when spawned
	void BeginPlay() override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
	void OverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool FromSweep, const FHitResult& SweepRsult);

	void OnSpawnCooldownTimerTimeout();

};
