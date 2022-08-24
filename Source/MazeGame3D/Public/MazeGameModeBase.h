// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Blueprint/UserWidget.h"
#include "MazeGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class MAZEGAME3D_API AMazeGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	

public:
	AMazeGameModeBase() {}

	UPROPERTY(EditDefaultsOnly)
		TSubclassOf<UUserWidget> ObjectiveWidgetClass;

	UPROPERTY(EditDefaultsOnly)
		TSubclassOf<UUserWidget> ObjectivesCompleteWidgetClass;
};
