// Fill out your copyright notice in the Description page of Project Settings.


#include "Spawner.h"

// Sets default values
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

// Called when the game starts or when spawned
void ASpawner::BeginPlay()
{
	Super::BeginPlay();
	
	CapsuleComp->OnComponentBeginOverlap.AddDynamic(this, &ASpawner::OverlapBegin);
}

// Called every frame
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
		GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::White, TEXT("SPAWN!!!!"));
		

		AEnemy* Enemy = GetWorld()->SpawnActor<AEnemy>(EnemyToSpawn, GetActorLocation(), FRotator::ZeroRotator);
		check(Enemy);
		

		AActor* PlayerActor = UGameplayStatics::GetActorOfClass(GetWorld(), APlayerCharacter::StaticClass());
		APlayerCharacter* player = Cast<APlayerCharacter>(PlayerActor);
		Enemy->Spawn(player);

		--NumberOfEnemiesToSpawn;
		GetWorldTimerManager().SetTimer(SpawnCooldownTimer, this, &ASpawner::OnSpawnCooldownTimerTimeout, 1.0f, false, SpawnCooldownDurationInSeconds);

	}
}

void ASpawner::OverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool FromSweep, const FHitResult& SweepRsult)
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



void ASpawner::OnSpawnCooldownTimerTimeout()
{
	if(NumberOfEnemiesToSpawn > 0)
		CanSpawn = true;
}
