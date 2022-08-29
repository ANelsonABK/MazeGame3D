// Fill out your copyright notice in the Description page of Project Settings.


#include "MazeGameCharacterBase.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "MazeGamePlayerController.h"

// Sets default values
AMazeGameCharacterBase::AMazeGameCharacterBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMazeGameCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMazeGameCharacterBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMazeGameCharacterBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AMazeGameCharacterBase::Landed(const FHitResult& Hit)
{
	Super::Landed(Hit);

	// custom landed code
	AMazeGamePlayerController* MazeGamePlayerController = GetController<AMazeGamePlayerController>();
	if (MazeGamePlayerController)
	{
		const float FallImpactSpeed = FMath::Abs(GetVelocity().Z);
		if (FallImpactSpeed < MinImpactSpeed)
		{
			// nothing to do, very light fall
			return;
		}

		const float DeltaImpact = MaxImpactSpeed - MinImpactSpeed;
		const float FallRatio = FMath::Clamp((FallImpactSpeed - MinImpactSpeed) / DeltaImpact, 0.0f, 1.0f);
		const bool bAffectSmall = FallRatio <= 0.5;
		const bool bAffectLarge = FallRatio > 0.5;
		MazeGamePlayerController->PlayDynamicForceFeedback(FallRatio, 0.5f, bAffectLarge, bAffectSmall, bAffectLarge, bAffectSmall);
	}
}

