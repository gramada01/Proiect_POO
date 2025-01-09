// Fill out your copyright notice in the Description page of Project Settings.

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

UCLASS()
class ZELDA_API AEnemy : public AActor
{
	GENERATED_BODY()
private:
	bool chase = false;
	APlayerCharacter* playerToChase;
	TSharedPtr<Subject> EnemySubject;

public:
	virtual ~AEnemy();

	void SetEnemySubject(TSharedPtr<Subject> InSubject)
	{
		EnemySubject = InSubject;
	}

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Health = 2.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Damage = 1.0f;


	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	UCapsuleComponent* CapsuleComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	UPaperFlipbookComponent* EnemyFlipbook;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	UPaperSpriteComponent* EnemySprite;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float speed = 190.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DistanceToStop = 20.0f;

	// Sets default values for this actor's properties
	AEnemy();

	virtual void attack();

	void Spawn(APlayerCharacter* WhatToChase);

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void move(float DeltaTime);

	UFUNCTION()
	void OverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool FromSweep, const FHitResult& SweepRsult);
	void CheckforProjectileAndLauncher(AActor* OtherActor);


	void CheckIfDead();

};
