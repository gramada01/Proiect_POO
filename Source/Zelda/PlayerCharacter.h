// Fill out your copyright notice in the Description page of Project Settings.

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



template<typename T>
class EnemyType
{
public:
	static bool IsType(AActor* Actor)
	{
		return Actor && Actor->IsA<T>();
	}
};

UCLASS()
class ZELDA_API APlayerCharacter : public APawn, public Observer
{
	GENERATED_BODY()

private:
	const EmergencyRun _runner;
	FTimerHandle ShootCooldownTimer;
	FRotator rotation;
	static inline int kills = 0;
	static inline int score = 0;
	TSharedPtr<Subject> EnemySubject;

public:
	~APlayerCharacter();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Health = 2.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Damage = 1.0f;


	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	UCapsuleComponent* CapsuleComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	USpringArmComponent* SpringArm;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	UCameraComponent* Camera;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	UPaperSpriteComponent* ArcherSprite;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	USceneComponent* BowParent;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	UPaperSpriteComponent* BowSprite;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	USceneComponent* ArrowSpawnPosition;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UInputMappingContext* InputMappingContext;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UInputAction* MoveAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UInputAction* ShootAction;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AProjectile> ProjectileActorToSpawn;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UInputAction* EmergencyRunAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MovementSpeed = 200.0f;

	UPROPERTY(BlueprintReadWrite)
	FVector2D MovementDirection;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	bool CanMove = true;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	bool CanShoot = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ShootCooldownDurationInSeconds = 0.3f;

	// Sets default values for this pawn's properties
	APlayerCharacter();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void MoveTriggered(const FInputActionValue& Value);
	void MoveCompleted(const FInputActionValue& Value);

	void Shoot(const FInputActionValue& Value);
	void Run(const FInputActionValue& Value);

	void OnShootCooldownTimerTimeout();

	UFUNCTION()
	void OverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool FromSweep, const FHitResult& SweepRsult);

	virtual void OnEnemyKilled(AActor* KilledActor) override;

	TSharedPtr<Subject> GetEnemySubject();

	void SetEnemySubject(TSharedPtr<Subject> InSubject);
};
