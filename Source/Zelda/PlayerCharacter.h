/// @file PlayerCharacter.h
/// @brief This file contains the declaration of the APlayerCharacter class which represents the player character in the game.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "PaperSpriteComponent.h"
#include "Components/SceneComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "Components/InputComponent.h"
#include "InputActionValue.h"
#include "GameFramework/Controller.h"
#include "Engine/TimerHandle.h"
#include "EmergencyRun.h"
#include "Projectile.h"
#include <iostream>
#include <UObject/ObjectMacros.h>
#include "Kismet/KismetMathLibrary.h"
#include "Subject.h"
#include "Templates/SharedPointer.h"
#include "GameFramework/Actor.h"
#include "PlayerCharacter.generated.h"

/// @class EnemyType
/// @brief A template class to check if an actor is of a specific enemy type.
template<typename T>
class EnemyType
{
public:
	/// @brief Checks if the actor is of the specified type.
	/// @param Actor The actor to check.
	/// @return True if the actor is of the specified type, false otherwise.
	static bool IsType(AActor* Actor)
	{
		return Actor && Actor->IsA<T>();
	}
};

/// @class APlayerCharacter
/// @brief A class that represents the player character in the game.
UCLASS()
class ZELDA_API APlayerCharacter : public APawn, public Observer
{
	GENERATED_BODY()

private:
	/// The emergency run instance.
	const EmergencyRun _runner;

	/// Timer handle for shoot cooldown.
	FTimerHandle ShootCooldownTimer;

	/// The rotation of the player character.
	FRotator rotation;

	/// The number of kills by the player.
	static inline int kills = 0;

	/// The score of the player.
	static inline int score = 0;

	/// The enemy subject associated with the player character.
	TSharedPtr<Subject> EnemySubject;

public:
	/// @brief Destructor.
	~APlayerCharacter();

	/// The health of the player character.
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Health = 2.0f;

	/// The damage dealt by the player character.
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Damage = 1.0f;

	/// The capsule component of the player character.
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	UCapsuleComponent* CapsuleComp;

	/// The spring arm component of the player character.
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	USpringArmComponent* SpringArm;

	/// The camera component of the player character.
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	UCameraComponent* Camera;

	/// The sprite component of the player character.
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	UPaperSpriteComponent* ArcherSprite;

	/// The bow parent component of the player character.
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	USceneComponent* BowParent;

	/// The bow sprite component of the player character.
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	UPaperSpriteComponent* BowSprite;

	/// The arrow spawn position component of the player character.
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	USceneComponent* ArrowSpawnPosition;

	/// The input mapping context.
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UInputMappingContext* InputMappingContext;

	/// The move action input.
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UInputAction* MoveAction;

	/// The shoot action input.
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UInputAction* ShootAction;

	/// The projectile actor to spawn.
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AProjectile> ProjectileActorToSpawn;

	/// The emergency run action input.
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UInputAction* EmergencyRunAction;

	/// The movement speed of the player character.
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MovementSpeed = 200.0f;

	/// The movement direction of the player character.
	UPROPERTY(BlueprintReadWrite)
	FVector2D MovementDirection;

	/// Indicates whether the player character can move.
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	bool CanMove = true;

	/// Indicates whether the player character can shoot.
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	bool CanShoot = true;

	/// The shoot cooldown duration in seconds.
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ShootCooldownDurationInSeconds = 0.3f;

	/// @brief Default constructor.
	APlayerCharacter();

	/// @brief Called when the game starts or when spawned.
	virtual void BeginPlay() override;

	/// @brief Called every frame.
	/// @param DeltaTime The time elapsed since the last frame.
	virtual void Tick(float DeltaTime) override;

	/// @brief Called to bind functionality to input.
	/// @param PlayerInputComponent The input component to bind functionality to.
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	/// @brief Called when the move action is triggered.
	/// @param Value The input action value.
	void MoveTriggered(const FInputActionValue& Value);

	/// @brief Called when the move action is completed.
	/// @param Value The input action value.
	void MoveCompleted(const FInputActionValue& Value);

	/// @brief Shoots a projectile.
	/// @param Value The input action value.
	void Shoot(const FInputActionValue& Value);

	/// @brief Performs an emergency run.
	/// @param Value The input action value.
	void Run(const FInputActionValue& Value);

	/// @brief Called when the shoot cooldown timer times out.
	void OnShootCooldownTimerTimeout();

	/// @brief Called when an overlap begins.
	/// @param OverlappedComponent The component that was overlapped.
	/// @param OtherActor The other actor involved in the overlap.
	/// @param OtherComp The other component involved in the overlap.
	/// @param OtherBodyIndex The body index of the other component.
	/// @param FromSweep Whether the overlap was from a sweep.
	/// @param SweepResult The result of the sweep.
	UFUNCTION()
	void OverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool FromSweep, const FHitResult& SweepResult);

	/// @brief Called when an enemy is killed.
	/// @param KilledActor The actor that was killed.
	virtual void OnEnemyKilled(AActor* KilledActor) override;

	/// @brief Gets the enemy subject.
	/// @return The enemy subject.
	TSharedPtr<Subject> GetEnemySubject();

	/// @brief Sets the enemy subject.
	/// @param InSubject The enemy subject to set.
	void SetEnemySubject(TSharedPtr<Subject> InSubject);
};