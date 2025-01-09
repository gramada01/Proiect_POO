/// @file PlayerCharacter.cpp
/// @brief This file contains the implementation of the APlayerCharacter class methods.

#include "PlayerCharacter.h"
#include "Obstacle.h"
#include <iostream>
#include <Kismet/GameplayStatics.h>
#include "Maui.h"
#include "Ghoul.h"

/// @brief Default constructor.
APlayerCharacter::APlayerCharacter() : APawn{}, _runner(this, 350, 250), Observer{}
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CapsuleComp = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CapsuleComp"));
	SetRootComponent(CapsuleComp);

	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArm->SetupAttachment(RootComponent);

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(SpringArm, USpringArmComponent::SocketName);

	ArcherSprite = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("ArcherSprite"));
	ArcherSprite->SetupAttachment(RootComponent);

	BowParent = CreateDefaultSubobject<USceneComponent>(TEXT("BowParent"));
	BowParent->SetupAttachment(RootComponent);

	BowSprite = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("BowSprite"));
	BowSprite->SetupAttachment(BowParent);

	ArrowSpawnPosition = CreateDefaultSubobject<USceneComponent>(TEXT("ArrowSpawnPosition"));
	ArrowSpawnPosition->SetupAttachment(BowSprite);

	EnemySubject = MakeShared<Subject>();
	SetEnemySubject(EnemySubject);
}

/// @brief Destructor.
APlayerCharacter::~APlayerCharacter()
{
}

/// @brief Called when the game starts or when spawned.
void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();

	CapsuleComp->OnComponentBeginOverlap.AddDynamic(this, &APlayerCharacter::OverlapBegin);

	APlayerController* PlayerController = Cast<APlayerController>(Controller);
	if (PlayerController)
	{
		PlayerController->SetShowMouseCursor(true);

		UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer());
		if (Subsystem)
		{
			Subsystem->AddMappingContext(InputMappingContext, 0);
		}
	}
}

/// @brief Called every frame.
/// @param DeltaTime The time elapsed since the last frame.
void APlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Do steps for Emergency Run ability
	if (_runner.isRunning())
	{
		_runner.doStep(DeltaTime);
		return;
	}

	// Move Player
	if (CanMove)
	{
		if (MovementDirection.Length() > 0.0f)
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

	// Rotate the Bow
	APlayerController* PlayerController = Cast<APlayerController>(Controller);
	if (PlayerController)
	{
		FVector MouseWorldLocation, MouseWorldDirection;
		PlayerController->DeprojectMousePositionToWorld(MouseWorldLocation, MouseWorldDirection);

		FVector CurrentLocation = GetActorLocation();
		FVector Start = FVector(CurrentLocation.X, 0.0f, CurrentLocation.Z);
		FVector Target = FVector(MouseWorldLocation.X, 0.0f, MouseWorldLocation.Z);
		rotation = UKismetMathLibrary::FindLookAtRotation(Start, Target);

		BowParent->SetRelativeRotation(rotation);
	}
}

/// @brief Called to bind functionality to input.
/// @param PlayerInputComponent The input component to bind functionality to.
void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent);
	if (EnhancedInputComponent)
	{
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &APlayerCharacter::MoveTriggered);
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Completed, this, &APlayerCharacter::MoveCompleted);
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Canceled, this, &APlayerCharacter::MoveTriggered);

		EnhancedInputComponent->BindAction(EmergencyRunAction, ETriggerEvent::Triggered, this, &APlayerCharacter::Run);

		EnhancedInputComponent->BindAction(ShootAction, ETriggerEvent::Started, this, &APlayerCharacter::Shoot);
		EnhancedInputComponent->BindAction(ShootAction, ETriggerEvent::Triggered, this, &APlayerCharacter::Shoot);
	}
}

/// @brief Called when the move action is triggered.
/// @param Value The input action value.
void APlayerCharacter::MoveTriggered(const FInputActionValue& Value)
{
	FVector2D MoveActionValue = Value.Get<FVector2D>();
	GEngine->AddOnScreenDebugMessage(1, 10.0f, FColor::White, MoveActionValue.ToString());

	if (CanMove)
	{
		MovementDirection = MoveActionValue;
	}
}

