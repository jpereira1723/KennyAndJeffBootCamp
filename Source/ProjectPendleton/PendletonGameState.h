// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "PendletonGameState.generated.h"

/**
 * 
 */

UENUM(BlueprintType)
enum class EPlayerState : uint8
{
    Freeroam,
    Running,
    PushUps,
    PullUps,
    JumpingJacks,
    Burpees,
    SitUps
};

UCLASS()
class PROJECTPENDLETON_API APendletonGameState : public AGameStateBase
{
	GENERATED_BODY()
    
public:
    EPlayerState gameState;
    APendletonGameState();
    void ChangeGameState();
	
};
