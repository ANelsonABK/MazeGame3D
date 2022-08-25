// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "MazeGamePlayerController.generated.h"

/**
 * 
 */
UCLASS()
class MAZEGAME3D_API AMazeGamePlayerController : public APlayerController
{
	GENERATED_BODY()
	

public:
	AMazeGamePlayerController() {}


protected:
	void SetupInputComponent() override;

	void RequestMoveForward(float AxisValue);
	void RequestMoveRight(float AxisValue);
	void RequestLookUp(float AxisValue);
	void RequestLookRight(float AxisValue);
	void RequestJump();
	void RequestStopJump();

	void RequestCrouchStart();
	void RequestCrouchEnd();

	void RequestSprintStart();
	void RequestSprintEnd();

	/* Base lookup rate, in deg/sec. Other scaling may affect final lookup rate. */
	UPROPERTY(EditAnywhere, Category = "Look")
		float BaseLookupRate = 90.0f;

	/* Base lookright rate, in deg/sec. Other scaling may affect final lookup rate. */
	UPROPERTY(EditAnywhere, Category = "Look")
		float BaseLookRightRate = 90.0f;

	UPROPERTY(EditAnywhere, Category = "Movement")
		float SprintSpeed = 1200.0f;
};
