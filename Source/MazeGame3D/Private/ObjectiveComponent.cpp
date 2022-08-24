// Fill out your copyright notice in the Description page of Project Settings.


#include "ObjectiveComponent.h"
#include "Engine/World.h"

// Sets default values for this component's properties
UObjectiveComponent::UObjectiveComponent()
{
	bWantsInitializeComponent = true;
	PrimaryComponentTick.bCanEverTick = false;
	State = EObjectiveState::OS_Inactive;
}


void UObjectiveComponent::SetState(EObjectiveState NewState)
{
	if (NewState != State)
	{
		State = NewState;
		OnStateChanged.Broadcast(this, NewState);
	}
}

void UObjectiveComponent::InitializeComponent()
{
	Super::InitializeComponent();
	//register
	//UObjectiveWorldSubsystem* ObjectiveWorldSubsystem = GetWorld()->GetSubsystem<UObjectiveWorldSubsystem>();
	//if (ObjectiveWorldSubsystem)
	//{
	//	ObjectiveWorldSubsystem->AddObjective(this);
	//}
}

void UObjectiveComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	//UObjectiveWorldSubsystem* ObjectiveWorldSubsystem = GetWorld()->GetSubsystem<UObjectiveWorldSubsystem>();
	//if (ObjectiveWorldSubsystem)
	//{
	//	ObjectiveWorldSubsystem->RemoveObjective(this);
	//}
	Super::EndPlay(EndPlayReason);
}