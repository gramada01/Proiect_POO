// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "PaperSpriteComponent.h"
#include "Components/CapsuleComponent.h"
#include "Engine/TimerHandle.h"
#include "Components/SceneComponent.h"

#include "Projectile.generated.h"

UCLASS()
class ZELDA_API AProjectile : public AActor
{
	GENERATED_BODY()

private:
	FTimerHandle DeleteTimer;
	
public:	
	/*UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	USceneComponent* ProjectileParent;*/

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	UCapsuleComponent* CapsuleComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	UPaperSpriteComponent* ProjectileSprite;

	UPROPERTY(BlueprintReadWrite)
	FVector2D MovementDirection;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MovementSpeed = 300.0f;

	UPROPERTY(BlueprintReadWrite)
	FVector Rotation;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	bool IsLaunched = false;

	// Sets default values for this actor's properties
	AProjectile();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void Launch(FVector2D Direction, float Speed);

	void OnDeleteTimerTimeout();

};
