/// @file Obstacle.cpp
/// @brief This file contains the implementation of the AObstacle class methods.

#include "Obstacle.h"
#include "PlayerCharacter.h"
#include "Kismet/GameplayStatics.h"

/// @brief Default constructor.
AObstacle::AObstacle() : AActor{}
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CapsuleComp = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CapsuleComp"));
	SetRootComponent(CapsuleComp);

	ObstacleSprite = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("ObstacleSprite"));
	ObstacleSprite->SetupAttachment(RootComponent);
}

/// @brief Called when the game starts or when spawned.
void AObstacle::BeginPlay()
{
	Super::BeginPlay();

	CapsuleComp->OnComponentBeginOverlap.AddDynamic(this, &AObstacle::OverlapBegin);

	AGameModeBase* GameMode = UGameplayStatics::GetGameMode(GetWorld());
	MyGameMode = Cast<AMyGameMode>(GameMode);
}

/// @brief Called every frame.
/// @param DeltaTime The time elapsed since the last frame.
void AObstacle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

/// @brief Called when an overlap begins.
/// @param OverlappedComponent The component that was overlapped.
/// @param OtherActor The other actor involved in the overlap.
/// @param OtherComp The other component involved in the overlap.
/// @param OtherBodyIndex The body index of the other component.
/// @param FromSweep Whether the overlap was from a sweep.
/// @param SweepResult The result of the sweep.
void AObstacle::OverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool FromSweep, const FHitResult& SweepResult)
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