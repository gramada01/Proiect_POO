/// @file Enemy.h
/// @brief This file contains the declaration of the AEnemy class which represents an enemy actor in the game.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "Components/CapsuleComponent.h"
#include "PaperSpriteComponent.h"
#include "PaperFlipbookComponent.h"
#include "PlayerCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "Errors.h"
#include "Templates/SharedPointer.h"

#include <cstdlib>

#include "Enemy.generated.h"

/// @class AEnemy
/// @brief A class that represents an enemy actor in the game.
UCLASS()
class ZELDA_API AEnemy : public AActor
{
	GENERATED_BODY()
private:
	/// Indicates whether the enemy is chasing the player.
	bool chase = false;

	/// The player character that the enemy is chasing.
	APlayerCharacter* playerToChase;

	/// The subject associated with the enemy.
	TSharedPtr<Subject> EnemySubject;

public:
	/// @brief Destructor.
	virtual ~AEnemy();

	/// @brief Sets the enemy subject.
	/// @param InSubject The subject to be set.
	void SetEnemySubject(TSharedPtr<Subject> InSubject)
	{
		EnemySubject = InSubject;
	}

	/// The health of the enemy.
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Health = 2.0f;

	/// The damage dealt by the enemy.
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Damage = 1.0f;

	/// The capsule component of the enemy.
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	UCapsuleComponent* CapsuleComp;

	/// The flipbook component of the enemy.
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	UPaperFlipbookComponent* EnemyFlipbook;

	/// The sprite component of the enemy.
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	UPaperSpriteComponent* EnemySprite;

	/// The speed of the enemy.
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float speed = 190.0f;

	/// The distance at which the enemy stops chasing the player.
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DistanceToStop = 20.0f;

	/// @brief Default constructor.
	AEnemy();

	/// @brief Attacks the player.
	virtual void attack();

	/// @brief Spawns the enemy and sets the player to chase.
	/// @param WhatToChase The player character to chase.
	void Spawn(APlayerCharacter* WhatToChase);

	/// @brief Called when the game starts or when spawned.
	virtual void BeginPlay() override;

	/// @brief Called every frame.
	/// @param DeltaTime The time elapsed since the last frame.
	virtual void Tick(float DeltaTime) override;

	/// @brief Moves the enemy.
	/// @param DeltaTime The time elapsed since the last frame.
	virtual void move(float DeltaTime);

	/// @brief Called when an overlap begins.
	/// @param OverlappedComponent The component that was overlapped.
	/// @param OtherActor The other actor involved in the overlap.
	/// @param OtherComp The other component involved in the overlap.
	/// @param OtherBodyIndex The body index of the other component.
	/// @param FromSweep Whether the overlap was from a sweep.
	/// @param SweepResult The result of the sweep.
	UFUNCTION()
	void OverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool FromSweep, const FHitResult& SweepResult);

	/// @brief Checks if the other actor is a projectile or launcher.
	/// @param OtherActor The other actor to check.
	void CheckforProjectileAndLauncher(AActor* OtherActor);

	/// @brief Checks if the enemy is dead.
	void CheckIfDead();
};