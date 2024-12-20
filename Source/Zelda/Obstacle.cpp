// Fill out your copyright notice in the Description page of Project Settings.


#include "Obstacle.h"
#include "PlayerCharacter.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AObstacle::AObstacle() : AActor{}
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CapsuleComp = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CapsuleComp"));
	SetRootComponent(CapsuleComp);

	ObstacleSprite = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("ObstacleSprite"));
	ObstacleSprite->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void AObstacle::BeginPlay()
{
	Super::BeginPlay();

	CapsuleComp->OnComponentBeginOverlap.AddDynamic(this, &AObstacle::OverlapBegin);

	AGameModeBase* GameMode = UGameplayStatics::GetGameMode(GetWorld());
	MyGameMode = Cast<AMyGameMode>(GameMode);
}

// Called every frame
void AObstacle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AObstacle::OverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool FromSweep, const FHitResult& SweepRsult)
{
	APlayerCharacter* Player = Cast<APlayerCharacter>(OtherActor);
	if (Player)
	{
		if (Player->CanMove)
		{
			if (!IsWall)
			{
				Player->CanMove = false;

				MyGameMode->ResetLevel(IsWall);
			}
		}
	}
}



