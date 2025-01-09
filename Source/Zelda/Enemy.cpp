/// @file Enemy.cpp
/// @brief This file contains the implementation of the AEnemy class methods.

#include "Enemy.h"

/// @brief Default constructor.
AEnemy::AEnemy() : AActor{}
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CapsuleComp = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CapsuleComp"));
	SetRootComponent(CapsuleComp);

	EnemySprite = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("EnemySprite"));
	EnemySprite->SetupAttachment(RootComponent);

	EnemyFlipbook = CreateDefaultSubobject<UPaperFlipbookComponent>(TEXT("EnemyFlipbook"));
	EnemyFlipbook->SetupAttachment(RootComponent);

	EnemySubject = MakeShared<Subject>();
}

/// @brief Destructor.
AEnemy::~AEnemy()
{
	UE_LOG(LogTemp, Warning, TEXT("AEnemy destructor called"));
}

/// @brief Attacks the player.
void AEnemy::attack()
{
	int lala = 21;
}

/// @brief Spawns the enemy and sets the player to chase.
/// @param WhatToChase The player character to chase.
void AEnemy::Spawn(APlayerCharacter* WhatToChase)
{
	playerToChase = WhatToChase;
	chase = true;
}

/// @brief Called when the game starts or when spawned.
void AEnemy::BeginPlay()
{
	Super::BeginPlay();

	CapsuleComp->OnComponentBeginOverlap.AddDynamic(this, &AEnemy::OverlapBegin);
}

/// @brief Called every frame.
/// @param DeltaTime The time elapsed since the last frame.
void AEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	CheckIfDead();
	move(DeltaTime);
}

/// @brief Moves the enemy.
/// @param DeltaTime The time elapsed since the last frame.
void AEnemy::move(float DeltaTime)
{
	if (chase)
	{
		FVector playerPosition = playerToChase->GetActorLocation();
		FVector mauiPosition = GetActorLocation();
		FVector MovementDirection;

		MovementDirection = playerPosition - mauiPosition;

		if (MovementDirection.Length() > DistanceToStop)
		{
			if (MovementDirection.Length() > 1.0f)
				MovementDirection.Normalize();

			FVector DistanceToMove = MovementDirection * speed * DeltaTime;
			FVector NewLocation = mauiPosition + DistanceToMove;
			SetActorLocation(NewLocation);
		}
	}
}

/// @brief Called when an overlap begins.
/// @param OverlappedComponent The component that was overlapped.
/// @param OtherActor The other actor involved in the overlap.
/// @param OtherComp The other component involved in the overlap.
/// @param OtherBodyIndex The body index of the other component.
/// @param FromSweep Whether the overlap was from a sweep.
/// @param SweepResult The result of the sweep.
void AEnemy::OverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool FromSweep, const FHitResult& SweepResult)
{
	try
	{
		CheckforProjectileAndLauncher(OtherActor);
	}
	catch (ErrActorType& err)
	{
		GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::White, FString(err.get_message().c_str()));
	}
	catch (ErrNoLauncher& err)
	{
		GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::White, FString(err.get_message().c_str()));
	}
	catch (ErrActorNotExist& err)
	{
		GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::White, FString(err.get_message().c_str()));
	}
}

/// @brief Checks if the other actor is a projectile or launcher.
/// @param OtherActor The other actor to check.
void AEnemy::CheckforProjectileAndLauncher(AActor* OtherActor)
{
	if (OtherActor->IsA(AProjectile::StaticClass()))
	{
		AProjectile* Projectile = Cast<AProjectile>(OtherActor);
		if (Projectile->WhoLaunchedMe == nullptr)
			throw ErrNoLauncher{ "Projectile does not have a launcher!!!ROGUE PROJECTILE!!!" };

		if (!Projectile->WhoLaunchedMe->IsA(APlayerCharacter::StaticClass()))
			throw ErrActorType{ "The Actor Who launched this projectile is not the player character!!!" };

		APlayerCharacter* Player = Cast<APlayerCharacter>(Projectile->WhoLaunchedMe);
		if (!(Projectile && Player))
			throw ErrActorNotExist{ "Either the projectile or the player are NULL!!!" };

		Health = Health - Player->Damage;
		Projectile->Destroy();
	}
}

/// @brief Checks if the enemy is dead.
void AEnemy::CheckIfDead()
{
	if (Health <= 0.0f)
	{
		if (EnemySubject)
		{
			EnemySubject->Notify(this);
		}

		Destroy();
	}
}


