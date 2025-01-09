/// @file Spawner.cpp
/// @brief This file contains the implementation of the ASpawner class methods.

#include "Spawner.h"

/// @brief Default constructor.
ASpawner::ASpawner() : AActor{}
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CapsuleComp = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CapsuleComp"));
	SetRootComponent(CapsuleComp);

	SpawnerSprite = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("SpawnerSprite"));
	SpawnerSprite->SetupAttachment(RootComponent);

	EnemySpawnPosition = CreateDefaultSubobject<USceneComponent>(TEXT("EnemySpawnPosition"));
	EnemySpawnPosition->SetupAttachment(RootComponent);
}

/// @brief Called when the game starts or when spawned.
void ASpawner::BeginPlay()
{
	Super::BeginPlay();

	CapsuleComp->OnComponentBeginOverlap.AddDynamic(this, &ASpawner::OverlapBegin);
}

/// @brief Called every frame.
/// @param DeltaTime The time elapsed since the last frame.
void ASpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (Overlapped == 1)
	{
		Overlapped = -1;
		CanSpawn = true;
	}

	if (CanSpawn && NumberOfEnemiesToSpawn > 0)
	{
		CanSpawn = false;

		AEnemy* Enemy = GetWorld()->SpawnActor<AEnemy>(EnemyToSpawn, GetActorLocation(), FRotator::ZeroRotator);
		check(Enemy);

		AActor* PlayerActor = UGameplayStatics::GetActorOfClass(GetWorld(), APlayerCharacter::StaticClass());
		APlayerCharacter* player = Cast<APlayerCharacter>(PlayerActor);
		Enemy->SetEnemySubject(player->GetEnemySubject());
		Enemy->Spawn(player);

		--NumberOfEnemiesToSpawn;
		GetWorldTimerManager().SetTimer(SpawnCooldownTimer, this, &ASpawner::OnSpawnCooldownTimerTimeout, 1.0f, false, SpawnCooldownDurationInSeconds);
	}
}

/// @brief Called when an overlap begins.
/// @param OverlappedComponent The component that was overlapped.
/// @param OtherActor The other actor involved in the overlap.
/// @param OtherComp The other component involved in the overlap.
/// @param OtherBodyIndex The body index of the other component.
/// @param FromSweep Whether the overlap was from a sweep.
/// @param SweepResult The result of the sweep.
void ASpawner::OverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool FromSweep, const FHitResult& SweepResult)
{
	if (OtherActor->IsA(APlayerCharacter::StaticClass()))
	{
		APlayerCharacter* Player = Cast<APlayerCharacter>(OtherActor);
		if (Player)
		{
			if (Overlapped == 0)
				Overlapped = 1;
		}
	}
}

/// @brief Called when the spawn cooldown timer times out.
void ASpawner::OnSpawnCooldownTimerTimeout()
{
	if (NumberOfEnemiesToSpawn > 0)
		CanSpawn = true;
}