/// @brief Called when the move action is completed.
/// @param Value The input action value.
void APlayerCharacter::MoveCompleted(const FInputActionValue& Value)
{
	MovementDirection = FVector2D(0.0f, 0.0f);
}

/// @brief Performs an emergency run.
/// @param Value The input action value.
void APlayerCharacter::Run(const FInputActionValue& Value)
{
	GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::White, TEXT("Ai fugit!!!"));
	_runner.startRunning();
}

/// @brief Shoots a projectile.
/// @param Value The input action value.
void APlayerCharacter::Shoot(const FInputActionValue& Value)
{
	if (CanShoot)
	{
		CanShoot = false;

		// Spawn Arrow
		AProjectile* Arrow = GetWorld()->SpawnActor<AProjectile>(ProjectileActorToSpawn, ArrowSpawnPosition->GetComponentLocation(), FRotator(rotation.Pitch - 90.0f, rotation.Yaw, rotation.Roll));
		if (Arrow)
		{
			// Get Mouse Position
			APlayerController* PlayerController = Cast<APlayerController>(Controller);
			check(PlayerController);
			FVector MouseWorldLocation, MouseWorldDirection;
			PlayerController->DeprojectMousePositionToWorld(MouseWorldLocation, MouseWorldDirection);

			// Get travel direction for Arrow
			FVector CurrentLocation = GetActorLocation();
			FVector2D ArrowDirection = FVector2D(MouseWorldLocation.X - CurrentLocation.X, MouseWorldLocation.Z - CurrentLocation.Z);

			// Launch Arrow
			float ArrowSpeed = 250.0f;
			Arrow->Launch(ArrowDirection, ArrowSpeed, this);
		}
		else
		{
			GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::White, TEXT("Eroare la Arrow!!!!"));
		}
		GetWorldTimerManager().SetTimer(ShootCooldownTimer, this, &APlayerCharacter::OnShootCooldownTimerTimeout, 1.0f, false, ShootCooldownDurationInSeconds);
	}
}

/// @brief Called when the shoot cooldown timer times out.
void APlayerCharacter::OnShootCooldownTimerTimeout()
{
	CanShoot = true;
}

/// @brief Called when an overlap begins.
/// @param OverlappedComponent The component that was overlapped.
/// @param OtherActor The other actor involved in the overlap.
/// @param OtherComp The other component involved in the overlap.
/// @param OtherBodyIndex The body index of the other component.
/// @param FromSweep Whether the overlap was from a sweep.
/// @param SweepResult The result of the sweep.
void APlayerCharacter::OverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool FromSweep, const FHitResult& SweepResult)
{
}

/// @brief Called when an enemy is killed.
/// @param KilledActor The actor that was killed.
void APlayerCharacter::OnEnemyKilled(AActor* KilledActor)
{
	kills++;

	bool IsMaui = EnemyType<AMaui>::IsType(KilledActor);
	bool IsGhoul = EnemyType<AGhoul>::IsType(KilledActor);

	if (IsMaui)
	{
		GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::White, FString::Printf(TEXT("Maui DISTRUS!!!")));
	}
	else if (IsGhoul)
	{
		GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::White, FString::Printf(TEXT("Ghoul DISTRUS!!!")));
	}

	AMyGameMode* GameMode = Cast<AMyGameMode>(UGameplayStatics::GetGameMode(this));
	if (GameMode)
	{
		GameMode->SetKills(kills);
	}

	UE_LOG(LogTemp, Warning, TEXT("Kills: %d"), kills);
}

/// @brief Gets the enemy subject.
/// @return The enemy subject.
TSharedPtr<Subject> APlayerCharacter::GetEnemySubject()
{
	return EnemySubject;
}

/// @brief Sets the enemy subject.
/// @param InSubject The enemy subject to set.
void APlayerCharacter::SetEnemySubject(TSharedPtr<Subject> InSubject)
{
	if (EnemySubject)
	{
		EnemySubject->Detach(this);
	}
	EnemySubject = InSubject;
	if (EnemySubject)
	{
		EnemySubject->Attach(this);
	}
}