// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/PlayerController.h"
#include "PendletonPlayerController.generated.h"

/**
 * 
 */
class UNiagaraSystem;

UCLASS()
class PROJECTPENDLETON_API APendletonPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
    APendletonPlayerController();
    
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
    float ShortPressThreshold;
    
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
    UNiagaraSystem* FXCursor;
    
protected:
    
    virtual void PlayerTick(float DeltaTime) override;
    virtual void SetupInputComponent() override;
    
    void OnSetDestinationPressed();
    void OnSetDestinationReleased();
    void OnChangeModeReleased();
    void OnTouchPressed(const ETouchIndex::Type FingerIndex, const FVector Location);
    void OnTouchReleased(const ETouchIndex::Type FingerIndex, const FVector Location);
    
private:
    bool bInputPressed;
    bool bIsTouch;
    float FollowTime;
};
