/// @file Projectile.cpp
/// @brief This file contains the implementation of the AProjectile class methods.

#include "Projectile.h"
#include "Kismet/KismetMathLibrary.h"

/// @brief Default constructor.
AProjectile::AProjectile() : AActor{}
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CapsuleComp = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CapsuleComp"));
	SetRootComponent(CapsuleComp);

	ProjectileSprite = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("ProjectileSprite"));
	ProjectileSprite->SetupAttachment(RootComponent);
}

/// @brief Called when the game starts or when spawned.
void AProjectile::BeginPlay()
{
	Super::BeginPlay();

	CapsuleComp->OnComponentBeginOverlap.AddDynamic(this, &AProjectile::OverlapBegin);
}

/// @brief Called every frame.
/// @param DeltaTime The time elapsed since the last frame.
void AProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (IsLaunched)
	{
		if (MovementDirection.Length() > 1.0f)
		{
			MovementDirection.Normalize();
		}

		FVector2D DistanceToMove = MovementDirection * MovementSpeed * DeltaTime;
		FVector CurrentLocation = GetActorLocation();
		FVector NewLocation = CurrentLocation + FVector(DistanceToMove.X, 0.0f, DistanceToMove.Y);
		SetActorLocation(NewLocation);
	}
}

/// @brief Launches the projectile.
/// @param Direction The direction to launch the projectile.
/// @param Speed The speed to launch the projectile.
/// @param Launcher The actor who launched the projectile.
void AProjectile::Launch(FVector2D Direction, float Speed, AActor* Launcher)
{
	if (IsLaunched) return;

	WhoLaunchedMe = Launcher;
	IsLaunched = true;
	MovementDirection = Direction;
	MovementSpeed = Speed;

	float DeleteTime = 10.0f;
	GetWorldTimerManager().SetTimer(DeleteTimer, this, &AProjectile::OnDeleteTimerTimeout, 1.0f, false, DeleteTime);
}

/// @brief Called when the delete timer times out.
void AProjectile::OnDeleteTimerTimeout()
{
	Destroy();
}

/// @brief Called when an overlap begins.
/// @param OverlappedComponent The component that was overlapped.
/// @param OtherActor The other actor involved in the overlap.
/// @param OtherComp The other component involved in the overlap.
/// @param OtherBodyIndex The body index of the other component.
/// @param FromSweep Whether the overlap was from a sweep.
/// @param SweepResult The result of the sweep.
void AProjectile::OverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool FromSweep, const FHitResult& SweepResult)
{
}


