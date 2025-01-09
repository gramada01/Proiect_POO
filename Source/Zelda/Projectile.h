/// @file Projectile.h
/// @brief This file contains the declaration of the AProjectile class which represents a projectile in the game.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PaperSpriteComponent.h"
#include "Components/CapsuleComponent.h"
#include "Engine/TimerHandle.h"
#include "Components/SceneComponent.h"
#include "Projectile.generated.h"

/// @class AProjectile
/// @brief A class that represents a projectile in the game.
UCLASS()
class ZELDA_API AProjectile : public AActor
{
	GENERATED_BODY()

private:
	/// Timer handle for deleting the projectile.
	FTimerHandle DeleteTimer;

public:
	/// The actor who launched the projectile.
	AActor* WhoLaunchedMe = nullptr;

	/// The capsule component of the projectile.
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	UCapsuleComponent* CapsuleComp;

	/// The sprite component of the projectile.
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	UPaperSpriteComponent* ProjectileSprite;

	/// The movement direction of the projectile.
	UPROPERTY(BlueprintReadWrite)
	FVector2D MovementDirection;

	/// The movement speed of the projectile.
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MovementSpeed = 300.0f;

	/// The rotation of the projectile.
	UPROPERTY(BlueprintReadWrite)
	FVector Rotation;

	/// Indicates whether the projectile is launched.
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	bool IsLaunched = false;

	/// @brief Default constructor.
	AProjectile();

	/// @brief Constructor with launcher.
	/// @param Who The actor who launched the projectile.
	AProjectile(AActor* Who) { WhoLaunchedMe = Who; }

	/// @brief Called when the game starts or when spawned.
	virtual void BeginPlay() override;

	/// @brief Called every frame.
	/// @param DeltaTime The time elapsed since the last frame.
	virtual void Tick(float DeltaTime) override;

	/// @brief Launches the projectile.
	/// @param Direction The direction to launch the projectile.
	/// @param Speed The speed to launch the projectile.
	/// @param Launcher The actor who launched the projectile.
	void Launch(FVector2D Direction, float Speed, AActor* Launcher);

	/// @brief Called when the delete timer times out.
	void OnDeleteTimerTimeout();

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