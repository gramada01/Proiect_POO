// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCharacter.h"

#include "Obstacle.h"
#include <iostream>


// Sets default values
APlayerCharacter::APlayerCharacter() : APawn{}, _runner(this, 350, 250)
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

	
}

// Called when the game starts or when spawned
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

// Called every frame
void APlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	//Do steps for Emergency Run ability
	if (_runner.isRunning())
	{
		_runner.doStep(DeltaTime);
		return;
	}

	//Move Player
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

	//Rotate the Bow
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

// Called to bind functionality to input
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

void APlayerCharacter::MoveTriggered(const FInputActionValue& Value)
{
	FVector2D MoveActionValue = Value.Get<FVector2D>();
	GEngine->AddOnScreenDebugMessage(1, 10.0f, FColor::White, MoveActionValue.ToString());

	if (CanMove)
	{
		MovementDirection = MoveActionValue;
	}
}


void APlayerCharacter::MoveCompleted(const FInputActionValue& Value)
{
	MovementDirection = FVector2D(0.0f, 0.0f);
}

void APlayerCharacter::Run(const FInputActionValue& Value)
{
	GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::White, TEXT("Ai fugit!!!"));
	_runner.startRunning();
}

void APlayerCharacter::Shoot(const FInputActionValue& Value)
{
	if (CanShoot)
	{
		CanShoot = false;

		//Spawn Arrow
		AProjectile* Arrow = GetWorld()->SpawnActor<AProjectile>(ProjectileActorToSpawn, ArrowSpawnPosition->GetComponentLocation(), FRotator(rotation.Pitch - 90.0f, rotation.Yaw, rotation.Roll));
		if (Arrow)
		{
			//Get Mouse Positiopn
			APlayerController* PlayerController = Cast<APlayerController>(Controller);
			check(PlayerController);
			FVector MouseWorldLocation, MouseWorldDirection;
			PlayerController->DeprojectMousePositionToWorld(MouseWorldLocation, MouseWorldDirection);

			//Get travel direction for Arrow
			FVector CurrentLocation = GetActorLocation();
			FVector2D ArrowDirection = FVector2D(MouseWorldLocation.X - CurrentLocation.X, MouseWorldLocation.Z - CurrentLocation.Z);

			//Launch Arrow
			float ArrowSpeed = 250.0f;
			Arrow->Launch(ArrowDirection, ArrowSpeed, this);
		}
		else
			GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::White, TEXT("Eroare la Arrow!!!!"));
		GetWorldTimerManager().SetTimer(ShootCooldownTimer, this, &APlayerCharacter::OnShootCooldownTimerTimeout, 1.0f, false, ShootCooldownDurationInSeconds);
	}
}

void APlayerCharacter::OnShootCooldownTimerTimeout()
{
	CanShoot = true;
}

void APlayerCharacter::OverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool FromSweep, const FHitResult& SweepRsult)
{

}
