/// @file Spawner.h
/// @brief This file contains the declaration of the ASpawner class which is responsible for spawning enemies in the game.

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

/// @class ASpawner
/// @brief A class that is responsible for spawning enemies in the game.
UCLASS()
class ZELDA_API ASpawner : public AActor
{
	GENERATED_BODY()
private:
	/// Timer handle for spawn cooldown.
	FTimerHandle SpawnCooldownTimer;

	/// Number of times the spawner has been overlapped.
	int Overlapped = 0;

public:
	/// The capsule component of the spawner.
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	UCapsuleComponent* CapsuleComp;

	/// The sprite component of the spawner.
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	UPaperSpriteComponent* SpawnerSprite;

	/// The number of enemies to spawn.
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int NumberOfEnemiesToSpawn = 3;

	/// The enemy class to spawn.
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AEnemy> EnemyToSpawn;

	/// The enemy spawn position component.
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	USceneComponent* EnemySpawnPosition;

	/// Indicates whether the spawner can spawn enemies.
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	bool CanSpawn = false;

	/// Indicates whether the spawner has spawned enemies.
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	bool IsSpawned = false;

	/// The spawn cooldown duration in seconds.
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SpawnCooldownDurationInSeconds = 10.0f;

	/// @brief Default constructor.
	ASpawner();

	/// @brief Called when the game starts or when spawned.
	void BeginPlay() override;

	/// @brief Called every frame.
	/// @param DeltaTime The time elapsed since the last frame.
	virtual void Tick(float DeltaTime) override;

	/// @brief Called when an overlap begins.
	/// @param OverlappedComponent The component that was overlapped.
	/// @param OtherActor The other actor involved in the overlap.
	/// @param OtherComp The other component involved in the overlap.
	/// @param OtherBodyIndex The body index of the other component.
	/// @param FromSweep Whether the overlap was from a sweep.
	/// @param SweepResult The result of the sweep.
	UFUNCTION()
	void OverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool FromSweep, const FHitResult& SweepResult);

	/// @brief Called when the spawn cooldown timer times out.
	void OnSpawnCooldownTimerTimeout();
};