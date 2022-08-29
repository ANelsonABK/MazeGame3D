// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MazeGameCharacterBase.generated.h"

UCLASS()
class MAZEGAME3D_API AMazeGameCharacterBase : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMazeGameCharacterBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category = "Fall Impact")
		float MinImpactSpeed = 100.0f;

	UPROPERTY(EditAnywhere, Category = "Fall Impact")
		float MaxImpactSpeed = 500.0f;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


	virtual void Landed(const FHitResult& Hit) override;
};
