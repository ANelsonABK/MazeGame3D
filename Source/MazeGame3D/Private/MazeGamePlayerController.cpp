// Fill out your copyright notice in the Description page of Project Settings.


#include "MazeGamePlayerController.h"
//#include "GameFramework/Character.h"
//#include "Kismet/GameplayStatics.h"
//#include "GameFramework/CharacterMovementComponent.h"
//#include "Math/RotationMatrix.h"

//void AMazeGamePlayerController::SetupInputComponent()
//{
//	//Super::SetupInputComponent();
//	if (InputComponent)
//	{
//		InputComponent->BindAction(TEXT("Jump"), EInputEvent::IE_Pressed, 
//			this, &AMazeGamePlayerController::RequestJump);
//		InputComponent->BindAction(TEXT("Jump"), EInputEvent::IE_Released, 
//			this, &AMazeGamePlayerController::RequestStopJump);
//
//		InputComponent->BindAction(TEXT("Crouch"), EInputEvent::IE_Pressed, 
//			this, &AMazeGamePlayerController::RequestCrouchStart);
//		InputComponent->BindAction(TEXT("Crouch"), EInputEvent::IE_Released, 
//			this, &AMazeGamePlayerController::RequestCrouchEnd);
//
//		InputComponent->BindAction(TEXT("PullorAimObject"), EInputEvent::IE_Pressed, 
//			this, &AMazeGamePlayerController::RequestPullorAimObject);
//		InputComponent->BindAction(TEXT("PullorAimObject"), EInputEvent::IE_Released, 
//			this, &AMazeGamePlayerController::RequestStopPullorAimObject);
//
//		InputComponent->BindAction(TEXT("Jump"), EInputEvent::IE_Pressed, 
//			this, &AMazeGamePlayerController::RequestJump);
//		InputComponent->BindAction(TEXT("Jump"), EInputEvent::IE_Released, 
//			this, &AMazeGamePlayerController::RequestJump);
//
//		InputComponent->BindAxis(TEXT("MoveForward"), this, 
//			&AMazeGamePlayerController::RequestMoveForward);
//		InputComponent->BindAxis(TEXT("MoveRight"), this,
//			&AMazeGamePlayerController::RequestMoveRight);
//		InputComponent->BindAxis(TEXT("LookUp"), this,
//			&AMazeGamePlayerController::RequestLookUp);
//		InputComponent->BindAxis(TEXT("LookRight"), this,
//			&AMazeGamePlayerController::RequestLookRight);
//		InputComponent->BindAxis(TEXT("ThrowObject"), this,
//			&AMazeGamePlayerController::RequestThrowObject);
//	}
//}
//
//bool AMazeGamePlayerController::CanProcessRequest() const
//{
//
//	return false;
//}
//
//void AMazeGamePlayerController::RequestMoveForward(float AxisValue)
//{
//	if (AxisValue != 0.0f)
//	{
//		FRotator const ConstrolSpaceRot = GetControlRotation();
//		// transform to world space and add it
//		GetPawn()->AddMovementInput(FRotationMatrix(ConstrolSpaceRot).GetScaledAxes(EAxis::X), 
//			AxisValue);
//	}
//}
//
//void AMazeGamePlayerController::RequestMoveRight(float AxisValue)
//{
//}
//
//void AMazeGamePlayerController::RequestLookUp(float AxisValue)
//{
//}
//
//void AMazeGamePlayerController::RequestLookRight(float AxisValue)
//{
//}
//
//void AMazeGamePlayerController::RequestThrowObject(float AxisValue)
//{
//}
//
//void AMazeGamePlayerController::RequestJump()
//{
//	if (GetCharacter())
//	{
//		GetCharacter()->Jump();
//	}
//}
//
//void AMazeGamePlayerController::RequestStopJump()
//{
//}
//
//void AMazeGamePlayerController::RequestCrouchStart()
//{
//	if(GetCharacter())
//	if (GetCharacter())
//	{
//		GetCharacter()->Jump();
//	}
//}
//
//void AMazeGamePlayerController::RequestCrouchEnd()
//{
//}
//
//void AMazeGamePlayerController::RequestSprintStart()
//{
//}
//
//void AMazeGamePlayerController::RequestSprintEnd()
//{
//}
//
//void AMazeGamePlayerController::RequestPullorAimObject()
//{
//}
//
//void AMazeGamePlayerController::RequestStopPullorAimObject()
//{
//}
