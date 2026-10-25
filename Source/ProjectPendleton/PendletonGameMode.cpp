// Fill out your copyright notice in the Description page of Project Settings.


#include "PendletonGameMode.h"
#include "PendletonPlayerController.h"
#include "PendletonCharacter.h"
#include "UObject/ConstructorHelpers.h"

// Sets default values
APendletonGameMode::APendletonGameMode()
{
 	// use our custom PlayerController class
    PlayerControllerClass = APendletonPlayerController::StaticClass();
    
    // set default pawn class to our Blueprinted character
    static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_PlayerAvatar"));
    if(PlayerPawnBPClass.Class != nullptr)
    {
        DefaultPawnClass = PlayerPawnBPClass.Class;
    }
    
    // set default controller to our Blueprinted controller
    static ConstructorHelpers::FClassFinder<APlayerController> PlayerControllerBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_PlayerController"));
    if(PlayerControllerBPClass.Class != NULL)
    {
        PlayerControllerClass = PlayerControllerBPClass.Class;
    }
}
