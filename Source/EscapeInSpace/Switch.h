// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SurveillanceCamera.h"
#include "Toggleable.h"
#include "Switch.generated.h"

UCLASS()
class ESCAPEINSPACE_API ASwitch : public AToggleable
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASwitch();
    
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
   
	
};
