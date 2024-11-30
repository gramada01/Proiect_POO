// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemy.h"

#include "PlayerCharacter.h"
#include "EmergencyRun.h"

#include "Maui.generated.h"


UCLASS()
class ZELDA_API AMaui : public AEnemy
{
	GENERATED_BODY()
private:
	bool chase = false;
	APlayerCharacter* playerToChase;
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float speed = 190.0f;

	// Sets default values for this actor's properties
	AMaui();

	virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
	void OverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool FromSweep, const FHitResult& SweepRsult);
};
