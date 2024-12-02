// Fill out your copyright notice in the Description page of Project Settings.


#include "Projectile.h"

#include "Kismet/KismetMathLibrary.h"

// Sets default values
AProjectile::AProjectile() : AActor{}
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CapsuleComp = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CapsuleComp"));
	SetRootComponent(CapsuleComp);

	ProjectileSprite = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("ProjectileSprite"));
	ProjectileSprite->SetupAttachment(RootComponent);

}

// Called when the game starts or when spawned
void AProjectile::BeginPlay()
{
	Super::BeginPlay();
	
	CapsuleComp->OnComponentBeginOverlap.AddDynamic(this, &AProjectile::OverlapBegin);
}

// Called every frame
void AProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if(IsLaunched)
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

void AProjectile::OnDeleteTimerTimeout()
{
	Destroy();
}

void AProjectile::OverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool FromSweep, const FHitResult& SweepRsult)
{

}
