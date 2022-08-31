// Fill out your copyright notice in the Description page of Project Settings.


#include "ThrowableActor.h"
#include "Components/StaticMeshComponent.h"
#include "Gameframework/Character.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "MazeGamePlayerCharacter.h"

// Sets default values
AThrowableActor::AThrowableActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

//void AThrowableActor::BeginPlay()
//{
//}

void AThrowableActor::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
}

bool AThrowableActor::Pull(AActor* InActor)
{
	return false;
}

void AThrowableActor::Launch(const FVector& InitialVelocity, AActor* Target)
{
}

void AThrowableActor::Drop()
{
}

void AThrowableActor::ToggleHighlight(bool bIsOn)
{
}

void AThrowableActor::NotifyHit(UPrimitiveComponent* MyComp, AActor* Other, 
	UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, 
	FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit)
{
}

void AThrowableActor::ProjectileStop(const FHitResult& ImpactResult)
{
}

bool AThrowableActor::SetHomingTarget(AActor* Target)
{
	return false;
}


