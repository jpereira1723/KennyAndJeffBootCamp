// Fill out your copyright notice in the Description page of Project Settings.


#include "PendletonGameState.h"
#include "Engine/Engine.h"



APendletonGameState::APendletonGameState()
{
    gameState = EPlayerState::Freeroam;
    
    
    if(GEngine)
    {
        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("FREEROAM Mode"));
    }
    
}

void APendletonGameState::ChangeGameState()
{
    switch (gameState){
        case EPlayerState::Freeroam:
            gameState = EPlayerState::Running;
            GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("RUNNING Mode"));
            break;
        case EPlayerState::Running:
            gameState = EPlayerState::PushUps;
            GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("PUSH UP Mode"));
            break;
        case EPlayerState::PushUps:
            gameState = EPlayerState::PullUps;
            GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("PULL UP Mode"));
            break;
        case EPlayerState::PullUps:
            gameState = EPlayerState::JumpingJacks;
            GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("JUMPING JACKS Mode"));
            break;
        case EPlayerState::JumpingJacks:
            gameState = EPlayerState::Burpees;
            GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("BURPEES Mode"));
            break;
        case EPlayerState::Burpees:
            gameState = EPlayerState::SitUps;
            GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("SIT UPS Mode"));
            break;
        default:
            gameState = EPlayerState::Freeroam;
            GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("FREEROAM Mode"));
            break;
    }
}
