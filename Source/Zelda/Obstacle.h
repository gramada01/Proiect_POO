/// @file Obstacle.h
/// @brief This file contains the declaration of the AObstacle class which represents an obstacle in the game.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/CapsuleComponent.h"
#include "PaperSpriteComponent.h"
#include "MyGameMode.h"
#include <iostream>
#include "Obstacle.generated.h"

/// @class AObstacle
/// @brief A class that represents an obstacle in the game.
UCLASS()
class ZELDA_API AObstacle : public AActor
{
	GENERATED_BODY()

public:
	/// The capsule component of the obstacle.
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	UCapsuleComponent* CapsuleComp;

	/// The sprite component of the obstacle.
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	UPaperSpriteComponent* ObstacleSprite;

	/// The game mode instance.
	AMyGameMode* MyGameMode;

	/// Indicates whether the obstacle is a wall.
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsWall = false;

	/// @brief Default constructor.
	AObstacle();

	/// @brief Called when the game starts or when spawned.
	virtual void BeginPlay() override;

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
};