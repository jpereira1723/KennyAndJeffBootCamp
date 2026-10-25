// Fill out your copyright notice in the Description page of Project Settings.


#include "PendletonPlayerController.h"
#include "PendletonGameState.h"
#include "GameFramework/Pawn.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "NiagaraSystem.h"
#include "NiagaraFunctionLibrary.h"
#include "PendletonCharacter.h"
#include "Engine/World.h"
#include "Engine/Engine.h"

APendletonPlayerController::APendletonPlayerController()
{
    bShowMouseCursor = false;
    
}


void APendletonPlayerController::PlayerTick(float DeltaTime)
{
    
}

void APendletonPlayerController::SetupInputComponent()
{
    Super::SetupInputComponent();
    
    InputComponent->BindAction("Stride", IE_Pressed, this, &APendletonPlayerController::OnSetDestinationPressed);
    InputComponent->BindAction("Stride", IE_Released, this, &APendletonPlayerController::OnSetDestinationReleased);
    InputComponent->BindAction("ChangeMode", IE_Pressed, this, &APendletonPlayerController::OnChangeModeReleased);
    
    // support touch devices
    InputComponent->BindTouch(EInputEvent::IE_Pressed, this, &APendletonPlayerController::OnTouchPressed);
    InputComponent->BindTouch(EInputEvent::IE_Released, this, &APendletonPlayerController::OnTouchReleased);
}

void APendletonPlayerController::OnSetDestinationPressed()
{
    bInputPressed = true;
    StopMovement();
}

void APendletonPlayerController::OnChangeModeReleased()
{
    GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Trying to change"));
    APendletonGameState* MyGameState = GetWorld()->GetGameState<APendletonGameState>();
    MyGameState->ChangeGameState();
}

void APendletonPlayerController::OnSetDestinationReleased()
{
    bInputPressed = false;
    
    
}

void APendletonPlayerController::OnTouchPressed(const ETouchIndex::Type FingerIndex, const FVector Location)
{
    bIsTouch = true;
    OnSetDestinationPressed();
}

void APendletonPlayerController::OnTouchReleased(const ETouchIndex::Type FingerIndex, const FVector Location)
{
    bIsTouch = false;
    OnSetDestinationReleased();
}
