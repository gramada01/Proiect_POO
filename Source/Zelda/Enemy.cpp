// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy.h"

// Sets default values
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

AEnemy::~AEnemy()
{
	UE_LOG(LogTemp, Warning, TEXT("AEnemy destructor called"));
}

void AEnemy::attack()
{
	int lala = 21;
}


void AEnemy::Spawn(APlayerCharacter* WhatToChase)
{
	playerToChase = WhatToChase;
	chase = true;
}

// Called when the game starts or when spawned
void AEnemy::BeginPlay()
{
	Super::BeginPlay();
	
	CapsuleComp->OnComponentBeginOverlap.AddDynamic(this, &AEnemy::OverlapBegin);
}

// Called every frame
void AEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	CheckIfDead();
	move(DeltaTime);
}

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
			FVector NewLocation = mauiPosition + DistanceToMove;//FVector(DistanceToMove.X, 0.0f, DistanceToMove.Y);
			SetActorLocation(NewLocation);
		}
	}
}

void AEnemy::OverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool FromSweep, const FHitResult& SweepRsult)
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

void AEnemy::CheckforProjectileAndLauncher(AActor* OtherActor)
{
	if (OtherActor->IsA(AProjectile::StaticClass()))
	{
		/*	throw ErrActorType{"The colission was not with a projectile!!!"};*/

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

